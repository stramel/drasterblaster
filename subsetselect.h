#ifndef SUBSETSELECT_H
#define SUBSETSELECT_H

#include <QDialog>

namespace Ui {
class SubsetSelect;
}

class SubsetSelect : public QDialog
{
    Q_OBJECT
    
public:
    explicit SubsetSelect(QWidget *parent = 0);
    ~SubsetSelect();
    
private:
    Ui::SubsetSelect *ui;
};

#endif // SUBSETSELECT_H
