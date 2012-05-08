#include "wizard.h"
#include "selection.h"
#include "ui_wizard.h"

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
    page=0;

    ui->actionLoad_Projection_Info->setEnabled(false);
    ui->actionSave_Projection_Info->setEnabled(false);
    ui->actionToggle_Preview->setEnabled(false);
    ui->actionOpen->setEnabled(false);
    ui->actionSave_Reprojection->setEnabled(false);
    ui->btnBack->setEnabled(false);

    Selection *s = new Selection(this);


    connect(ui->btnCancel, SIGNAL(clicked()), s, SLOT(showSelection()));
    connect(ui->btnCancel, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->btnNext, SIGNAL(clicked()), this, SLOT(nextPage()));
    connect(this, SIGNAL(indexChanged(int)), ui->stackedWidget, SLOT(setCurrentIndex(int)));
    connect(ui->btnBack, SIGNAL(clicked()), this, SLOT(prevPage()));
    connect(this, SIGNAL(indexChanged(int)), ui->stackedWidget, SLOT(setCurrentIndex(int)));

    connect(ui->actionSelection_Screen, SIGNAL(triggered()), s, SLOT(showSelection()));
    connect(ui->actionSelection_Screen, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionAbout_dRasterBlaster, SIGNAL(triggered()), s, SLOT(about()));
    connect(ui->actionAbout_Qt, SIGNAL(triggered()), s, SLOT(aboutQt()));
    connect(ui->actionEdit_Author, SIGNAL(triggered()), s, SLOT(showEditAuthor()));
    connect(ui->actionUser_Guide, SIGNAL(triggered()), s, SLOT(showUserGuide()));
}

void Wizard::nextPage()
{
    ui->btnBack->setEnabled(true);
    if (page == (ui->stackedWidget->count()-2))
    {
        ui->btnNext->setText("Finish");
        ui->btnCancel->setEnabled(false);
        Selection *s = new Selection(this);
        connect(ui->btnNext, SIGNAL(clicked()), this, SLOT(close()));
        connect(ui->btnNext, SIGNAL(clicked()), s, SLOT(showSelection()));
    }
    emit indexChanged(++page);
}

void Wizard::prevPage()
{
    if (page == 1)
        ui->btnBack->setEnabled(false);
    if (ui->btnNext->text() == "Finished")
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

}

void Wizard::saveReprojection()
{

}

void Wizard::showPreview()
{

}

