#ifndef NEW_WIZARD_H
#define NEW_WIZARD_H

#include <QMainWindow>

namespace Ui {
class Wizard;
}

class Wizard : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Wizard(QWidget *parent = 0);
    ~Wizard();
    
private:
    Ui::Wizard *ui;
};

#endif // NEW_WIZARD_H
