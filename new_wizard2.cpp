#include "new_wizard.h"
#include "ui_new_wizard2.h"

Wizard::Wizard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Wizard)
{
    ui->setupUi(this);
}

Wizard::~Wizard()
{
    delete ui;
}
