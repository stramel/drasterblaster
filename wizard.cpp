#include "wizard.h"
#include "selection.h"
#include "ui_wizard.h"
#include "projections.h"

#include <QFileSystemModel>
#include <iostream>
#include <QDir>

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

//    QStringList nFilter("Rasters (*.img)");
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
    //fileModel->setNameFilters(nFilter);
    //fileModel->setNameFilterDisables(false);
    ui->fileView->setModel(fileModel);

    projections p;
    p.callGenerate(3);
    ui->page->setLayout(p.projVLayout);
}

void Wizard::nextPage()
{
    ui->btnBack->setEnabled(true);
    if (page == (ui->stackedWidget->count()-2))
    {
        saveReprojection();
        ui->btnNext->setText("Finish");
        ui->btnCancel->setEnabled(false);
        Selection *s = new Selection(this);
        connect(ui->btnNext, SIGNAL(clicked()), this, SLOT(close()));
        connect(ui->btnNext, SIGNAL(clicked()), s, SLOT(showSelection()));
    } else if (page == 1)
    {
        openRaster();
        return;
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
    QModelIndexList list = ui->fileView->selectionModel()->selectedIndexes();

    foreach (QModelIndex index, list)
    {
        if (ui->fileView->selectionModel()->isSelected(index))
        {
            if (fileModel->fileInfo(index).suffix() != ".tif")
            {
                //error
                return;
            } else
            {
                std::cout << fileModel->fileInfo(index).absoluteFilePath().toStdString() << std::endl;
                std::cout << fileModel->fileInfo(index).fileName().toStdString() << std::endl;
                return;
            }
        }
    }
    //Error none selected
}

void Wizard::saveReprojection()
{
    QModelIndexList list = ui->dirView_2->selectionModel()->selectedRows();

    foreach (QModelIndex index, list)
    {
        if (ui->dirView_2->selectionModel()->isSelected(index))
        {
                std::cout << dirModel->fileInfo(index).absoluteFilePath().toStdString() << std::endl;
        }
    }
}

void Wizard::showPreview()
{

}


void Wizard::on_dirView_clicked(const QModelIndex &index)
{
    QString sPath = dirModel->fileInfo(index).absoluteFilePath();
    ui->fileView->setRootIndex(fileModel->setRootPath(sPath));
}


