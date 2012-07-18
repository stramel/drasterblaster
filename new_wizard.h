#ifndef NEW_WIZARD_H
#define NEW_WIZARD_H

#include <QMainWindow>
#include <QTemporaryFile>
#include <QGridLayout>

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
    void setDssSize(int tempSize) {dssSize = tempSize;}
    int getPage() {return page;}

    //Makes calls to generate DSS Previews
    bool basicPreviews();

signals:
    void pageChanged(int);
    
private:
    Ui::Wizard *ui;

    //DSS Preview size
    int dssSize;

    //Temporary Projections
    QList<QTemporaryFile *> tList_proj;

    //Projection List, SRS code
    QList<QString> srsList_proj;

    //Navigation Variables
    int page;

    shared_ptr<ProjectedRaster> inputRaster, outputRaster;

    //Sets up all connections
    void autoConnect();

    //Initial Ui Setup
    void initialLoad();

    //Loads the next page after a navigation click
    void switchPage(int);

    //Generates previews for DSS
    bool generateDSSPreviews(QGridLayout *, int i, int row, int col, int rasterSize);


private slots:

    //Opens raster
    void openRaster();

    //Saves raster
    void saveRaster();

    //Controls Navigation
    void nextPage();
    void prevPage();
};

#endif // NEW_WIZARD_H
