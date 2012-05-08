#include "advanced.h"
#include "selection.h"
#include "ui_advanced.h"

Advanced::Advanced(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Advanced)
{
    ui->setupUi(this);

    Selection *s = new Selection(this);

    connect(ui->actionOpen, SIGNAL(triggered()), s, SLOT(openRaster()));
    connect(ui->actionSave_Reprojection, SIGNAL(triggered()), s, SLOT(saveReprojection()));
    connect(ui->actionSelection_Screen, SIGNAL(triggered()), s, SLOT(showSelection()));
    connect(ui->actionSelection_Screen, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionLoad_Projection_Info, SIGNAL(triggered()), s, SLOT(loadParams()));
    connect(ui->actionSave_Projection_Info, SIGNAL(triggered()), s, SLOT(saveParams()));
    connect(ui->actionToggle_Preview, SIGNAL(triggered()), s, SLOT(togglePreview()));
    connect(ui->actionAbout_dRasterBlaster, SIGNAL(triggered()), s, SLOT(about()));
    connect(ui->actionAbout_Qt, SIGNAL(triggered()), s, SLOT(aboutQt()));
    connect(ui->actionEdit_Author, SIGNAL(triggered()), s, SLOT(showEditAuthor()));
    connect(ui->actionUser_Guide, SIGNAL(triggered()), s, SLOT(showUserGuide()));
}

Advanced::~Advanced()
{
    delete ui;
}

