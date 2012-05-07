#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wizard.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QDataStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Validators
    QIntValidator *intValid = new QIntValidator(this);
    intValid->setBottom(0);

    QDoubleValidator *doubleValid = new QDoubleValidator(this);
    doubleValid->setNotation(QDoubleValidator::StandardNotation);
    doubleValid->setBottom(0.0);

    ui->Rows->setValidator(intValid);
    ui->Cols->setValidator(intValid);
    ui->FillValue->setValidator(intValid);
    ui->noDataValue->setValidator(intValid);
    ui->pixelSize->setValidator(doubleValid);

    CreateConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CreateConnections()
{
    connect(ui->editInputParams, SIGNAL(stateChanged(int)), this, SLOT(editInputParams(int)));

    //FILE
    connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(openRaster()));
    connect(ui->actionSave_Reprojection, SIGNAL(triggered()), this, SLOT(saveReprojection()));
    connect(ui->actionRaster_Wizard, SIGNAL(triggered()), this, SLOT(Wizard::launchWizard()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(close()));

    //OPTIONS
    connect(ui->actionLoad_Projection_Info, SIGNAL(triggered()), this, SLOT(loadProjectionInfo()));
    connect(ui->actionSave_Projection_Info, SIGNAL(triggered()), this, SLOT(saveProjectionInfo()));
    connect(ui->actionToggle_Preview, SIGNAL(triggered()), this, SLOT(togglePreview()));

    //HELP
    connect(ui->actionEdit_Author, SIGNAL(triggered()), this, SLOT(editAuthor()));
    connect(ui->actionUser_Guide, SIGNAL(triggered()), this, SLOT(userGuide()));
    connect(ui->actionAbout_dRasterBlaster, SIGNAL(triggered()), this, SLOT(about()));
    connect(ui->actionAbout_Qt, SIGNAL(triggered()), this, SLOT(aboutQt()));

    //RASTER INFO
    connect(ui->fillEnable, SIGNAL(stateChanged(int)), this, SLOT(fillEnable()));
    connect(ui->noDataValueEnable, SIGNAL(stateChanged(int)), this, SLOT(noDataEnable()));

}

void MainWindow::openRaster()
{
    QFileDialog dialogRaster;
    dialogRaster.setFileMode(QFileDialog::ExistingFile);
    dialogRaster.setDirectory(QDir::toNativeSeparators(QCoreApplication::applicationDirPath()));
    dialogRaster.setFilter(QDir::Files);
    dialogRaster.setWindowTitle("Open Raster");
    dialogRaster.setNameFilter("Rasters (*.tif *.img)");
    dialogRaster.exec();

    QString filename = dialogRaster.selectedFiles().first();
    if (filename.isEmpty())
        return;
    else
    {
        QFile file(filename);
        if (!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(this, tr("Unable to open file"), file.errorString());
            return;
        }
        QDataStream in(&file);
        in.setVersion(12);
        //in >> ;//Read in DATA here

        ui->fileName->setText(filename);

    }

}

void MainWindow::saveReprojection()
{
    QFileDialog dialogRaster;
    dialogRaster.setAcceptMode(QFileDialog::AcceptSave);
    dialogRaster.setFileMode(QFileDialog::AnyFile);
    dialogRaster.setDirectory(QDir::toNativeSeparators(QCoreApplication::applicationDirPath()));
    dialogRaster.setFilter(QDir::Files);
    dialogRaster.setWindowTitle("Save Raster");
    dialogRaster.setNameFilter("Rasters (*.tif *.img)");
    dialogRaster.exec();

    QString filename = dialogRaster.selectedFiles().first();
    if (filename.isEmpty())
        return;
    else
    {
        QFile file(filename);
        if (!file.open(QIODevice::WriteOnly))
        {
            QMessageBox::information(this, tr("Unable to open file"), file.errorString());
            return;
        }

        QDataStream out (&file);
        out.setVersion(12);
        //out << ;//Write DATA here
    }
}

void MainWindow::loadProjectionInfo()
{

}

void MainWindow::saveProjectionInfo()
{

}

void MainWindow::togglePreview()
{

}

void MainWindow::userGuide()
{

}

void MainWindow::editAuthor()
{

}

void MainWindow::about()
{

}

void MainWindow::aboutQt()
{

}

void MainWindow::editInputParams(int)
{

}

void MainWindow::fillEnable(int)
{

}

void MainWindow::noDataEnabale(int)
{

}
