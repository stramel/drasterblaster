#ifndef WIZARD_H
#define WIZARD_H

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
    int page;
    void prepareUi();

private slots:
    void nextPage();
    void prevPage();
    void openRaster();
    void saveReprojection();
    void showPreview();

signals:
    void indexChanged(int);
};

#endif // WIZARD_H
