#include "wizard.h"
#include "ui_wizard.h"
#include "selection.h"

Wizard::Wizard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Wizard)
{
    ui->setupUi(this);

    connect(ui->btnCancel, SIGNAL(clicked()), this, SLOT(launchSelection()));
    connect(ui->btnCancel, SIGNAL(clicked()), this, SLOT(close()));
}

Wizard::~Wizard()
{
    delete ui;
}

void Wizard::launchSelection()
{
    Selection *s = new Selection();
    s->setWindowTitle("Selection - dRasterBlaster (v0.1)");
    s->show();
    s->activateWindow();
    s->raise();
}
