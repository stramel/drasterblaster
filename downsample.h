#ifndef DOWNSAMPLE_H
#define DOWNSAMPLE_H

#include <QDialog>

namespace Ui {
class Downsample;
}

class Downsample : public QDialog
{
    Q_OBJECT
    
public:
    explicit Downsample(QWidget *parent = 0);
    ~Downsample();
    
private:
    Ui::Downsample *ui;
};

#endif // DOWNSAMPLE_H
