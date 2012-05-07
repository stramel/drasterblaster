#ifndef SELECTION_H
#define SELECTION_H

#include <QDialog>

namespace Ui {
class Selection;
}

class Selection : public QDialog
{
    Q_OBJECT
    
public:
    explicit Selection(QWidget *parent = 0);
    ~Selection();
    
private slots:
    void launchWizard();
    void launchAdvanced();

private:
    Ui::Selection *ui;
};

#endif // SELECTION_H
