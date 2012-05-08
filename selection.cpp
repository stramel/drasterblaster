#include "selection.h"
#include "wizard.h"
#include "advanced.h"
#include "ui_selection.h"

#include <QMessageBox>

Selection::Selection(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Selection)
{
    ui->setupUi(this);

    prepareUi();
}

Selection::~Selection()
{
    delete ui;
}

void Selection::showWizard()
{
    Wizard *w = new Wizard();
    w->setWindowTitle("Wizard - dRasterBlaster (v0.1)");
    w->show();
}

void Selection::showAdvanced()
{
    Advanced *a = new Advanced();
    a->setWindowTitle("Advanced - dRasterBlaster (v0.1)");
    a->show();
}

void Selection::showSelection()
{

    Selection *s = new Selection();
    s->setWindowTitle("dRasterBlaster (v0.1)");
    s->show();
}

void Selection::showEditAuthor()
{

}

void Selection::showUserGuide()
{

}

void Selection::about()
{

}

void Selection::aboutQt()
{

}

void Selection::prepareUi()
{
    connect(ui->btnRasterWizard, SIGNAL(clicked()), this, SLOT(showWizard()));
    connect(ui->btnRasterWizard, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->btnAdvanced, SIGNAL(clicked()), this, SLOT(showAdvanced()));
    connect(ui->btnAdvanced, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->actionAbout_dRasterBlaster, SIGNAL(triggered()), this, SLOT(about()));
    connect(ui->actionAbout_Qt, SIGNAL(triggered()), this, SLOT(aboutQt()));
    connect(ui->actionEdit_Author, SIGNAL(triggered()), this, SLOT(showEditAuthor()));
    connect(ui->actionUser_Guide, SIGNAL(triggered()), this, SLOT(showUserGuide()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(close()));

    ui->actionLoad_Projection_Info->setEnabled(false);
    ui->actionSave_Projection_Info->setEnabled(false);
    ui->actionToggle_Preview->setEnabled(false);
    ui->actionOpen->setEnabled(false);
    ui->actionSave_Reprojection->setEnabled(false);
    ui->actionSelection_Screen->setEnabled(false);
}
