#include "new_wizard.h"
#include "selection.h"
#include "ui_new_wizard2.h"
#include "downsample.h"
#include "subsetselect.h"

#include <projectedraster.hh>
#include <reprojector.hh>
#include <constants.h>

#include <QFileDialog>
#include <QProgressDialog>
#include <QDebug>
#include <QResizeEvent>
#include <QScrollArea>

Wizard::Wizard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Wizard)
{
    ui->setupUi(this);
    initialLoad();
}

Wizard::~Wizard()
{
    delete ui;
}

void Wizard::autoConnect()
{
    Selection *s = new Selection();

    //Menu Connects
    ////////////////////////////////////////////////////////////////////////////
    //File
    connect(ui->Tool_Selection, SIGNAL(triggered()), s, SLOT(showSelection()));
    connect(ui->Tool_Selection, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->Exit, SIGNAL(triggered()), this, SLOT(close()));
    //Options
    ////Launch popup for editing raster header
    connect(ui->Edit_Raster_Header, SIGNAL(triggered()), s, SLOT(showEditRasterHeader()));
    ////Launch popup for editing author information
    connect(ui->Edit_Author_Info, SIGNAL(triggered()), s, SLOT(showEditAuthor()));
    //Help
    ////Launch PDF User Guide
    connect(ui->User_Guide, SIGNAL(triggered()), s, SLOT(showUserGuide()));
    ////Launch popup for about dRasterBlaster
    connect(ui->About_dRasterBlaster, SIGNAL(triggered()), s, SLOT(about()));
    ////Launch popup for about Qt
    connect(ui->About_Qt, SIGNAL(triggered()), s, SLOT(aboutQt()));

    //Navigation
    ////////////////////////////////////////////////////////////////////////////
    connect(ui->navNext, SIGNAL(clicked()), this, SLOT(nextPage())); //No parameter defaults to 'n'
    connect(ui->navPrevious, SIGNAL(clicked()), this, SLOT(prevPage()));
    connect(this, SIGNAL(pageChanged(int)), ui->WizardPages, SLOT(setCurrentIndex(int)));
    connect(ui->navCancel, SIGNAL(clicked()), s, SLOT(showSelection()));
    connect(ui->navCancel, SIGNAL(clicked()), this, SLOT(close()));

    //Welcome Page
    ////////////////////////////////////////////////////////////////////////////
    connect(ui->inputButton, SIGNAL(clicked()), this, SLOT(openRaster()));

    //Raster DSS
    ////////////////////////////////////////////////////////////////////////////
    connect(ui->selectSubset, SIGNAL(clicked()), this, SLOT(selectSubsetDialog())); //Launch popup for selecting the subset
    connect(ui->areaTypeDrop, SIGNAL(currentIndexChanged(QString)), this, SLOT(handleAreaType(QString)));
    connect(ui->preserveDrop, SIGNAL(currentIndexChanged(int)), this, SLOT(basicPreviews()));
    connect(ui->columnSlider, SIGNAL(sliderReleased()), this, SLOT(setColumns()));

    //Fill/No Data/Downsample Previews
    ////////////////////////////////////////////////////////////////////////////
    connect(ui->downSample, SIGNAL(triggered()), this, SLOT(showDownsample()));

}

void Wizard::initialLoad()
{
    autoConnect();

    //Initialize page to zero
    page = 0; //Initialize variable to zero
    emit pageChanged(page); //Sets to deafult page
    dssColumns = 3;
    formSize = 735;
    ui->columnSlider->setValue(dssColumns);
    loadSRS();
}

////////////////////////////////////////////////////////////////////////////////
//Raster File I/O
////////////////////////////////////////////////////////////////////////////////

void Wizard::openRaster()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Raster Dataset"), "", tr("Raster Dataset (*.tif *.tiff)"));

    if (fileName != "") {
        inputRaster = shared_ptr<ProjectedRaster>(new ProjectedRaster(fileName.toStdString()));
        if (!inputRaster->isReady()) {
            //Error Opening File
            //Emit ERROR SIGNAL HERE
            return;
        } else {
            //Opened Successfully
            ui->inputPath->setText(fileName);
            ui->navNext->setEnabled(true);
        }
    }
    //Error None Selected
    //Emite ERROR SIGNAL HERE
}

void Wizard::saveRaster()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Reprojected Raster Dataset"), "", tr("Raster Dataset (*.tif *.tiff)"));

    if (fileName != "") {

    }
    //Error None Selected
    //Emit ERROR SIGNAL HERE
}


////////////////////////////////////////////////////////////////////////////////
//Raster DSS/Previews
////////////////////////////////////////////////////////////////////////////////

void Wizard::setColumns()
{
    dssColumns = ui->columnSlider->value();
    basicPreviews();
}

bool Wizard::basicPreviews()
{
    //Progress Dialog
    QProgressDialog *progress = new QProgressDialog("Loading previews...", "Cancel", 0, 100);
    progress->setWindowModality(Qt::WindowModal);
    int total = 100% PROJCT;
    int increment = 100 / PROJCT; //iterator


    if (ui->scrollArea->layout() != 0)
    {
        clearLayout(ui->scrollArea->layout());
        delete ui->scrollArea->layout();
    }


    QGridLayout *grid = new QGridLayout(ui->Previews);
    //Initializing the temporary files with a projection and Display
    for(int i = 0; i < PROJCT; i++)
    {
        progress->setValue(total);
        if (progress->wasCanceled())
        {
            return false;
        }
//        else if (ui->areaTypeDrop->currentText() == "Global")
//        {
//            switch (ui->preserveDrop->currentText())
//            {
//            case "Area":
//                //Add header and loop specifics
//                if (!generateDSSPreviews(grid, i))
//                {
//                    //ERROR generating previews
//                    return false;
//                }
//                //Add other header and loop rest
//                break;
//            case "Shape":
//                break;
//            case "Compromise":
//                break;
//            }
//        }
//        else if (ui->areaTypeDrop->currentText() == "Regional" ||
//                 ui->areaTypeDrop->currentText() == "Continental")
//        {
//            switch (ui->preserveDrop->currentText())
//            {
//            case "Area":
//                break;
//            case "Shape":
//                break;
//            }
//        }
        else if (!generateDSSPreviews(grid, i))
        {
            //ERROR generating previews
            return false;
        }
        else
        {
            total += increment;
        }
    }
    delete progress;
    ui->scrollArea->setLayout(grid);
    return true;
}

bool Wizard::generateDSSPreviews(QGridLayout *grid, int i)
{
    QTemporaryFile *temp  = new QTemporaryFile("dRB_temp");
    tList_proj.append(temp);
    if(tList_proj.at(i)->open())
    {
        if (!CreateSampleOutput(inputRaster,
                                tList_proj.at(i)->fileName().toStdString(),
                                "+proj=moll",
                                ((formSize/dssColumns) - dssColumns*2)))
        {
            //ERROR CREATING SAMPLE OUTPUT
            return false;
        }
        QLabel *img = new QLabel();
        if (!tList_proj.at(i)->fileName().isEmpty())
        {
            QImage image(tList_proj.at(i)->fileName(), "TIFF");
            if (image.isNull())
            {

                //QMessageBox::information(this, tr("dRB Error"), tr("Cannot load %1.").arg(tList_proj.at(i)->fileName()));
                return false;
            }
            img->setPixmap(QPixmap::fromImage(image));
            grid->addWidget(img, i/dssColumns, i%dssColumns);
        }
    }
    return true;
}

void Wizard::handleAreaType(QString type)
{
    if (type == "Global")
    {
        QModelIndex index = ui->preserveDrop->model()->index(2,0);
        QVariant v(1|32);
        ui->preserveDrop->model()->setData(index,v,Qt::UserRole -1);
    }
    else
    {
        if (ui->preserveDrop->currentText() == "Compromise")
            ui->preserveDrop->setCurrentIndex(0);
        QModelIndex index = ui->preserveDrop->model()->index(2,0);
        QVariant v(0);
        ui->preserveDrop->model()->setData(index,v,Qt::UserRole -1);
    }
    basicPreviews();
}

void Wizard::loadSRS()
{
    string temp;

    //Separate files for each projection?

}

void Wizard::selectSubsetDialog()
{
    SubsetSelect *s = new SubsetSelect();
    s->show();
}

////////////////////////////////////////////////////////////////////////////////
//RESIZE EVENT
////////////////////////////////////////////////////////////////////////////////

//bool QMainWindow::event(QEvent *evt)
//{
//    if (evt->type() == QEvent::Resize)
//    {
//        QResizeEvent *re = (QResizeEvent *)evt;
//        re->
//        Wizard *w = new Wizard();
//        w->emitDSS(re->size().width());

//    }
//    return true;
//}

//void Wizard::emitDSS(int x)
//{
//    if (page == 1)
//        emit dssResized(x);
//}

//void Wizard::resizeDSS(int newSize)
//{
//    if (formSize != newSize && page == 1)
//    {
//        formSize = newSize;
//        clearLayout(ui->scrollArea->layout());
//        delete ui->scrollArea->layout();
//        basicPreviews();
//    }
//}

////////////////////////////////////////////////////////////////////////////////
// Fill/No Data/Downsample Previews
////////////////////////////////////////////////////////////////////////////////

void Wizard::showDownsample()
{
    Downsample *d = new Downsample();
    d->show();
}


////////////////////////////////////////////////////////////////////////////////
//Navigation
////////////////////////////////////////////////////////////////////////////////

void Wizard::nextPage()
{
    if (ui->navNext->text() == "Finish") {
        page = 0;
        ui->navNext->setText("Next >>");
        ui->inputPath->setText("");
    } else if (page + 1 != ui->WizardPages->count()) {
        page++;
    }
    switchPage(page);
}

void Wizard::prevPage()
{
    if (page - 1 > -1)
            switchPage(--page);
}

void Wizard::switchPage(int new_page)
{
    switch (new_page)
    {
    case 0:
        ui->navPrevious->setEnabled(false);
        ui->navNext->setEnabled(false);
        break;
    case 1: //Raster map projection basic previews
        ui->navPrevious->setEnabled(true);
        if (!basicPreviews())
        {
            new_page = 0;
            page = 0;
        }
        break;
    case 2:
        break;
    case 3:
        ui->navNext->setText("Finish");
        break;
    default:
        //Error page managed to get out of bounds
        ////Emit ERROR SIGNAL
        return;
    }
    ui->navNext->setEnabled(false); //This should always happen to ensure something or the correct something is selected
    emit pageChanged(new_page);
}

////////////////////////////////////////////////////////////////////////////////
// General Functions
////////////////////////////////////////////////////////////////////////////////

void Wizard::clearLayout(QLayout* layout, bool deleteWidgets)
{
    while (QLayoutItem* item = layout->takeAt(0))
    {
        if (deleteWidgets)
        {
            if (QWidget* widget = item->widget())
                delete widget;
        }
        else if (QLayout* childLayout = item->layout())
            clearLayout(childLayout, deleteWidgets);
        delete item;
    }
}
