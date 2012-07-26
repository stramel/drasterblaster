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
    void setFormSize(int x) {formSize = x;}
    int getFormSize() {return formSize;}
    int getPage() {return page;}

    void emitDSS(int);



signals:
    void pageChanged(int);
    void dssResized(int);
    
private:
    Ui::Wizard *ui;

    //DSS Columns
    int dssColumns;

    int formSize;

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

    //SRS default string
    void loadSRS();

    //Loads the next page after a navigation click
    void switchPage(int);

    //Generates previews for DSS
    bool generateDSSPreviews(QGridLayout *, int);

    //Clears a layout completely
    void clearLayout(QLayout* layout, bool deleteWidgets = true);


private slots:

    //void cleanUpTemps();

    //Opens raster
    void openRaster();

    //Saves raster
    void saveRaster();

    //Controls Navigation
    void nextPage();
    void prevPage();

    //DSS
    void setColumns();
    void handleAreaType(QString);
    void selectSubsetDialog();

    //Makes calls to generate DSS Previews
    bool basicPreviews();
    //void resizeDSS(int);

    //Fill/No Data/Downsample Previews
    void showDownsample();

protected:
    void closeEvent(QCloseEvent *event);
    void resizeEvent(QResizeEvent *event);
};

#endif // NEW_WIZARD_H
