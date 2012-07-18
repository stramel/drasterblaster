#include "new_wizard.h"
#include "selection.h"
#include "ui_new_wizard2.h"

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
    //File
    connect(ui->Tool_Selection, SIGNAL(triggered()), s, SLOT(showSelection()));
    connect(ui->Tool_Selection, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->Exit, SIGNAL(triggered()), this, SLOT(close()));
    //Options
    ////Launch popup for downsampling
    connect(ui->Downsample, SIGNAL(triggered()), this, SLOT());
    ////Launch popup for editing raster header
    connect(ui->Edit_Raster_Header, SIGNAL(triggered()), this, SLOT());
    ////Launch popup for editing author information
    connect(ui->Edit_Author_Info, SIGNAL(triggered()), this, SLOT());
    //Help
    ////Launch PDF User Guide
    connect(ui->User_Guide, SIGNAL(triggered()), this, SLOT());
    ////Launch popup for about dRasterBlaster
    connect(ui->About_dRasterBlaster, SIGNAL(triggered()), this, SLOT());
    ////Launch popup for about Qt
    connect(ui->About_Qt, SIGNAL(triggered()), this, SLOT());

    //Navigation
    connect(ui->navNext, SIGNAL(clicked()), this, SLOT(nextPage())); //No parameter defaults to 'n'
    connect(ui->navPrevious, SIGNAL(clicked()), this, SLOT(prevPage()));
    connect(this, SIGNAL(pageChanged(int)), ui->WizardPages, SLOT(setCurrentIndex(int)));
    connect(ui->navCancel, SIGNAL(clicked()), s, SLOT(showSelection()));
    connect(ui->navCancel, SIGNAL(clicked()), this, SLOT(close()));

    //Welcome Page
    connect(ui->inputButton, SIGNAL(clicked()), this, SLOT(openRaster()));

    //Raster DSS
    connect(ui->selectSubset, SIGNAL(clicked()), this, SLOT()); //Launch popup for selecting the subset
    connect(ui->areaTypeDrop, SIGNAL(currentIndexChanged(int)), this, SLOT(basicPreviews()));
    connect(ui->preserveDrop, SIGNAL(currentIndexChanged(int)), this, SLOT(basicPreviews()));

}

void Wizard::initialLoad()
{
    autoConnect();

    //Initialize page to zero
    page = 0; //Initialize variable to zero
    emit pageChanged(page); //Sets to deafult page
    dssSize = 256;
}

//////////////////
//Raster File I/O
//////////////////

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


//////////////////////
//Raster DSS/Previews
//////////////////////

bool Wizard::basicPreviews()
{
    QProgressDialog *progress = new QProgressDialog("Loading previews...", "Cancel", 0, 100);
    progress->setWindowModality(Qt::WindowModal);
    int total = 100% PROJCT;
    int increment = 100 / PROJCT; //iterator

    QGridLayout *grid = new QGridLayout(ui->Previews);
    //Initializing the temporary files with a projection and Display
    for(int i = 0; i < PROJCT; i++)
    {
        progress->setValue(total);
        if (progress->wasCanceled())
        {
            return false;
        }
        else if (!generateDSSPreviews(grid,
                                      i,
                                      i/(ui->Previews->width()/dssSize),
                                      i%(ui->Previews->width()/dssSize),
                                      dssSize))
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

bool Wizard::generateDSSPreviews(QGridLayout *g, int i, int row, int col, int rasterSize)
{
    QTemporaryFile *temp  = new QTemporaryFile("dRB_temp");
    tList_proj.append(temp);
    if(tList_proj.at(i)->open())
    {
        if (!CreateSampleOutput(inputRaster, tList_proj.at(i)->fileName().toStdString(), "+proj=moll", rasterSize))
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
            g->addWidget(img,row,col,Qt::AlignHCenter);
        }
    }
    return true;
}

bool QMainWindow::event(QEvent *evt)
{
    if (evt->type() == QEvent::Resize)
    {
        QResizeEvent *re = (QResizeEvent *)evt;

        int tempSize = 256;
        int wd = re->size().width();
        if ((wd % tempSize) != 0)
        {
            int tempUp = tempSize;
            int tempDown = tempSize;
            tempSize = 0;
            while(tempSize == 0)
            {
                if ((wd % ++tempUp) == 0)
                {
                    tempSize = tempUp;
                } else if ((wd % --tempDown) == 0)
                {
                    tempSize = tempDown;
                }
            }
            Wizard *w = new Wizard();
            w->setDssSize(tempSize);
            if (w->getPage() == 1)
                w->basicPreviews();
        }
    }
    return true;
}

//////////////
//Navigation
//////////////

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
