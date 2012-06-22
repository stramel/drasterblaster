#ifndef PROJECTIONS_H
#define PROJECTIONS_H

#include <QObject>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>

#include <vector>
#include <constants.h>
#include <string>

namespace Ui {
class projections;
}

class projections : public QObject
{
    Q_OBJECT
public:
    explicit projections(QObject *parent = 0);
    void callGenerate(ProjCode, std::string);
    QGridLayout *projGridLayout;
    QVBoxLayout *projVLayout;
    
signals:
    
public slots:

private:

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
    int generateUi(std::vector<ProjParam> &, std::string );


    QHBoxLayout *projHLayout;

    //COPY & PASTE & CHANGE NAMES
    QLabel *lonZLabel;
    QLineEdit *lonZ;
    ////

    QLabel *latZLabel;
    QLineEdit *latZ;
    //QComboBox utmZone;    //additionally, yes or no?
    QLineEdit *sMajor;
    QLabel *sMajorLabel;
    QLineEdit *sMinor;
    QLabel *sMinorLabel;
    QLabel *stdParLabel;
    QLabel *stdPr1Label;
    QLabel *stdPr2Label;
    QLabel *centMerLabel;
    QLabel *originLatLabel;
    QLineEdit *fE;
    QLabel *fELabel;
    QLineEdit *fN;
    QLabel *fNLabel;
    QLabel *longPolLabel;
    QLabel *trueScaleLabel;
    QLineEdit *factor;
    QLabel *factorLabel;
    QLineEdit *sphere;
    QLabel *sphereLabel;
    QLabel *centLonLabel;
    QLabel *centerLatLabel;
    QLineEdit *height;
    QLabel *heightLabel;
    QLabel *aziAngLabel;
    QLabel *azmthPtLabel;
    QLineEdit *incAng;
    QLabel *incAngLabel;
    QLineEdit *satNum;
    QLabel *satNumLabel;
    QLineEdit *path;
    QLabel *pathLabel;
    QLineEdit *shapeM;
    QLabel *shapeMLabel;
    QLineEdit *shapeN;
    QLabel *shapeNLabel;
    QLineEdit *zero;         //???
    QLineEdit *one;          //???
    QLabel *long1Label;
    QLabel *lat1Label;
    QLabel *long2Label;
    QLabel *lat2Label;
    QLineEdit *psRev;
    QLabel *psRevLabel;
    QLineEdit *lRat;
    QLabel *lRatLabel;
    QLineEdit *pFlag;
    QLabel *pFlagLabel;
    QLineEdit *angle;
    QLabel *angleLabel;

    //COPY & PASTE & CHANGE NAMES
    QLabel *stdPr1DegLabel;
    QLabel *stdPr1MinLabel;
    QLabel *stdPr1SecLabel;
    QLineEdit *stdPr1Deg;
    QLineEdit *stdPr1Min;
    QLineEdit *stdPr1Sec;
    /////

    QLabel *stdPr2DegLabel;
    QLabel *stdPr2MinLabel;
    QLabel *stdPr2SecLabel;
    QLineEdit *stdPr2Deg;
    QLineEdit *stdPr2Min;
    QLineEdit *stdPr2Sec;
    QLabel *centMerDegLabel;
    QLabel *centMerMinLabel;
    QLabel *centMerSecLabel;
    QLineEdit *centMerDeg;
    QLineEdit *centMerMin;
    QLineEdit *centMerSec;
    QLabel *originLatDegLabel;
    QLabel *originLatMinLabel;
    QLabel *originLatSecLabel;
    QLineEdit *originLatDeg;
    QLineEdit *originLatMin;
    QLineEdit *originLatSec;
    QLabel *trueScaleDegLabel;
    QLabel *trueScaleMinLabel;
    QLabel *trueScaleSecLabel;
    QLineEdit *trueScaleDeg;
    QLineEdit *trueScaleMin;
    QLineEdit *trueScaleSec;
    QLabel *longPolDegLabel;
    QLabel *longPolMinLabel;
    QLabel *longPolSecLabel;
    QLineEdit *longPolDeg;
    QLineEdit *longPolMin;
    QLineEdit *longPolSec;
    QLabel *centLonDegLabel;
    QLabel *centLonMinLabel;
    QLabel *centLonSecLabel;
    QLineEdit *centLonDeg;
    QLineEdit *centLonMin;
    QLineEdit *centLonSec;
    QLabel *centerLatDegLabel;
    QLabel *centerLatMinLabel;
    QLabel *centerLatSecLabel;
    QLineEdit *centerLatDeg;
    QLineEdit *centerLatMin;
    QLineEdit *centerLatSec;
    QLabel *long1DegLabel;
    QLabel *long1MinLabel;
    QLabel *long1SecLabel;
    QLineEdit *long1Deg;
    QLineEdit *long1Min;
    QLineEdit *long1Sec;
    QLabel *long2DegLabel;
    QLabel *long2MinLabel;
    QLabel *long2SecLabel;
    QLineEdit *long2Deg;
    QLineEdit *long2Min;
    QLineEdit *long2Sec;
    QLabel *lat1DegLabel;
    QLabel *lat1MinLabel;
    QLabel *lat1SecLabel;
    QLineEdit *lat1Deg;
    QLineEdit *lat1Min;
    QLineEdit *lat1Sec;
    QLabel *lat2DegLabel;
    QLabel *lat2MinLabel;
    QLabel *lat2SecLabel;
    QLineEdit *lat2Deg;
    QLineEdit *lat2Min;
    QLineEdit *lat2Sec;
    QLabel *aziAngDegLabel;
    QLabel *aziAngMinLabel;
    QLabel *aziAngSecLabel;
    QLineEdit *aziAngDeg;
    QLineEdit *aziAngMin;
    QLineEdit *aziAngSec;
    QLabel *azmthPtDegLabel;
    QLabel *azmthPtMinLabel;
    QLabel *azmthPtSecLabel;
    QLineEdit *azmthPtDeg;
    QLineEdit *azmthPtMin;
    QLineEdit *azmthPtSec;
};


/* Projection codes



   0 = Geographic

   1 = Universal Transverse Mercator (UTM)

   2 = State Plane Coordinates

   3 = Albers Conical Equal Area

   4 = Lambert Conformal Conic

   5 = Mercator

   6 = Polar Stereographic

   7 = Polyconic

   8 = Equidistant Conic

   9 = Transverse Mercator

  10 = Stereographic

  11 = Lambert Azimuthal Equal Area

  12 = Azimuthal Equidistant

  13 = Gnomonic

  14 = Orthographic

  15 = General Vertical Near-Side Perspective

  16 = Sinusoidal

  17 = Equirectangular

  18 = Miller Cylindrical

  19 = Van der Grinten

  20 = (Hotine) Oblique Mercator

  21 = Robinson

  22 = Space Oblique Mercator (SOM)

  23 = Alaska Conformal

  24 = Interrupted Goode Homolosine

  25 = Mollweide

  26 = Interrupted Mollweide

  27 = Hammer

  28 = Wagner IV

  29 = Wagner VII

  30 = Oblated Equal Area

  99 = User defined

*/


//* GDAL Projection Params *//
#define MAXPARAMS 13




#endif // PROJECTIONS_H
