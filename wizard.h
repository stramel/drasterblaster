#ifndef WIZARD_H
#define WIZARD_H

#include <QMainWindow>
#include <QFileSystemModel>

#include <projectedraster.hh>
//#include <sharedptr.hh>
//#include <constants.h>
#include "projections.h"



namespace Ui {
class Wizard;
}

class Wizard : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Wizard(QWidget *parent = 0);
    ~Wizard();
    shared_ptr<ProjectedRaster> in, out;
    
private:
    Ui::Wizard *ui;
    int page;
    void prepareUi();
    QFileSystemModel *dirModel;
    QFileSystemModel *fileModel;
    shared_ptr<Projection> in_proj, out_proj;
    int nRows, nCols;
    GDALDataType nType;
    double nPixel_size;
    int nBand_count;
    double nUl_x, nUl_y;
    ProjCode nProj;
    ProjDatum nDatum;
    void checkInputs();
    projections p;
    void prepareInputUi();
    void prepareOutputUi();
    double originalParams[15];

    enum ProjParam
    {
        LON,
        LAT,
        SMAJOR,
        SMINOR,
        SPHERE,
        STDPAR,
        STDPR1,
        STDPR2,
        CENTMER,
        ORIGINLAT,
        FE,
        FN,
        TRUESCALE,
        LONGPOL,
        FACTOR,
        CENTLON,
        CENTERLAT,
        HEIGHT,
        LONG1,
        LONG2,
        LAT1,
        LAT2,
        AZIANG,
        AZMTHPT,
        INCANG,
        ASCLONG,
        PSREV,
        LRAT,
        PFLAG,
        SATNUM,
        PATH,
        SHAPEM,
        SHAPEN,
        ANGLE
    };


private slots:
    void nextPage();
    void prevPage();
    void openRaster();
    void saveReprojection();
    void showPreview();
    void on_dirView_clicked(const QModelIndex &index);
    void enableNext();
    void changeInputProjection(int);
    void changeOutProjection(int);
    void enableFillValue(bool);
    void enableDataValue(bool);

signals:
    void indexChanged(int);
};

#endif // WIZARD_H
