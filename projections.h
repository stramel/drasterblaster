#ifndef PROJECTIONS_H
#define PROJECTIONS_H

#include <QObject>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>

namespace Ui {
class projections;
}

class projections : public QObject
{
    Q_OBJECT
public:
    explicit projections(QObject *parent = 0);
    void callGenerate(int);
    QGridLayout *projGridLayout;
    
signals:
    
public slots:

private:
    int generateUi(int[]);

    QVBoxLayout *projVLayout;
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

/*
0 = Geographic
1 = Universal Transverse Mercator (UTM)
2 = State Plane Coordinates
3 = Albers Equal Area Conic
4 = Lambert Conformal Conic
5 = Mercator
6 = Polar Stereographic
7 = Polyconic
8 = Equidistant Conic A
9 = Transverse Mercator
10 = Stereographic
11 = Lambert Azimuthal Equal Area
12 = Azimuthal Equidistant
13 = Gnomonic
14 = Orthographic
15 = General Vertical Near-Side Perspective
16 = Sinusiodal
17 = Equirectangular
18 = Miller Cylindrical
19 = Van der Grinten
20 = (Hotine) Oblique Mercator A
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
31 = Equidistant Conic B
32 = (Hotine) Oblique Mercator B
33 = Space Oblique Mercator (SOM) B
*/

//* Listed to closest PROJ4 Code *//
#define GEO 0 //Not Listed
#define UTM 1 //Not Listed
#define SPC 2 //Not Listed
#define AEA 3
#define LCC 4
#define MERC 5
#define POLAR 6 //Alt
#define POLYC 7 //Alt
#define EQDC 8
#define TMERC 9
#define STERE 10
#define LAEA 11
#define AEQD 12
#define GNOM 13
#define ORTHO 14
#define GVNSP 15 //Not Listed
#define SINU 16
#define EQR 17 //Alt
#define MILL 18
#define VANDG 19
#define OMERC 20
#define ROBIN 21
#define SOMERC 22 //Not Listed
#define ALASKA 23 //Not Listed
#define IGH 24 //Not Listed
#define MOLL 25
#define IMOLL 26 //Not Listed
#define HAMMER 27 //Not Listed
#define WAGIV 28 //Not Listed
#define WAGVII 29 //Not Listed
#define OEA 30 //Not Listed
#define EQDCB 31 //Alt
#define OMERCB 32 //Alt
#define SOMERCB 33 //Not Listed


//* GDAL Projection Params *//
#define MAXPARAMS 13

#define LON 1
#define LAT 2
#define SMAJOR 3
#define SMINOR 4
#define SPHERE 5
#define STDPAR 6
#define STDPR1 7
#define STDPR2 8
#define CENTMER 9
#define ORIGINLAT 10
#define FE 11
#define FN 12
#define TRUESCALE 13
#define LONGPOL 14
#define FACTOR 15
#define CENTLON 16
#define CENTERLAT 17
#define HEIGHT 18
#define LONG1 19
#define LONG2 20
#define LAT1 21
#define LAT2 22
#define AZIANG 23
#define AZMTHPT 24
#define INCANG 25
#define ASCLONG 26
#define PSREV 27
#define LRAT 28
#define PFLAG 29
#define SATNUM 30
#define PATH 31
#define SHAPEM 32
#define SHAPEN 33
#define ANGLE 34



#endif // PROJECTIONS_H
