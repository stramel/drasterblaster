#include "projections.h"
#include "ui_advanced.h"

projections::projections(QObject *parent) :
    QObject(parent)
{
    projVLayout = new QVBoxLayout(0);
    projHLayout = new QHBoxLayout(0);
    projGridLayout = new QGridLayout(0);
    projEdit = new QLineEdit(0);
    projLabel = new QLabel(0);
    projLabel->setStyleSheet("font-weight: bold;");

    /*
    incAng = new QLineEdit();       //???
    asclong //????
    zero = new QLineEdit();         //???
    one = new QLineEdit();          //???
    angle = new QLineEdit();        //DMS???
    */
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
    int rowCount = 1;
    for (int i=1; i <= params.size() && !error; i++){
        switch (params[i]){
        case LON:
            projLabel->setText("Longitude/Zone");
            projLabel->setToolTip("Longitude of any point in the UTM zone a zone code.");
            projLabel->setObjectName("lonLabel");
            projEdit->setObjectName("lonValue");

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case LAT:
            projLabel->setText("Latitue/Zone");
            projLabel->setToolTip("Latitude of any point in the UTM zone a zone code.");
            projLabel->setObjectName("latLabel");
            projEdit->setObjectName("latValue");
            projEdit->setValidator(new QIntValidator(-180, 180, this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case SMAJOR:
            projLabel->setText("Semi-major Axis");
            projLabel->setToolTip("Semi-major axis of ellipsoid.  If zero, Clarke 1866 in meters is assumed.");
            projLabel->setObjectName("sMajorLabel");
            projEdit->setObjectName("sMajorValue");
            projEdit->setValidator(new QDoubleValidator(this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case SMINOR:
            projLabel->setText("Semi-minor Axis");
            projLabel->setToolTip("Eccentricity squared of the ellipsoid if less than zero," &&
                                  " if zero, a spherical form is assumed, or if greater than" &&
                                  " zero, the semi-minor axis of ellipsoid.");
            projLabel->setObjectName("sMinorLabel");
            projEdit->setObjectName("sMinorValue");
            projEdit->setValidator(new QDoubleValidator(this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case SPHERE:
            projLabel->setText("Radius of Reference Sphere");
            projLabel->setToolTip("If zero, 6370997 meters is used.");
            projLabel->setObjectName("sphereLabel");
            projEdit->setObjectName("sphereValue");
            projEdit->setValidator(new QDoubleValidator(0, 9999999, 3, this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case STDPAR:
            projLabel->setText("Latitude of Standard Parallel");
            projLabel->setToolTip("Latitude of the standard parallel");
            projLabel->setObjectName("stdPar");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case STDPR1:
            projLabel->setText("Latitude of 1st Standard Parallel");
            projLabel->setToolTip("Latitude of the first standard parallel");
            projLabel->setObjectName("stdParOne");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case STDPR2:
            projLabel->setText("Latitude of 2nd Standard Parallel");
            projLabel->setToolTip("Latitude of the second standard parallel");
            projLabel->setObjectName("stdParTwo");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case CENTMER:
            projLabel->setText("Longitude of the central meridian");
            projLabel->setToolTip("Longitude of the central meridian");
            projLabel->setObjectName("stdParTwo");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case ORIGINLAT:
            projLabel->setText("Latitude of the projection origin");
            projLabel->setToolTip("Latitude of the projection origin");
            projLabel->setObjectName("stdParTwo");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case FE:
            projLabel->setText("False Easting");
            projLabel->setToolTip("False easting in the same units as the semi-major axis");
            projLabel->setObjectName("falseEastingLabel");
            projEdit->setObjectName("falseEastingValue");
            projEdit->setValidator(new QDoubleValidator(this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case FN:
            projLabel->setText("False Northing");
            projLabel->setToolTip("False northing in the same units as the semi-major axis");
            projLabel->setObjectName("falseNorthingLabel");
            projEdit->setObjectName("falseNorthingValue");
            projEdit->setValidator(new QDoubleValidator(this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case TRUESCALE:
            projLabel->setText("True Scale");
            projLabel->setToolTip("Latitude of true scale");
            projLabel->setObjectName("trueScaleLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case LONGPOL:
            projLabel->setText("Longitude down below pole of map");
            projLabel->setToolTip("Longitude down below pole of map");
            projLabel->setObjectName("longPolLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case FACTOR:
            projLabel->setText("Scale Factor");
            projLabel->setToolTip("Scale factor at central meridian (Transverse Mercator) or center of projection (Hotine Oblique Mercator)");
            projLabel->setObjectName("factorLabel");
            projEdit->setObjectName("factorValue");
            projEdit->setValidator(new QDoubleValidator(this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case CENTLON:
            projLabel->setText("Longitude of Center of Projection");
            projLabel->setToolTip("Longitude of center of projection");
            projLabel->setObjectName("centLonLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case CENTERLAT:
            projLabel->setText("Latitude of center of projection");
            projLabel->setToolTip("Latitude of center of projection");
            projLabel->setObjectName("centerLatLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case HEIGHT:
            projLabel->setText("Height of perspective point");
            projLabel->setToolTip("Height of perspective point");
            projLabel->setObjectName("heightLabel");
            projEdit->setObjectName("heightValue");
            projEdit->setValidator(new QDoubleValidator(this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case LONG1:
            projLabel->setText("Longitude of first point on center line");
            projLabel->setToolTip("Longitude of first point on center line");
            projLabel->setObjectName("LonOneLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case LONG2:
            projLabel->setText("Longitude of second point on center line");
            projLabel->setToolTip("Longitude of second point on center line");
            projLabel->setObjectName("LonTwoLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case LAT1:
            projLabel->setText("Latitude of first point on center line");
            projLabel->setToolTip("Latitude of first point on center line");
            projLabel->setObjectName("latOneLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case LAT2:
            projLabel->setText("Latitude of first point on center line");
            projLabel->setToolTip("Latitude of first point on center line");
            projLabel->setObjectName("latTwoLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case AZIANG:
            projLabel->setText("Azimuth angle east of north of center line");
            projLabel->setToolTip("Azimuth angle east of north of center line");
            projLabel->setObjectName("aziAngLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case AZMTHPT:
            projLabel->setText("Longitude of point on central meridian where azimuth occurs");
            projLabel->setToolTip("Longitude of point on central meridian where azimuth occurs");
            projLabel->setObjectName("AzmthPtLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,1,6,Qt::AlignLeft);

            rowCount += 1;
            projEdit->setObjectName("stdParDeg");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("�");
            projLabel->setObjectName("degLabel");
            projGridLayout->addWidget(projLabel,rowCount,1,0);
            projGridLayout->addWidget(projEdit,rowCount,2,0);

            projEdit->setObjectName("stdParMin");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText("'");
            projLabel->setObjectName("minLabel");
            projGridLayout->addWidget(projLabel,rowCount,3,0);
            projGridLayout->addWidget(projEdit,rowCount,4,0);

            projEdit->setObjectName("stdParSec");
            projEdit->setValidator(new QIntValidator(this));    //CHECK
            projLabel->setText('"');
            projLabel->setObjectName("secLabel");
            projGridLayout->addWidget(projLabel,rowCount,5,0);
            projGridLayout->addWidget(projEdit,rowCount,6,0);
            break;
        case INCANG:
            break;
        case ASCLONG:
            break;
        case PSREV:
            projLabel->setText("Period of satellite revolution in minutes");
            projLabel->setToolTip("Period of satellite revolution in minutes");
            projLabel->setObjectName("psRevLabel");
            projEdit->setObjectName("psRevValue");
            projEdit->setValidator(new QDoubleValidator(this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case LRAT:
            projLabel->setText("Landsat ratio to compensate for confusion at northern end of orbit");
            projLabel->setToolTip("Landsat ratio to compensate for confusion at northern end of orbit");
            projLabel->setObjectName("lRatLabel");
            projEdit->setObjectName("lRatValue");
            projEdit->setValidator(new QDoubleValidator(this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case PFLAG:
            projLabel->setText("End of path flag for Landsat");
            projLabel->setToolTip("End of path flag for Landsat:  0 = start of path, 1 = end of path");
            projLabel->setObjectName("pFlagLabel");
            projEdit->setObjectName("pFlagValue");
            projEdit->setValidator(new QIntValidator(0,1,this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case SATNUM:
            projLabel->setText("Landsat Satellite Number");
            projLabel->setToolTip("Landsat Satellite Number");
            projLabel->setObjectName("satNumLabel");
            projEdit->setObjectName("satNumValue");
            projEdit->setValidator(new QIntValidator(1,7,this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case PATH:
            projLabel->setText("Landsat Path Number");
            projLabel->setToolTip("Landsat Path Number (Use WRS-1 for Landsat 1, 2 and 3 and WRS-2 for Landsat 4, 5 and 6.)");
            projLabel->setObjectName("pathLabel");
            projEdit->setObjectName("pathValue");
            projEdit->setValidator(new QIntValidator(1,233,this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case SHAPEM:
            projLabel->setText("Oblated Equal Area oval shape parameter m");
            projLabel->setToolTip("Oblated Equal Area oval shape parameter m");
            projLabel->setObjectName("mShapeLabel");
            projEdit->setObjectName("mShapeValue");
            projEdit->setValidator(new QDoubleValidator(this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case SHAPEN:
            projLabel->setText("Oblated Equal Area oval shape parameter n");
            projLabel->setToolTip("Oblated Equal Area oval shape parameter n");
            projLabel->setObjectName("nShapeLabel");
            projEdit->setObjectName("nShapeValue");
            projEdit->setValidator(new QDoubleValidator(this));

            projGridLayout->addWidget(projLabel,rowCount,1,1,2,0);
            projGridLayout->addWidget(projEdit,rowCount,2,1,4,0);
            break;
        case ANGLE:
            break;
        default:
            error = 1;
            break;
        }
        projVLayout->addWidget(projLabel);
        projVLayout->addWidget(projEdit);
    }

    return error;
}
