#include "advanced.h"
#include "selection.h"
#include "ui_advanced.h"

#include <QFileDialog>
#include <QMessageBox>

Advanced::Advanced(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Advanced)
{
    ui->setupUi(this);

    prepareUi();
}

Advanced::~Advanced()
{
    delete ui;
}

void Advanced::prepareUi()
{
    Selection *s = new Selection(this);

    connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(openRaster()));
    connect(ui->actionSave_Reprojection, SIGNAL(triggered()), this, SLOT(saveReprojection()));
    connect(ui->actionSelection_Screen, SIGNAL(triggered()), s, SLOT(showSelection()));
    connect(ui->actionSelection_Screen, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionLoad_Projection_Info, SIGNAL(triggered()), this, SLOT(loadParams()));
    connect(ui->actionSave_Projection_Info, SIGNAL(triggered()), this, SLOT(saveParams()));
    connect(ui->actionToggle_Preview, SIGNAL(triggered()), this, SLOT(togglePreview()));
    connect(ui->actionAbout_dRasterBlaster, SIGNAL(triggered()), s, SLOT(about()));
    connect(ui->actionAbout_Qt, SIGNAL(triggered()), s, SLOT(aboutQt()));
    connect(ui->actionEdit_Author, SIGNAL(triggered()), s, SLOT(showEditAuthor()));
    connect(ui->actionUser_Guide, SIGNAL(triggered()), s, SLOT(showUserGuide()));
    connect(ui->fillEnable, SIGNAL(stateChanged(int)), this, SLOT(fillEnable(int)));
    connect(ui->noDataValueEnable, SIGNAL(stateChanged(int)), this, SLOT(noDataEnable(int)));

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
}

void Advanced::loadParams()
{
    QFileDialog dialogRaster;
        dialogRaster.setFileMode(QFileDialog::ExistingFile);
        dialogRaster.setDirectory(QDir::toNativeSeparators(QCoreApplication::applicationDirPath()));
        dialogRaster.setFilter(QDir::Files);
        dialogRaster.setWindowTitle("Load Projection Parameters");
        dialogRaster.setNameFilter("Config files (*.config)");
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

void Advanced::saveParams()
{
    QFileDialog dialogRaster;
        dialogRaster.setAcceptMode(QFileDialog::AcceptSave);
        dialogRaster.setFileMode(QFileDialog::AnyFile);
        dialogRaster.setDirectory(QDir::toNativeSeparators(QCoreApplication::applicationDirPath()));
        dialogRaster.setFilter(QDir::Files);
        dialogRaster.setWindowTitle("Save Projection Parameters");
        dialogRaster.setNameFilter("Config files (*.config)");
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

void Advanced::openRaster()
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

void Advanced::saveReprojection()
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
            file.close();
        }
}

void Advanced::togglePreview()
{

}

void Advanced::fillEnable(int value)
{
    if (value == 2)
        ui->FillValue->setEnabled(true);
    else if (value == 0)
        ui->FillValue->setEnabled(false);
}

void Advanced::noDataEnable(int value)
{
    if (value == 2)
        ui->noDataValue->setEnabled(true);
    else if (value == 0)
        ui->noDataValue->setEnabled(false);
}
