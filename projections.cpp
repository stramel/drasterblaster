#include "projections.h"
#include "ui_advanced.h"

projections::projections(QObject *parent) :
    QObject(parent)
{
    projVLayout = new QVBoxLayout();
    projHLayout = new QHBoxLayout();
    projGridLayout = new QGridLayout();
}

void projections::callGenerate(int proj){
    int params[MAXPARAMS] = {};
    switch (proj){
    case GEO:
        break;
    case UTM:
        params[1] = LON;
        params[2] = LAT;
        break;
    case SPC:
        break;
    case AEA:
    case LCC:
        params[1] = SMAJOR;
        params[2] = SMINOR;
        params[3] = STDPR1;
        params[4] = STDPR2;
        params[5] = CENTMER;
        params[6] = ORIGINLAT;
        params[7] = FE;
        params[8] = FN;
        break;
    case MERC:
        params[1] = SMAJOR;
        params[2] = SMINOR;
        params[3] = CENTMER;
        params[4] = TRUESCALE;
        params[5] = FE;
        params[6] = FN;
        break;
    case POLAR:
        params[1] = SMAJOR;
        params[2] = SMINOR;
        params[3] = LONGPOL;
        params[4] = TRUESCALE;
        params[5] = FE;
        params[6] = FN;
        break;
    case POLYC:
        params[1] = SMAJOR;
        params[2] = SMINOR;
        params[3] = CENTMER;
        params[4] = ORIGINLAT;
        params[5] = FE;
        params[6] = FN;
        break;
    case EQDC:
        params[1] = SMAJOR;
        params[2] = SMINOR;
        params[3] = STDPAR;
        params[4] = CENTMER;
        params[5] = ORIGINLAT;
        params[6] = FE;
        params[7] = FN;
        //params[8] = ZERO; ????
        break;
    case EQDCB:
        params[1] = SMAJOR;
        params[2] = SMINOR;
        params[3] = STDPR1;
        params[4] = STDPR2;
        params[5] = CENTMER;
        params[6] = ORIGINLAT;
        params[7] = FE;
        params[8] = FN;
        //params[9] = 1; ????
        break;
    case TMERC:
        params[1] = SMAJOR;
        params[2] = SMINOR;
        params[3] = FACTOR;
        params[4] = CENTMER;
        params[5] = ORIGINLAT;
        params[6] = FE;
        params[7] = FN;
        break;
    case STERE:
    case LAEA:
    case AEQD:
    case GNOM:
    case ORTHO:
        params[1] = SPHERE;
        params[2] = CENTLON;
        params[3] = CENTERLAT;
        params[4] = FE;
        params[5] = FN;
        break;
    case GVNSP:
        params[1] = SPHERE;
        params[2] = HEIGHT;
        params[3] = CENTLON;
        params[4] = CENTERLAT;
        params[5] = FE;
        params[6] = FN;
        break;
    case SINU:
    case MILL:
    case ROBIN:
    case MOLL:
    case HAMMER:
    case WAGIV:
    case WAGVII:
        params[1] = SPHERE;
        params[2] = CENTMER;
        params[3] = FE;
        params[4] = FN;
        break;
    case EQR:
        params[1] = SPHERE;
        params[2] = CENTMER;
        params[3] = TRUESCALE;
        params[4] = FE;
        params[5] = FN;
        break;
    case VANDG:
        params[1] = SPHERE;
        params[2] = CENTMER;
        params[3] = ORIGINLAT;
        params[4] = FE;
        params[5] = FN;
        break;
    case OMERC:
        params[1] = SMAJOR;
        params[2] = SMINOR;
        params[3] = FACTOR;
        params[4] = ORIGINLAT;
        params[5] = FE;
        params[6] = FN;
        params[7] = LONG1;
        params[8] = LAT1;
        params[9] = LONG2;
        params[10] = LAT2;
        //params[11] = zero;//???????
        break;
    case OMERCB:
        params[1] = SMAJOR;
        params[2] = SMINOR;
        params[3] = FACTOR;
        params[4] = AZIANG;
        params[5] = AZMTHPT;
        params[6] = ORIGINLAT;
        params[7] = FE;
        params[8] = FN;
        //params[9] = 1;//???????
        break;
    case SOMERC:
        params[1] = SMAJOR;
        params[2] = SMINOR;
        params[3] = INCANG;
        params[4] = ASCLONG;
        params[5] = FE;
        params[6] = FN;
        params[7] = PSREV;
        params[8] = LRAT;
        params[9] = PFLAG;
        //params[10] = zero; //??????
        break;
    case SOMERCB:
        params[1] = SMAJOR;
        params[2] = SMINOR;
        params[3] = SATNUM;
        params[4] = PATH;
        params[5] = FE;
        params[6] = FN;
       // params[7] = 1; //?????????
        break;
    case ALASKA:
        params[1] = SMAJOR;
        params[2] = SMINOR;
        params[3] = FE;
        params[4] = FN;
        break;
    case IGH:
    case IMOLL:
        params[1] = SPHERE;
        break;
    case OEA:
        params[1] = SPHERE;
        params[2] = SHAPEM;
        params[3] = SHAPEN;
        params[4] = CENTLON;
        params[5] = CENTERLAT;
        params[6] = FE;
        params[7] = FN;
        params[8] = ANGLE;
        break;
    default:
        //Invalid
        break;
    }
    if (generateUi(params)){
        //ERROR
    }
}

int projections::generateUi(int params[]){
    int error = 0;
    int rowCount = 0;
    QDoubleValidator *lonZValid;
    QDoubleValidator *latZValid;
    QDoubleValidator *sMajorValid;
    QDoubleValidator *sMinorValid;
    QDoubleValidator *sphereValid;
    QDoubleValidator *fEValid;
    QDoubleValidator *fNValid;
    QDoubleValidator *factorValid;
    QDoubleValidator *heightValid;
    QDoubleValidator *psRevValid;
    QDoubleValidator *lRatValid;
    QDoubleValidator *shapeMValid;
    QDoubleValidator *shapeNValid;

    for (int i=1; (i <= sizeof(params)) && !error; i++){
        switch (params[i]){
        case LON:
            lonZLabel = new QLabel();
            lonZ = new QLineEdit();
            lonZLabel->setText("Longitude/Zone");
            lonZLabel->setToolTip("Longitude of any point in the UTM zone a zone code.");
            lonZLabel->setObjectName("lonLabel");
            lonZ->setObjectName("lonValue");
            lonZValid = new QDoubleValidator(-90.000, 90.000,3, lonZ);
            lonZValid->setNotation(QDoubleValidator::StandardNotation);
            lonZ->setValidator(lonZValid);

            projGridLayout->addWidget(lonZLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(lonZ,rowCount,2,1,4,0);
            break;
        case LAT:
            latZLabel = new QLabel();
            latZ = new QLineEdit();
            latZLabel->setText("Latitue/Zone");
            latZLabel->setToolTip("Latitude of any point in the UTM zone a zone code.");
            latZLabel->setObjectName("latLabel");
            latZ->setObjectName("latValue");
            latZValid = new QDoubleValidator(-180.000, 180.000, 3, latZ);
            latZValid->setNotation(QDoubleValidator::StandardNotation);
            latZ->setValidator(latZValid);

            projGridLayout->addWidget(latZLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(latZ,rowCount,2,1,4,0);
            break;
        case SMAJOR:
            sMajorLabel = new QLabel();
            sMajor = new QLineEdit();
            sMajorLabel->setText("Semi-major Axis");
            sMajorLabel->setToolTip("Semi-major axis of ellipsoid.  If zero, Clarke 1866 in meters is assumed.");
            sMajorLabel->setObjectName("sMajorLabel");
            sMajor->setObjectName("sMajorValue");
            sMajorValid = new QDoubleValidator(sMajor);
            sMajorValid->setNotation(QDoubleValidator::StandardNotation);
            sMajor->setValidator(sMajorValid);

            projGridLayout->addWidget(sMajorLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(sMajor,rowCount,3,1,4,0);
            break;
        case SMINOR:
            sMinorLabel = new QLabel();
            sMinor = new QLineEdit();
            sMinorLabel->setText("Semi-minor Axis");
            sMinorLabel->setToolTip("Eccentricity squared of the ellipsoid if less than zero, if zero, a spherical form is assumed, or if greater than zero, the semi-minor axis of ellipsoid.");
            sMinorLabel->setObjectName("sMinorLabel");
            sMinor->setObjectName("sMinorValue");
            sMinorValid = new QDoubleValidator(sMinor);
            sMinorValid->setNotation(QDoubleValidator::StandardNotation);
            sMajor->setValidator(sMinorValid);

            projGridLayout->addWidget(sMinorLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(sMinor,rowCount,3,1,4,0);
            break;
        case SPHERE:
            sphereLabel = new QLabel();
            sphere = new QLineEdit();
            sphereLabel->setText("Radius of Reference Sphere");
            sphereLabel->setToolTip("If zero, 6370997 meters is used.");
            sphereLabel->setObjectName("sphereLabel");
            sphere->setObjectName("sphereValue");
            sphereValid = new QDoubleValidator(0, 9999999, 3, sphere);
            sphereValid->setNotation(QDoubleValidator::StandardNotation);
            sphere->setValidator(sphereValid);

            projGridLayout->addWidget(sphereLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(sphere,rowCount,2,1,4,0);
            break;
        case STDPAR:
            stdParLabel = new QLabel();
            stdPr1Deg = new QLineEdit();
            stdPr1DegLabel = new QLabel();
            stdPr1Min = new QLineEdit();
            stdPr1MinLabel = new QLabel();
            stdPr1Sec = new QLineEdit();
            stdPr1SecLabel = new QLabel();
            stdParLabel->setText("Latitude of Standard Parallel");
            stdParLabel->setToolTip("Latitude of the standard parallel");
            stdParLabel->setObjectName("stdPar");
            projGridLayout->addWidget(stdParLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            stdPr1Deg->setObjectName("stdParDeg");
            stdPr1Deg->setValidator(new QIntValidator(stdPr1Deg));    //CHECK
            stdPr1DegLabel->setText("�");
            stdPr1DegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(stdPr1DegLabel,rowCount,1,0);
            projGridLayout->addWidget(stdPr1Deg,rowCount,2,0);

            stdPr1Min->setObjectName("stdParMin");
            stdPr1Min->setValidator(new QIntValidator(stdPr1Min));    //CHECK
            stdPr1MinLabel->setText("'");
            stdPr1MinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(stdPr1MinLabel,rowCount,3,0);
            projGridLayout->addWidget(stdPr1Min,rowCount,4,0);

            stdPr1Sec->setObjectName("stdParSec");
            stdPr1Sec->setValidator(new QIntValidator(stdPr1Sec));    //CHECK
            stdPr1SecLabel->setText("\"");
            stdPr1SecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(stdPr1SecLabel,rowCount,5,0);
            projGridLayout->addWidget(stdPr1Sec,rowCount,6,0);
            break;
        case STDPR1:
            stdPr1Label = new QLabel();
            stdPr1Deg = new QLineEdit();
            stdPr1DegLabel = new QLabel();
            stdPr1Min = new QLineEdit();
            stdPr1MinLabel = new QLabel();
            stdPr1Sec = new QLineEdit();
            stdPr1SecLabel = new QLabel();
            stdPr1Label->setText("Latitude of 1st Standard Parallel");
            stdPr1Label->setToolTip("Latitude of the first standard parallel");
            stdPr1Label->setObjectName("stdParOne");
            projGridLayout->addWidget(stdPr1Label,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            stdPr1Deg->setObjectName("stdParDeg");
            stdPr1Deg->setValidator(new QIntValidator(stdPr1Deg));    //CHECK
            stdPr1DegLabel->setText("�");
            stdPr1DegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(stdPr1DegLabel,rowCount,1,0);
            projGridLayout->addWidget(stdPr1Deg,rowCount,2,0);

            stdPr1Min->setObjectName("stdParMin");
            stdPr1Min->setValidator(new QIntValidator(stdPr1Min));    //CHECK
            stdPr1MinLabel->setText("'");
            stdPr1MinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(stdPr1MinLabel,rowCount,3,0);
            projGridLayout->addWidget(stdPr1Min,rowCount,4,0);

            stdPr1Sec->setObjectName("stdParSec");
            stdPr1Sec->setValidator(new QIntValidator(stdPr1Sec));    //CHECK
            stdPr1SecLabel->setText("\"");
            stdPr1SecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(stdPr1SecLabel,rowCount,5,0);
            projGridLayout->addWidget(stdPr1Sec,rowCount,6,0);
            break;
        case STDPR2:
            stdPr2Label = new QLabel();
            stdPr2Deg = new QLineEdit();
            stdPr2DegLabel = new QLabel();
            stdPr2Min = new QLineEdit();
            stdPr2MinLabel = new QLabel();
            stdPr2Sec = new QLineEdit();
            stdPr2SecLabel = new QLabel();
            stdPr2Label->setText("Latitude of 2nd Standard Parallel");
            stdPr2Label->setToolTip("Latitude of the second standard parallel");
            stdPr2Label->setObjectName("stdParTwo");
            projGridLayout->addWidget(stdPr2Label,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            stdPr2Deg->setObjectName("stdParDeg");
            stdPr2Deg->setValidator(new QIntValidator(stdPr2Deg));    //CHECK
            stdPr2DegLabel->setText("�");
            stdPr2DegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(stdPr2DegLabel,rowCount,1,0);
            projGridLayout->addWidget(stdPr2Deg,rowCount,2,0);

            stdPr2Min->setObjectName("stdParMin");
            stdPr2Min->setValidator(new QIntValidator(stdPr2Min));    //CHECK
            stdPr2MinLabel->setText("'");
            stdPr2MinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(stdPr2MinLabel,rowCount,3,0);
            projGridLayout->addWidget(stdPr2Min,rowCount,4,0);

            stdPr2Sec->setObjectName("stdParSec");
            stdPr2Sec->setValidator(new QIntValidator(stdPr2Sec));    //CHECK
            stdPr2SecLabel->setText("\"");
            stdPr2SecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(stdPr2SecLabel,rowCount,5,0);
            projGridLayout->addWidget(stdPr2Sec,rowCount,6,0);
            break;
        case CENTMER:
            centMerLabel = new QLabel();
            centMerDeg = new QLineEdit();
            centMerDegLabel = new QLabel();
            centMerMin = new QLineEdit();
            centMerMinLabel = new QLabel();
            centMerSec = new QLineEdit();
            centMerSecLabel = new QLabel();
            centMerLabel->setText("Longitude of the central meridian");
            centMerLabel->setToolTip("Longitude of the central meridian");
            centMerLabel->setObjectName("stdParTwo");
            projGridLayout->addWidget(centMerLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            centMerDeg->setObjectName("stdParDeg");
            centMerDeg->setValidator(new QIntValidator(centMerDeg));    //CHECK
            centMerDegLabel->setText("�");
            centMerDegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(centMerDegLabel,rowCount,1,0);
            projGridLayout->addWidget(centMerDeg,rowCount,2,0);

            centMerMin->setObjectName("stdParMin");
            centMerMin->setValidator(new QIntValidator(centMerMin));    //CHECK
            centMerMinLabel->setText("'");
            centMerMinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(centMerMinLabel,rowCount,3,0);
            projGridLayout->addWidget(centMerMin,rowCount,4,0);

            centMerSec->setObjectName("stdParSec");
            centMerSec->setValidator(new QIntValidator(centMerSec));    //CHECK
            centMerSecLabel->setText("\"");
            centMerSecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(centMerSecLabel,rowCount,5,0);
            projGridLayout->addWidget(centMerSec,rowCount,6,0);
            break;
        case ORIGINLAT:
            originLatLabel = new QLabel();
            originLatDeg = new QLineEdit();
            originLatDegLabel = new QLabel();
            originLatMin = new QLineEdit();
            originLatMinLabel = new QLabel();
            originLatSec = new QLineEdit();
            originLatSecLabel = new QLabel();
            originLatLabel->setText("Latitude of the projection origin");
            originLatLabel->setToolTip("Latitude of the projection origin");
            originLatLabel->setObjectName("stdParTwo");
            projGridLayout->addWidget(originLatLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            originLatDeg->setObjectName("stdParDeg");
            originLatDeg->setValidator(new QIntValidator(originLatDeg));    //CHECK
            originLatDegLabel->setText("�");
            originLatDegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(originLatDegLabel,rowCount,1,0);
            projGridLayout->addWidget(originLatDeg,rowCount,2,0);

            originLatMin->setObjectName("stdParMin");
            originLatMin->setValidator(new QIntValidator(originLatMin));    //CHECK
            originLatMinLabel->setText("'");
            originLatMinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(originLatMinLabel,rowCount,3,0);
            projGridLayout->addWidget(originLatMin,rowCount,4,0);

            originLatSec->setObjectName("stdParSec");
            originLatSec->setValidator(new QIntValidator(originLatSec));    //CHECK
            originLatSecLabel->setText("\"");
            originLatSecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(originLatSecLabel,rowCount,5,0);
            projGridLayout->addWidget(originLatSec,rowCount,6,0);
            break;
        case FE:
            fELabel = new QLabel();
            fE = new QLineEdit();
            fELabel->setText("False Easting");
            fELabel->setToolTip("False easting in the same units as the semi-major axis");
            fELabel->setObjectName("falseEastingLabel");
            fE->setObjectName("falseEastingValue");
            fEValid = new QDoubleValidator(fE);
            fEValid->setNotation(QDoubleValidator::StandardNotation);
            fE->setValidator(fEValid);

            projGridLayout->addWidget(fELabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(fE,rowCount,2,1,4,0);
            break;
        case FN:
            fNLabel = new QLabel();
            fN = new QLineEdit();
            fNLabel->setText("False Northing");
            fNLabel->setToolTip("False northing in the same units as the semi-major axis");
            fNLabel->setObjectName("falseNorthingLabel");
            fN->setObjectName("falseNorthingValue");
            fNValid = new QDoubleValidator(fN);
            fNValid->setNotation(QDoubleValidator::StandardNotation);
            fN->setValidator(fNValid);

            projGridLayout->addWidget(fNLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(fN,rowCount,2,1,4,0);
            break;
        case TRUESCALE:
            trueScaleLabel = new QLabel();
            trueScaleDeg = new QLineEdit();
            trueScaleDegLabel = new QLabel();
            trueScaleMin = new QLineEdit();
            trueScaleMinLabel = new QLabel();
            trueScaleSec = new QLineEdit();
            trueScaleSecLabel = new QLabel();
            trueScaleLabel->setText("True Scale");
            trueScaleLabel->setToolTip("Latitude of true scale");
            trueScaleLabel->setObjectName("trueScaleLabel");
            projGridLayout->addWidget(trueScaleLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            trueScaleDeg->setObjectName("stdParDeg");
            trueScaleDeg->setValidator(new QIntValidator(trueScaleDeg));    //CHECK
            trueScaleDegLabel->setText("�");
            trueScaleDegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(trueScaleDegLabel,rowCount,1,0);
            projGridLayout->addWidget(trueScaleDeg,rowCount,2,0);

            trueScaleMin->setObjectName("stdParMin");
            trueScaleMin->setValidator(new QIntValidator(trueScaleMin));    //CHECK
            trueScaleMinLabel->setText("'");
            trueScaleMinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(trueScaleMinLabel,rowCount,3,0);
            projGridLayout->addWidget(trueScaleMin,rowCount,4,0);

            trueScaleSec->setObjectName("stdParSec");
            trueScaleSec->setValidator(new QIntValidator(trueScaleSec));    //CHECK
            trueScaleSecLabel->setText("\"");
            trueScaleSecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(trueScaleSecLabel,rowCount,5,0);
            projGridLayout->addWidget(trueScaleSec,rowCount,6,0);
            break;
        case LONGPOL:
            longPolLabel = new QLabel();
            longPolDeg = new QLineEdit();
            longPolDegLabel = new QLabel();
            longPolMin = new QLineEdit();
            longPolMinLabel = new QLabel();
            longPolSec = new QLineEdit();
            longPolSecLabel = new QLabel();
            longPolLabel->setText("Longitude down below pole of map");
            longPolLabel->setToolTip("Longitude down below pole of map");
            longPolLabel->setObjectName("longPolLabel");
            projGridLayout->addWidget(longPolLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            longPolDeg->setObjectName("stdParDeg");
            longPolDeg->setValidator(new QIntValidator(longPolDeg));    //CHECK
            longPolDegLabel->setText("�");
            longPolDegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(longPolDegLabel,rowCount,1,0);
            projGridLayout->addWidget(longPolDeg,rowCount,2,0);

            longPolMin->setObjectName("stdParMin");
            longPolMin->setValidator(new QIntValidator(longPolMin));    //CHECK
            longPolMinLabel->setText("'");
            longPolMinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(longPolMinLabel,rowCount,3,0);
            projGridLayout->addWidget(longPolMin,rowCount,4,0);

            longPolSec->setObjectName("stdParSec");
            longPolSec->setValidator(new QIntValidator(longPolSec));    //CHECK
            longPolSecLabel->setText("\"");
            longPolSecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(longPolSecLabel,rowCount,5,0);
            projGridLayout->addWidget(longPolSec,rowCount,6,0);
            break;
        case FACTOR:
            factorLabel = new QLabel();
            factor = new QLineEdit();
            factorLabel->setText("Scale Factor");
            factorLabel->setToolTip("Scale factor at central meridian (Transverse Mercator) or center of projection (Hotine Oblique Mercator)");
            factorLabel->setObjectName("factorLabel");
            factor->setObjectName("factorValue");
            factorValid = new QDoubleValidator(factor);
            factorValid->setNotation(QDoubleValidator::StandardNotation);
            factor->setValidator(factorValid);

            projGridLayout->addWidget(factorLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(factor,rowCount,2,1,4,0);
            break;
        case CENTLON:
            centLonLabel = new QLabel();
            centLonDeg = new QLineEdit();
            centLonDegLabel = new QLabel();
            centLonMin = new QLineEdit();
            centLonMinLabel = new QLabel();
            centLonSec = new QLineEdit();
            centLonSecLabel = new QLabel();
            centLonLabel->setText("Longitude of Center of Projection");
            centLonLabel->setToolTip("Longitude of center of projection");
            centLonLabel->setObjectName("centLonLabel");
            projGridLayout->addWidget(centLonLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            centLonDeg->setObjectName("stdParDeg");
            centLonDeg->setValidator(new QIntValidator(centLonDeg));    //CHECK
            centLonDegLabel->setText("�");
            centLonDegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(centLonDegLabel,rowCount,1,0);
            projGridLayout->addWidget(centLonDeg,rowCount,2,0);

            centLonMin->setObjectName("stdParMin");
            centLonMin->setValidator(new QIntValidator(centLonMin));    //CHECK
            centLonMinLabel->setText("'");
            centLonMinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(centLonMinLabel,rowCount,3,0);
            projGridLayout->addWidget(centLonMin,rowCount,4,0);

            centLonSec->setObjectName("stdParSec");
            centLonSec->setValidator(new QIntValidator(centLonSec));    //CHECK
            centLonSecLabel->setText("\"");
            centLonSecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(centLonSecLabel,rowCount,5,0);
            projGridLayout->addWidget(centLonSec,rowCount,6,0);
            break;
        case CENTERLAT:
            centerLatLabel = new QLabel();
            centerLatDeg = new QLineEdit();
            centerLatDegLabel = new QLabel();
            centerLatMin = new QLineEdit();
            centerLatMinLabel = new QLabel();
            centerLatSec = new QLineEdit();
            centerLatSecLabel = new QLabel();
            centerLatLabel->setText("Latitude of center of projection");
            centerLatLabel->setToolTip("Latitude of center of projection");
            centerLatLabel->setObjectName("centerLatLabel");
            projGridLayout->addWidget(centerLatLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            centerLatDeg->setObjectName("stdParDeg");
            centerLatDeg->setValidator(new QIntValidator(centerLatDeg));    //CHECK
            centerLatDegLabel->setText("�");
            centerLatDegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(centerLatDegLabel,rowCount,1,0);
            projGridLayout->addWidget(centerLatDeg,rowCount,2,0);

            centerLatMin->setObjectName("stdParMin");
            centerLatMin->setValidator(new QIntValidator(centerLatMin));    //CHECK
            centerLatMinLabel->setText("'");
            centerLatMinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(centerLatMinLabel,rowCount,3,0);
            projGridLayout->addWidget(centerLatMin,rowCount,4,0);

            centerLatSec->setObjectName("stdParSec");
            centerLatSec->setValidator(new QIntValidator(centerLatSec));    //CHECK
            centerLatSecLabel->setText("\"");
            centerLatSecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(centerLatSecLabel,rowCount,5,0);
            projGridLayout->addWidget(centerLatSec,rowCount,6,0);
            break;
        case HEIGHT:
            heightLabel = new QLabel();
            height = new QLineEdit();
            heightLabel->setText("Height of perspective point");
            heightLabel->setToolTip("Height of perspective point");
            heightLabel->setObjectName("heightLabel");
            height->setObjectName("heightValue");
            heightValid = new QDoubleValidator(height);
            heightValid->setNotation(QDoubleValidator::StandardNotation);
            height->setValidator(heightValid);

            projGridLayout->addWidget(heightLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(height,rowCount,2,1,4,0);
            break;
        case LONG1:
            long1Label = new QLabel();
            long1Deg = new QLineEdit();
            long1DegLabel = new QLabel();
            long1Min = new QLineEdit();
            long1MinLabel = new QLabel();
            long1Sec = new QLineEdit();
            long1SecLabel = new QLabel();
            long1Label->setText("Longitude of first point on center line");
            long1Label->setToolTip("Longitude of first point on center line");
            long1Label->setObjectName("LonOneLabel");
            projGridLayout->addWidget(long1Label,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            long1Deg->setObjectName("stdParDeg");
            long1Deg->setValidator(new QIntValidator(long1Deg));    //CHECK
            long1DegLabel->setText("�");
            long1DegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(long1DegLabel,rowCount,1,0);
            projGridLayout->addWidget(long1Deg,rowCount,2,0);

            long1Min->setObjectName("stdParMin");
            long1Min->setValidator(new QIntValidator(long1Min));    //CHECK
            long1MinLabel->setText("'");
            long1MinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(long1MinLabel,rowCount,3,0);
            projGridLayout->addWidget(long1Min,rowCount,4,0);

            long1Sec->setObjectName("stdParSec");
            long1Sec->setValidator(new QIntValidator(long1Sec));    //CHECK
            long1SecLabel->setText("\"");
            long1SecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(long1SecLabel,rowCount,5,0);
            projGridLayout->addWidget(long1Sec,rowCount,6,0);
            break;
        case LONG2:
            long2Label = new QLabel();
            long2Deg = new QLineEdit();
            long2DegLabel = new QLabel();
            long2Min = new QLineEdit();
            long2MinLabel = new QLabel();
            long2Sec = new QLineEdit();
            long2SecLabel = new QLabel();
            long2Label->setText("Longitude of second point on center line");
            long2Label->setToolTip("Longitude of second point on center line");
            long2Label->setObjectName("LonTwoLabel");
            projGridLayout->addWidget(long2Label,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            long2Deg->setObjectName("stdParDeg");
            long2Deg->setValidator(new QIntValidator(long2Deg));    //CHECK
            long2DegLabel->setText("�");
            long2DegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(long2DegLabel,rowCount,1,0);
            projGridLayout->addWidget(long2Deg,rowCount,2,0);

            long2Min->setObjectName("stdParMin");
            long2Min->setValidator(new QIntValidator(long2Min));    //CHECK
            long2MinLabel->setText("'");
            long2MinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(long2MinLabel,rowCount,3,0);
            projGridLayout->addWidget(long2Min,rowCount,4,0);

            long2Sec->setObjectName("stdParSec");
            long2Sec->setValidator(new QIntValidator(long2Sec));    //CHECK
            long2SecLabel->setText("\"");
            long2SecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(long2SecLabel,rowCount,5,0);
            projGridLayout->addWidget(long2Sec,rowCount,6,0);
            break;
        case LAT1:
            lat1Label = new QLabel();
            lat1Deg = new QLineEdit();
            lat1DegLabel = new QLabel();
            lat1Min = new QLineEdit();
            lat1MinLabel = new QLabel();
            lat1Sec = new QLineEdit();
            lat1SecLabel = new QLabel();
            lat1Label->setText("Latitude of first point on center line");
            lat1Label->setToolTip("Latitude of first point on center line");
            lat1Label->setObjectName("latOneLabel");
            projGridLayout->addWidget(lat1Label,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            lat1Deg->setObjectName("stdParDeg");
            lat1Deg->setValidator(new QIntValidator(lat1Deg));    //CHECK
            lat1DegLabel->setText("�");
            lat1DegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(lat1DegLabel,rowCount,1,0);
            projGridLayout->addWidget(lat1Deg,rowCount,2,0);

            lat1Min->setObjectName("stdParMin");
            lat1Min->setValidator(new QIntValidator(lat1Min));    //CHECK
            lat1MinLabel->setText("'");
            lat1MinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(lat1MinLabel,rowCount,3,0);
            projGridLayout->addWidget(lat1Min,rowCount,4,0);

            lat1Sec->setObjectName("stdParSec");
            lat1Sec->setValidator(new QIntValidator(lat1Sec));    //CHECK
            lat1SecLabel->setText("\"");
            lat1SecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(lat1SecLabel,rowCount,5,0);
            projGridLayout->addWidget(lat1Sec,rowCount,6,0);
            break;
        case LAT2:
            lat2Label = new QLabel();
            lat2Deg = new QLineEdit();
            lat2DegLabel = new QLabel();
            lat2Min = new QLineEdit();
            lat2MinLabel = new QLabel();
            lat2Sec = new QLineEdit();
            lat2SecLabel = new QLabel();
            lat2Label->setText("Latitude of first point on center line");
            lat2Label->setToolTip("Latitude of first point on center line");
            lat2Label->setObjectName("latTwoLabel");
            projGridLayout->addWidget(lat2Label,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            lat2Deg->setObjectName("stdParDeg");
            lat2Deg->setValidator(new QIntValidator(lat2Deg));    //CHECK
            lat2DegLabel->setText("�");
            lat2DegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(lat2DegLabel,rowCount,1,0);
            projGridLayout->addWidget(lat2Deg,rowCount,2,0);

            lat2Min->setObjectName("stdParMin");
            lat2Min->setValidator(new QIntValidator(lat2Min));    //CHECK
            lat2MinLabel->setText("'");
            lat2MinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(lat2MinLabel,rowCount,3,0);
            projGridLayout->addWidget(lat2Min,rowCount,4,0);

            lat2Sec->setObjectName("stdParSec");
            lat2Sec->setValidator(new QIntValidator(lat2Sec));    //CHECK
            lat2SecLabel->setText("\"");
            lat2SecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(lat2SecLabel,rowCount,5,0);
            projGridLayout->addWidget(lat2Sec,rowCount,6,0);
            break;
        case AZIANG:
            aziAngLabel = new QLabel();
            aziAngDeg = new QLineEdit();
            aziAngDegLabel = new QLabel();
            aziAngMin = new QLineEdit();
            aziAngMinLabel = new QLabel();
            aziAngSec = new QLineEdit();
            aziAngSecLabel = new QLabel();
            aziAngLabel->setText("Azimuth angle east of north of center line");
            aziAngLabel->setToolTip("Azimuth angle east of north of center line");
            aziAngLabel->setObjectName("aziAngLabel");
            projGridLayout->addWidget(aziAngLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            aziAngDeg->setObjectName("stdParDeg");
            aziAngDeg->setValidator(new QIntValidator(aziAngDeg));    //CHECK
            aziAngDegLabel->setText("�");
            aziAngDegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(aziAngDegLabel,rowCount,1,0);
            projGridLayout->addWidget(aziAngDeg,rowCount,2,0);

            aziAngMin->setObjectName("stdParMin");
            aziAngMin->setValidator(new QIntValidator(aziAngMin));    //CHECK
            aziAngMinLabel->setText("'");
            aziAngMinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(aziAngMinLabel,rowCount,3,0);
            projGridLayout->addWidget(aziAngMin,rowCount,4,0);

            aziAngSec->setObjectName("stdParSec");
            aziAngSec->setValidator(new QIntValidator(aziAngSec));    //CHECK
            aziAngSecLabel->setText("\"");
            aziAngSecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(aziAngSecLabel,rowCount,5,0);
            projGridLayout->addWidget(aziAngSec,rowCount,6,0);
            break;
        case AZMTHPT:
            azmthPtLabel = new QLabel();
            azmthPtDeg = new QLineEdit();
            azmthPtDegLabel = new QLabel();
            azmthPtMin = new QLineEdit();
            azmthPtMinLabel = new QLabel();
            azmthPtSec = new QLineEdit();
            azmthPtSecLabel = new QLabel();
            azmthPtLabel->setText("Longitude of point on central meridian where azimuth occurs");
            azmthPtLabel->setToolTip("Longitude of point on central meridian where azimuth occurs");
            azmthPtLabel->setObjectName("AzmthPtLabel");
            projGridLayout->addWidget(azmthPtLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            azmthPtDeg->setObjectName("stdParDeg");
            azmthPtDeg->setValidator(new QIntValidator(azmthPtDeg));    //CHECK
            azmthPtDegLabel->setText("�");
            azmthPtDegLabel->setObjectName("degLabel");
            projGridLayout->addWidget(azmthPtDegLabel,rowCount,1,0);
            projGridLayout->addWidget(azmthPtDeg,rowCount,2,0);

            azmthPtMin->setObjectName("stdParMin");
            azmthPtMin->setValidator(new QIntValidator(azmthPtMin));    //CHECK
            azmthPtMinLabel->setText("'");
            azmthPtMinLabel->setObjectName("minLabel");
            projGridLayout->addWidget(azmthPtMinLabel,rowCount,3,0);
            projGridLayout->addWidget(azmthPtMin,rowCount,4,0);

            azmthPtSec->setObjectName("stdParSec");
            azmthPtSec->setValidator(new QIntValidator(azmthPtSec));    //CHECK
            azmthPtSecLabel->setText("\"");
            azmthPtSecLabel->setObjectName("secLabel");
            projGridLayout->addWidget(azmthPtSecLabel,rowCount,5,0);
            projGridLayout->addWidget(azmthPtSec,rowCount,6,0);
            break;
        case INCANG:
            break;
        case ASCLONG:
            break;
        case PSREV:
            psRevLabel = new QLabel();
            psRev = new QLineEdit();
            psRevLabel->setText("Period of satellite revolution in minutes");
            psRevLabel->setToolTip("Period of satellite revolution in minutes");
            psRevLabel->setObjectName("psRevLabel");
            psRev->setObjectName("psRevValue");
            psRevValid = new QDoubleValidator(psRev);
            psRevValid->setNotation(QDoubleValidator::StandardNotation);
            psRev->setValidator(psRevValid);

            projGridLayout->addWidget(psRevLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(psRev,rowCount,2,1,4,0);
            break;
        case LRAT:
            lRatLabel = new QLabel();
            lRat = new QLineEdit();
            lRatLabel->setText("Landsat ratio to compensate for confusion at northern end of orbit");
            lRatLabel->setToolTip("Landsat ratio to compensate for confusion at northern end of orbit");
            lRatLabel->setObjectName("lRatLabel");
            lRat->setObjectName("lRatValue");
            lRatValid = new QDoubleValidator(lRat);
            lRatValid->setNotation(QDoubleValidator::StandardNotation);
            lRat->setValidator(lRatValid);

            projGridLayout->addWidget(lRatLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(lRat,rowCount,2,1,4,0);
            break;
        case PFLAG:
            pFlagLabel = new QLabel();
            pFlag = new QLineEdit();
            pFlagLabel->setText("End of path flag for Landsat");
            pFlagLabel->setToolTip("End of path flag for Landsat:  0 = start of path, 1 = end of path");
            pFlagLabel->setObjectName("pFlagLabel");
            pFlag->setObjectName("pFlagValue");
            pFlag->setValidator(new QIntValidator(0,1,pFlag));

            projGridLayout->addWidget(pFlagLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(pFlag,rowCount,2,1,4,0);
            break;
        case SATNUM:
            satNumLabel = new QLabel();
            satNum = new QLineEdit();
            satNumLabel->setText("Landsat Satellite Number");
            satNumLabel->setToolTip("Landsat Satellite Number");
            satNumLabel->setObjectName("satNumLabel");
            satNum->setObjectName("satNumValue");
            satNum->setValidator(new QIntValidator(1,7,satNum));

            projGridLayout->addWidget(satNumLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(satNum,rowCount,2,1,4,0);
            break;
        case PATH:
            pathLabel = new QLabel();
            path = new QLineEdit();
            pathLabel->setText("Landsat Path Number");
            pathLabel->setToolTip("Landsat Path Number (Use WRS-1 for Landsat 1, 2 and 3 and WRS-2 for Landsat 4, 5 and 6.)");
            pathLabel->setObjectName("pathLabel");
            path->setObjectName("pathValue");
            path->setValidator(new QIntValidator(1,233,path));

            projGridLayout->addWidget(pathLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(path,rowCount,2,1,4,0);
            break;
        case SHAPEM:
            shapeMLabel = new QLabel();
            shapeM = new QLineEdit();
            shapeMLabel->setText("Oblated Equal Area oval shape parameter m");
            shapeMLabel->setToolTip("Oblated Equal Area oval shape parameter m");
            shapeMLabel->setObjectName("mShapeLabel");
            shapeM->setObjectName("mShapeValue");
            shapeMValid = new QDoubleValidator(shapeM);
            shapeMValid->setNotation(QDoubleValidator::StandardNotation);
            shapeM->setValidator(shapeMValid);

            projGridLayout->addWidget(shapeMLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(shapeM,rowCount,2,1,4,0);
            break;
        case SHAPEN:
            shapeNLabel = new QLabel();
            shapeN = new QLineEdit();
            shapeNLabel->setText("Oblated Equal Area oval shape parameter n");
            shapeNLabel->setToolTip("Oblated Equal Area oval shape parameter n");
            shapeNLabel->setObjectName("nShapeLabel");
            shapeN->setObjectName("nShapeValue");
            shapeNValid = new QDoubleValidator(shapeN);
            shapeNValid->setNotation(QDoubleValidator::StandardNotation);
            shapeN->setValidator(shapeNValid);

            projGridLayout->addWidget(shapeNLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(shapeN,rowCount,2,1,4,0);
            break;
        case ANGLE:
            break;
        default:
            error = 1;
            break;
        }
        rowCount++;
    }

    return error;
}
