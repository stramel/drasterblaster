#include "subsetselect.h"
#include "ui_subsetselect.h"

SubsetSelect::SubsetSelect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SubsetSelect)
{
    ui->setupUi(this);
}

SubsetSelect::~SubsetSelect()
{
    delete ui;
}
