#ifndef ADVANCED_H
#define ADVANCED_H

#include <QMainWindow>

namespace Ui {
class Advanced;
}

class Advanced : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Advanced(QWidget *parent = 0);
    ~Advanced();
    
private:
    Ui::Advanced *ui;
};

#endif // ADVANCED_H
