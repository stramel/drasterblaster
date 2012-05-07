#include "selection.h"
#include "ui_selection.h"
#include "wizard.h"
#include "mainwindow.h"

Selection::Selection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Selection)
{
    ui->setupUi(this);

    connect(ui->btnWizard, SIGNAL(clicked()), this, SLOT(launchWizard()));
    connect(ui->btnWizard, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->btnAdvanced, SIGNAL(clicked()), this, SLOT(launchAdvanced()));
    connect(ui->btnAdvanced, SIGNAL(clicked()), this, SLOT(close()));

}

Selection::~Selection()
{
    delete ui;
}

void Selection::launchWizard()
{
    Wizard *w = new Wizard();
    w->setWindowTitle("dRasterBlaster (v0.1) - Wizard");
    w->show();
    w->activateWindow();
    w->raise();
}

void Selection::launchAdvanced()
{
    MainWindow *m = new MainWindow();
    m->setWindowTitle("dRasterBlaster (v0.1) - Advanced");
    m->show();
    m->activateWindow();
    m->raise();
}
