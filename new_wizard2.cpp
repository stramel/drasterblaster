#include "new_wizard.h"
#include "selection.h"
#include "ui_new_wizard2.h"

#include <projectedraster.hh>

#include <QFileDialog>


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
    ////File
    connect(ui->Tool_Selection, SIGNAL(triggered()), s, SLOT(showSelection()));
    connect(ui->Tool_Selection, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->Exit, SIGNAL(triggered()), this, SLOT(close()));
    ////Options
    connect(ui->Downsample, SIGNAL(triggered()), this, SLOT()); //Launch popup for downsampling
    connect(ui->Edit_Raster_Header, SIGNAL(triggered()), this, SLOT()); //Launch popup for editing raster header
    connect(ui->Edit_Author_Info, SIGNAL(triggered()), this, SLOT()); //Launch popup for editing author information
    ////Help
    connect(ui->User_Guide, SIGNAL(triggered()), this, SLOT()); //Launch PDF User Guide
    connect(ui->About_dRasterBlaster, SIGNAL(triggered()), this, SLOT()); //Launch popup for about dRasterBlaster
    connect(ui->About_Qt, SIGNAL(triggered()), this, SLOT()); //Launch popup for about Qt

    //Navigation
    connect(ui->navNext, SIGNAL(clicked()), this, SLOT(nextPage())); //No parameter defaults to 'n'
    connect(ui->navPrevious, SIGNAL(clicked()), this, SLOT(prevPage()));
    connect(this, SIGNAL(pageChanged(int)), ui->WizardPages, SLOT(setCurrentIndex(int)));
    connect(ui->navCancel, SIGNAL(clicked()), s, SLOT(showSelection()));
    connect(ui->navCancel, SIGNAL(clicked()), this, SLOT(close()));

    //Welcome Page
    connect(ui->inputButton, SIGNAL(clicked()), this, SLOT(openRaster()));

    //Basic Previews
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

}

void Wizard::openRaster()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Raster Dataset"), "", tr("Raster Datasets (*.tif *.tiff)"));

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

void Wizard::basicPreviews()
{

}


//////////////
//Navigation
//////////////

void Wizard::nextPage()
{
    if (ui->navNext->text() == "Finished") {
        page = 0;
        ui->navNext->setText("Next >>");
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
        break;
    case 1: //Raster map projection basic previews
        basicPreviews();
        break;
    case 2:
        break;
    case 3:
        ui->navNext->setText("Finished");
        break;
    default:
        //Error page managed to get out of bounds
        ////Emit ERROR SIGNAL
        return;
    }
    ui->navNext->setEnabled(false); //This should always happen to ensure something or the correct something is selected
    emit pageChanged(new_page);
}
