#include "wizard.h"
#include "selection.h"
#include "ui_wizard.h"

#include <projectedraster.hh>
#include <reprojector.hh>

#include <QFileSystemModel>
#include <string>
#include <QString>
#include <iostream>

Wizard::Wizard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Wizard)
{
    ui->setupUi(this);

    prepareUi();
}

Wizard::~Wizard()
{
    delete ui;
}

void Wizard::prepareUi()
{
    //Initialize page to zero for iteration later.
    page=0;

    //Disable all non-applicable menubar items
    ui->actionLoad_Projection_Info->setEnabled(false);
    ui->actionSave_Projection_Info->setEnabled(false);
    ui->actionToggle_Preview->setEnabled(false);
    ui->actionOpen->setEnabled(false);
    ui->actionSave_Reprojection->setEnabled(false);

    //Disable Back button for initial screen
    ui->btnBack->setEnabled(false);

    Selection *s = new Selection(this);

    //SIGNALS & SLOTS
    ////Flow Control of the Pages
    connect(ui->btnCancel, SIGNAL(clicked()), s, SLOT(showSelection()));
    connect(ui->btnCancel, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->btnNext, SIGNAL(clicked()), this, SLOT(nextPage()));
    connect(this, SIGNAL(indexChanged(int)), ui->mainWidget, SLOT(setCurrentIndex(int)));
    connect(ui->btnBack, SIGNAL(clicked()), this, SLOT(prevPage()));
    connect(this, SIGNAL(indexChanged(int)), ui->mainWidget, SLOT(setCurrentIndex(int)));
    ////Menubar actions
    connect(ui->actionSelection_Screen, SIGNAL(triggered()), s, SLOT(showSelection()));
    connect(ui->actionSelection_Screen, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionAbout_dRasterBlaster, SIGNAL(triggered()), s, SLOT(about()));
    connect(ui->actionAbout_Qt, SIGNAL(triggered()), s, SLOT(aboutQt()));
    connect(ui->actionEdit_Author, SIGNAL(triggered()), s, SLOT(showEditAuthor()));
    connect(ui->actionUser_Guide, SIGNAL(triggered()), s, SLOT(showUserGuide()));
    ////Others
    connect(ui->fileView, SIGNAL(clicked(QModelIndex)), this, SLOT(enableNext()));
    connect(ui->inputProjectionBox, SIGNAL(currentIndexChanged(int)), this, SLOT(changeInputProjection(int)));
    connect(ui->outProjectionBox, SIGNAL(currentIndexChanged(int)), this, SLOT(changeOutProjection(int)));
    connect(ui->fillEnable, SIGNAL(toggled(bool)), this, SLOT(enableFillValue(bool)));
    connect(ui->noDataValueEnable, SIGNAL(toggled(bool)), this, SLOT(enableDataValue(bool)));


    //Setup File Selection Objects
    dirModel = new QFileSystemModel(this);
    QHeaderView *h = ui->dirView->header();
    h->hideSection(2);

    dirModel->setRootPath("D:");
    dirModel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    ui->dirView->setModel(dirModel);
    ui->dirView_2->setModel(dirModel);

    fileModel = new QFileSystemModel;
    fileModel->setRootPath("");
    fileModel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
    ui->fileView->setModel(fileModel);
    ui->fileView->hide();
}

void Wizard::nextPage()
{
    ui->btnBack->setEnabled(true);

    if (page == (ui->mainWidget->count()-2)) //Switching to last page
    {
        saveReprojection();
        ui->btnNext->setText("Finish");
        ui->btnCancel->setEnabled(false);
        Selection *s = new Selection(this);
        connect(ui->btnNext, SIGNAL(clicked()), this, SLOT(close()));
        connect(ui->btnNext, SIGNAL(clicked()), s, SLOT(showSelection()));
    } else if (page == 1){ //Upon switching from File Selection
        openRaster();
    } else if (page == 0){ //Switching from Initial Screen
        ui->btnNext->setEnabled(false);
    } else if (page == 2){ //Check the Input Options
        checkInputs();
    } else if (page == 3){ //Check the Input Projections and prepare output
        checkInputs();
        prepareOutputUi();
    } else if (page == 5){
        showPreview();
    }
    emit indexChanged(++page);
}

void Wizard::prevPage()
{
    if (page == 1) //Going back to initial screen
        ui->btnBack->setEnabled(false);
    if (ui->btnNext->text() == "Finished") //Back to reproject screen
    {
        Selection *s = new Selection(this);
        disconnect(ui->btnNext,SIGNAL(clicked()), this, SLOT(close()));
        disconnect(ui->btnNext, SIGNAL(clicked()), s, SLOT(showSelection()));
        ui->btnCancel->setEnabled(true);
    }
    ui->btnNext->setEnabled(true);
    emit indexChanged(--page);
}

void Wizard::openRaster()
{
    QModelIndexList list = ui->fileView->selectionModel()->selectedIndexes();

    foreach (QModelIndex index, list)
    {
        if (ui->fileView->selectionModel()->isSelected(index))
        {
            string file = fileModel->fileInfo(index).absoluteFilePath().toUtf8().constData();
            in = shared_ptr<ProjectedRaster>(new ProjectedRaster(file));
            if (in->isReady() == false) {
                //error opening file
                std::cout << "FILE NOT READY" << std::endl;
                return;
            }
            prepareInputUi();
        }
    }
    //Error none selected
}

void Wizard::prepareInputUi()
{
    //Fill in Input Options with current raster's data
    ui->Rows->setText(QString::number(nRows = in->getRowCount()));
    ui->Cols->setText(QString::number(nCols = in->getColCount()));
    ui->pixelSize->setText(QString::number(nPixel_size = in->getPixelSize()));
    ui->pixelType->setCurrentIndex(nType = in->getPixelType());
    ui->Latitude->setText(QString::number(nUl_x = in->ul_x));
    ui->Longitude->setText(QString::number(nUl_y = in->ul_y));
    ui->bandCount->setText(QString::number(nBand_count = in->bandCount()));
    ui->sheroid->setCurrentIndex(nDatum = in->getDatum());

    QIntValidator *intValid = new QIntValidator(this);
    intValid->setBottom(0);

    QDoubleValidator *doubleStdValid = new QDoubleValidator(this);
    doubleStdValid->setNotation(QDoubleValidator::StandardNotation);
    doubleStdValid->setBottom(0.0);
    QDoubleValidator *doubleValid = new QDoubleValidator(this);

    ui->Rows->setValidator(intValid);
    ui->Cols->setValidator(intValid);
    ui->FillValue->setValidator(intValid);
    ui->noDataValue->setValidator(intValid);
    ui->Latitude->setValidator(doubleValid);
    ui->Longitude->setValidator(doubleValid);
    ui->pixelSize->setValidator(doubleStdValid);

    //Fill in Input Projection Options with current raster's data
    ui->inputProjectionBox->setCurrentIndex(nProj = ALBERS);//nProj = in->getProjection()->number());
    for(int i=0; i < 15; i++)
    {
        originalParams[i] = in->getProjection()->param(i);
    }
    switch(nProj)
    {
    case _UTM:

        break;
    case ALBERS:
        ui->ALBERS_SMajor->setText(QString::number(in->getProjection()->param(0)));
        ui->ALBERS_SMinor->setText(QString::number(in->getProjection()->param(1)));
        ui->ALBERS_STDPR1->setText(QString::number(in->getProjection()->param(2)));
        ui->ALBERS_STDPR2->setText(QString::number(in->getProjection()->param(3)));
        ui->ALBERS_CENTMER->setText(QString::number(in->getProjection()->param(4)));
        ui->ALBERS_ORIGIN->setText(QString::number(in->getProjection()->param(5)));
        ui->ALBERS_FE->setText(QString::number(in->getProjection()->param(6)));
        ui->ALBERS_FN->setText(QString::number(in->getProjection()->param(7)));
        break;
    default:
        break;
    }

}

void Wizard::prepareOutputUi()
{
    //Copy Input Options to the Output options initially
    ui->outRows->setText(QString::number(nRows));
    ui->outCols->setText(QString::number(nCols));
    ui->outPixelSize->setText(QString::number(nPixel_size));
    ui->outPixelType->setCurrentIndex(nType);
    ui->outLatitude->setText(QString::number(nUl_x));
    ui->outLongitude->setText(QString::number(nUl_y));
    ui->outBandCount->setText(QString::number(nBand_count));
    ui->outSheroid->setCurrentIndex(nDatum);

    //Copy Input Projection Options to the Output options initially
    ui->outProjectionBox->setCurrentIndex(nProj);
    switch(nProj)
    {
    case _UTM:

        break;
    case ALBERS:
        //Pull from a GCTP_PARAMS ARRAY
        ui->ALBERS_SMajor_3->setText(QString::number(originalParams[0]));
        ui->ALBERS_SMinor_3->setText(QString::number(originalParams[1]));
        ui->ALBERS_STDPR1_3->setText(QString::number(originalParams[2]));
        ui->ALBERS_STDPR2_3->setText(QString::number(originalParams[3]));
        ui->ALBERS_CENTMER_3->setText(QString::number(originalParams[4]));
        ui->ALBERS_ORIGIN_3->setText(QString::number(originalParams[5]));
        ui->ALBERS_FE_3->setText(QString::number(originalParams[6]));
        ui->ALBERS_FN_3->setText(QString::number(originalParams[7]));
        break;
    case HAMMER:

        break;
    default:
        break;
    }
}

//FINISH
void Wizard::checkInputs()
{
    if (nRows != ui->Rows->text().toInt(0,10) && ui->Rows->text().toInt(0,10) < std::numeric_limits<int>::max() )
    nRows = ui->Rows->text().toInt(0,10);
    nCols = ui->Cols->text().toInt(0,10);
    switch(ui->sheroid->currentIndex())
    {
    case 0:
        nDatum = CLARKE_1866;
        break;
    case 1:
        nDatum = CLARKE_1880;
        break;
    case 2:
        nDatum = BESSEL;
        break;
    case 3:
        nDatum = INTERNATIONAL_1967;
        break;
    case 4:
        nDatum = INTERNATIONAL_1909;
        break;
    case 5:
        nDatum = WGS_72;
        break;
    case 6:
        nDatum = EVEREST;
        break;
    case 7:
        nDatum = WGS_66;
        break;
    case 8:
        nDatum = GRS_1980;
        break;
    case 9:
        nDatum = AIRY;
        break;
    case 10:
        nDatum = MODIFIED_EVEREST;
        break;
    case 11:
        nDatum = MODIFIED_AIRY;
        break;
    case 12:
        nDatum = WGS_84;
        break;
    case 13:
        nDatum = SOUTHEAST_ASIA;
        break;
    case 14:
        nDatum = AUSTRALIAN_NATIONAL;
        break;
    case 15:
        nDatum = KRASSOVSKY;
        break;
    case 16:
        nDatum = HOUGH;
        break;
    case 17:
        nDatum = MERCURY_1960;
        break;
    case 18:
        nDatum = MODIFIED_MERCURY_1968;
        break;
    case 19:
        nDatum = EARTH;
        break;
    case 20:
        nDatum = BESSEL_1841_NAMIBIA;
        break;
    case 21:
        nDatum = EVEREST_SABAH;
        break;
    case 22:
        nDatum = EVEREST_INDIA_1956;
        break;
    case 23:
        nDatum = EVEREST_MALAYSIA_1969;
        break;
    case 24:
        nDatum = EVEREST_MALAY_1948;
        break;
    case 25:
        nDatum = EVEREST_PAKISTAN;
        break;
    case 26:
        nDatum = HAYFORD;
        break;
    case 27:
        nDatum = HELMERT_1906;
        break;
    case 28:
        nDatum = INDONESIAN_1974;
        break;
    case 29:
        nDatum = SOUTH_AMERICAN_1969;
        break;
    case 30:
        nDatum = WGS_60;
        break;
    default:
        nDatum = NOT_SET;
        break;
    }

    nPixel_size = ui->pixelSize->text().toFloat(0);
    switch(ui->pixelType->currentIndex())
    {
    case 0:
        nType = GDT_Unknown;
        break;
    case 1:
        nType = GDT_Byte;
        break;
    case 2:
        nType = GDT_UInt16;
        break;
    case 3:
        nType = GDT_Int16;
        break;
    case 4:
        nType = GDT_UInt32;
        break;
    case 5:
        nType = GDT_Int32;
        break;
    case 6:
        nType = GDT_Float32;
        break;
    case 7:
        nType = GDT_Float64;
        break;
    case 8:
        nType = GDT_CInt16;
        break;
    case 9:
        nType = GDT_CInt32;
        break;
    case 10:
        nType = GDT_CFloat32;
        break;
    case 11:
        nType = GDT_CFloat64;
        break;
    }
    nBand_count = ui->bandCount->text().toInt(0,10);
    nUl_x = ui->Latitude->text().toFloat(0);
    nUl_y = ui->Longitude->text().toFloat(0);
    //fill
    //no data

    //Projection
    switch(in->getProjection()->number())
    {
    case _UTM:

        break;
    case ALBERS:
        //Store Changes
        break;
    default:
        break;
    }
}

void Wizard::saveReprojection()
{
    QModelIndexList list = ui->dirView_2->selectionModel()->selectedRows();

    foreach (QModelIndex index, list)
    {
        if (ui->dirView_2->selectionModel()->isSelected(index))
        {
                //std::cout << dirModel->fileInfo(index).absoluteFilePath(). << std::endl;
        }
    }
}

void Wizard::showPreview()
{
    std::vector<ProjParam> params;
    switch (nProj){
    case GEO:
        break;
    case _UTM:
        params.push_back(LON);
        params.push_back(LAT);
        break;
    case SPCS:
        break;
    case ALBERS:
    case LAMCC:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(STDPR1);
        params.push_back(STDPR2);
        params.push_back(CENTMER);
        params.push_back(ORIGINLAT);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case MERCAT:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(CENTMER);
        params.push_back(TRUESCALE);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case PS:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(LONGPOL);
        params.push_back(TRUESCALE);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case POLYC:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(CENTMER);
        params.push_back(ORIGINLAT);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case EQUIDC:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(STDPAR);
        params.push_back(CENTMER);
        params.push_back(ORIGINLAT);
        params.push_back(FE);
        params.push_back(FN);
        //params[8] = ZERO; ????
        break;
    case TM:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(FACTOR);
        params.push_back(CENTMER);
        params.push_back(ORIGINLAT);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case STEREO:
    case LAMAZ:
    case AZMEQD:
    case GNOMON:
    case ORTHO:
        params.push_back(SPHERE);
        params.push_back(CENTLON);
        params.push_back(CENTERLAT);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case GVNSP:
        params.push_back(SPHERE);
        params.push_back(HEIGHT);
        params.push_back(CENTLON);
        params.push_back(CENTERLAT);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case SNSOID:
    case MILLER:
    case ROBIN:
    case MOLL:
    case HAMMER:
    case WAGIV:
    case WAGVII:
        params.push_back(SPHERE);
        params.push_back(CENTMER);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case EQRECT:
        params.push_back(SPHERE);
        params.push_back(CENTMER);
        params.push_back(TRUESCALE);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case VGRINT:
        params.push_back(SPHERE);
        params.push_back(CENTMER);
        params.push_back(ORIGINLAT);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case HOM:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(FACTOR);
        params.push_back(ORIGINLAT);
        params.push_back(FE);
        params.push_back(FN);
        params.push_back(LONG1);
        params.push_back(LAT1);
        params.push_back(LONG2);
        params.push_back(LAT2);
        //params[11] = zero;//???????
        break;
    case SOM:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(INCANG);
        params.push_back(ASCLONG);
        params.push_back(FE);
        params.push_back(FN);
        params.push_back(PSREV);
        params.push_back(LRAT);
        params.push_back(PFLAG);
        //params[10] = zero; //??????
        break;
    case ALASKA:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case GOOD:
    case IMOLL:
        params.push_back(SPHERE);
        break;
    case OBEQA:
        params.push_back(SPHERE);
        params.push_back(SHAPEM);
        params.push_back(SHAPEN);
        params.push_back(CENTLON);
        params.push_back(CENTERLAT);
        params.push_back(FE);
        params.push_back(FN);
        params.push_back(ANGLE);
        break;
    default:
        //Invalid
        break;
    }
    string output_SRS = "";
    for (unsigned int i=0; i < params.size(); i++)
    {
        string previous_SRS = output_SRS;
        switch (params.at(i)){
        case LON:
            if (originalParams[1] != 0){
                output_SRS += "";
            }
            break;
        case LAT:
            if (originalParams[0] != 0){
                output_SRS += "";
            }
            break;
        case SMAJOR:
            if (originalParams[0] != 0){
                output_SRS += "+a=";
                output_SRS += originalParams[0];
            }
            break;
        case SMINOR:
            if (originalParams[1] != 0){
                output_SRS += "+b=";
                output_SRS += originalParams[1];
            }
            break;
        case SPHERE:
            if (originalParams[0] != 0){
                output_SRS += "+datum=";
                output_SRS += originalParams[0];
            }
            break;
        case STDPAR:
            if (originalParams[2] != 0){
                output_SRS += "+";
            }
            break;
        case STDPR1:
            if (originalParams[2] != 0){
                output_SRS += "+lat_1=";
                output_SRS += originalParams[2];
            }
            break;
        case STDPR2:
            if (originalParams[3] != 0){
                output_SRS += "+lat_2=";
                output_SRS += originalParams[3];
            }
            break;
        case CENTMER:
            if (originalParams[4] != 0){
                output_SRS += "+lon_0=";
                output_SRS += originalParams[4];
            }
            break;
        case ORIGINLAT:
            if (originalParams[5] != 0){
                output_SRS += "+lat_0=";
                output_SRS += originalParams[5];
            }
            break;
        case FE:
            if (originalParams[6] != 0){
                output_SRS += "+x_0=";
                output_SRS += originalParams[6];
            }
            break;
        case FN:
            if (originalParams[7] != 0){
                output_SRS += "+y_0=";
                output_SRS += originalParams[7];
            }
            break;
        case TRUESCALE: //FIX
            if (originalParams[5] != 0){
                output_SRS += "+lat_ts=";
                output_SRS += originalParams[5];
            }
            break;
        case LONGPOL:
            if (originalParams[4] != 0){
                output_SRS += "+";
            }
            break;
        case FACTOR:
            if (originalParams[2] != 0){
                output_SRS += "+k_0=";
                output_SRS += originalParams[2];
            }
            break;
        case CENTLON:
            if (originalParams[4] != 0){
                output_SRS += "+lon_wrap=";
                output_SRS += originalParams[4];
            }
            break;
        case CENTERLAT:
            if (originalParams[5] != 0){
                output_SRS += "+";
            }
            break;
        case HEIGHT:
            if (originalParams[2] != 0){
                output_SRS += "+h=";
                output_SRS += originalParams[2];
            }
            break;
        case LONG1:
            if (originalParams[8] != 0){
                output_SRS += "+";
            }
            break;
        case LONG2:
            if (originalParams[10] != 0){
                output_SRS += "+";
            }
            break;
        case LAT1:
            if (originalParams[9] != 0){
                output_SRS += "+";
            }
            break;
        case LAT2:
            if (originalParams[11] != 0){
                output_SRS += "+";
            }
            break;
        case AZIANG:
            if (originalParams[3] != 0){
                output_SRS += "+";
            }
            break;
        case AZMTHPT:
            if (originalParams[4] != 0){
                output_SRS += "+";
            }
            break;
        case INCANG:
            if (originalParams[3] != 0){
                output_SRS += "+";
            }
            break;
        case ASCLONG:
            if (originalParams[4] != 0){
                output_SRS += "+";
            }
            break;
        case PSREV:
            if (originalParams[8] != 0){
                output_SRS += "+";
            }
            break;
        case LRAT:
            if (originalParams[9] != 0){
                output_SRS += "+";
            }
            break;
        case PFLAG:
            if (originalParams[10] != 0){
                output_SRS += "+";
            }
            break;
        case SATNUM:
            if (originalParams[2] != 0){
                output_SRS += "+";
            }
            break;
        case PATH:
            if (originalParams[3] != 0){
                output_SRS += "+";
            }
            break;
        case SHAPEM:
            if (originalParams[2] != 0){
                output_SRS += "+";
            }
            break;
        case SHAPEN:
            if (originalParams[3] != 0){
                output_SRS += "+";
            }
            break;
        case ANGLE:
            if (originalParams[8] != 0){
                output_SRS += "+";
            }
            break;
        }
        if (output_SRS.length() > previous_SRS.length() && i < params.size() - 1 )
            output_SRS += " ";
    }
    bool result = CreateOutputRaster(in, QDir::currentPath().toUtf8().constData(), nPixel_size, output_SRS);
    std::cout << result << std::endl;
}

//SLOTS
void Wizard::on_dirView_clicked(const QModelIndex &index)
{
    QString sPath = dirModel->fileInfo(index).absoluteFilePath();
    ui->fileView->setRootIndex(fileModel->setRootPath(sPath));
    ui->fileView->show();
}

void Wizard::enableNext() //??????
{
    ui->btnNext->setEnabled(true);
}

void Wizard::changeInputProjection(int index)
{
    ui->inputProjection->setCurrentIndex(index);
}

void Wizard::changeOutProjection(int index)
{
    ui->outputProjection->setCurrentIndex(index);
}

void Wizard::enableFillValue(bool state)
{
    ui->FillValue->setEnabled(state);
}

void Wizard::enableDataValue(bool state)
{
    ui->noDataValue->setEnabled(state);
}
