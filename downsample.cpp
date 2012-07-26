#include "downsample.h"
#include "ui_downsample.h"

Downsample::Downsample(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Downsample)
{
    ui->setupUi(this);
}

Downsample::~Downsample()
{
    delete ui;
}
