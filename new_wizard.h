#ifndef NEW_WIZARD_H
#define NEW_WIZARD_H

#include <QMainWindow>

#include <projectedraster.hh>
#include <sharedptr.hh>

namespace Ui {
class Wizard;
}

class Wizard : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Wizard(QWidget *parent = 0);
    ~Wizard();

signals:
    void pageChanged(int);
    
private:
    Ui::Wizard *ui;

    //Navigation Variables
    int page;

    shared_ptr<ProjectedRaster> inputRaster, outputRaster;

    //Sets up all connections
    void autoConnect();

    //Initial Ui Setup
    void initialLoad();

    //Loads the next page after a navigation click
    void switchPage(int);

private slots:

    //Opens raster
    void openRaster();

    //Generates all the basic map projection previews for user to select from
    void basicPreviews();

    //Controls Navigation
    void nextPage();
    void prevPage();
};

#endif // NEW_WIZARD_H
