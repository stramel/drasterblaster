#include "selection.h"
#include "ui_selection.h"
#include "wizard.h"
#include "mainwindow.h"

Selection::Selection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Selection)
{
    ui->setupUi(this);

}

Selection::~Selection()
{
    delete ui;
}

