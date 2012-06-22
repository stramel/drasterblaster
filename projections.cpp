#include "projections.h"
#include "ui_advanced.h"

#include <iostream> //TESTING
#include <constants.h>
#include "wizard.h"
#include <projectedraster.hh>
#include <string>
#include <utm.h>

projections::projections(QObject *parent) :
    QObject(parent)
{
    projVLayout = new QVBoxLayout();
    projHLayout = new QHBoxLayout();
    //projGridLayout = new QGridLayout();
}

void projections::callGenerate(ProjCode proj, std::string module){
    std::vector<ProjParam> params;
    switch (proj){
    case GEO:
        break;
    case _UTM:
        params.push_back(LON);
        params.push_back(LAT);
        break;
    case SPCS:
        break;
    case ALBERS:
    case LAMCC:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(STDPR1);
        params.push_back(STDPR2);
        params.push_back(CENTMER);
        params.push_back(ORIGINLAT);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case MERCAT:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(CENTMER);
        params.push_back(TRUESCALE);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case PS:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(LONGPOL);
        params.push_back(TRUESCALE);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case POLYC:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(CENTMER);
        params.push_back(ORIGINLAT);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case EQUIDC:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(STDPAR);
        params.push_back(CENTMER);
        params.push_back(ORIGINLAT);
        params.push_back(FE);
        params.push_back(FN);
        //params[8] = ZERO; ????
        break;
    case TM:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(FACTOR);
        params.push_back(CENTMER);
        params.push_back(ORIGINLAT);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case STEREO:
    case LAMAZ:
    case AZMEQD:
    case GNOMON:
    case ORTHO:
        params.push_back(SPHERE);
        params.push_back(CENTLON);
        params.push_back(CENTERLAT);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case GVNSP:
        params.push_back(SPHERE);
        params.push_back(HEIGHT);
        params.push_back(CENTLON);
        params.push_back(CENTERLAT);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case SNSOID:
    case MILLER:
    case ROBIN:
    case MOLL:
    case HAMMER:
    case WAGIV:
    case WAGVII:
        params.push_back(SPHERE);
        params.push_back(CENTMER);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case EQRECT:
        params.push_back(SPHERE);
        params.push_back(CENTMER);
        params.push_back(TRUESCALE);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case VGRINT:
        params.push_back(SPHERE);
        params.push_back(CENTMER);
        params.push_back(ORIGINLAT);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case HOM:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(FACTOR);
        params.push_back(ORIGINLAT);
        params.push_back(FE);
        params.push_back(FN);
        params.push_back(LONG1);
        params.push_back(LAT1);
        params.push_back(LONG2);
        params.push_back(LAT2);
        //params[11] = zero;//???????
        break;
    case SOM:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(INCANG);
        params.push_back(ASCLONG);
        params.push_back(FE);
        params.push_back(FN);
        params.push_back(PSREV);
        params.push_back(LRAT);
        params.push_back(PFLAG);
        //params[10] = zero; //??????
        break;
    case ALASKA:
        params.push_back(SMAJOR);
        params.push_back(SMINOR);
        params.push_back(FE);
        params.push_back(FN);
        break;
    case GOOD:
    case IMOLL:
        params.push_back(SPHERE);
        break;
    case OBEQA:
        params.push_back(SPHERE);
        params.push_back(SHAPEM);
        params.push_back(SHAPEN);
        params.push_back(CENTLON);
        params.push_back(CENTERLAT);
        params.push_back(FE);
        params.push_back(FN);
        params.push_back(ANGLE);
        break;
    default:
        //Invalid
        break;
    }
    if (generateUi(params, module)){
        std::cout << "ERROR GENERATING UI" << std::endl;
    }
}

int projections::generateUi(std::vector<ProjParam> &params, std::string module ){
    int error = 0;
    int rowCount = 0;
    Wizard w;

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
    QHBoxLayout *lonLay;
    QHBoxLayout *latLay;
    QHBoxLayout *sMajLay;
    QHBoxLayout *sMinLay;
    QHBoxLayout *sphereLay;
    QHBoxLayout *stdParLay;
    QHBoxLayout *stdPr2Lay;
    QHBoxLayout *centMerLay;
    QHBoxLayout *originLatLay;
    QHBoxLayout *fELay;
    QHBoxLayout *fNLay;
    QHBoxLayout *trueScaleLay;
    QHBoxLayout *longPolLay;
    QHBoxLayout *factorLay;
    //QHBoxLayout *centLonLay;
    QHBoxLayout *centLatLay;
    QHBoxLayout *heightLay;
    QHBoxLayout *longOneLay;
    QHBoxLayout *longTwoLay;
    QHBoxLayout *latOneLay;
    QHBoxLayout *latTwoLay;
    QHBoxLayout *aziAngLay;
    QHBoxLayout *azmthPtLay;
    //QHBoxLayout *incAngLay;
    //QHBoxLayout *ascLongLay;
    QHBoxLayout *psRevLay;
    QHBoxLayout *lRatLay;
    QHBoxLayout *pFlagLay;
    QHBoxLayout *satNumLay;
    QHBoxLayout *pathLay;
    QHBoxLayout *shapeMLay;
    QHBoxLayout *shapeNLay;
    //QHBoxLayout *angleLay;
    QFont labels;
    labels.setBold(true);

    projVLayout->addSpacerItem(new QSpacerItem(0,10,QSizePolicy::Preferred, QSizePolicy::Preferred));

    for (int i=0; ((i < params.size()) && !error); i++){
        switch (params.at(i)){
        case LON:
            lonLay = new QHBoxLayout;

            lonZLabel = new QLabel();
            lonZLabel->setText("Longitude/Zone");
            lonZLabel->setToolTip("Longitude of any point in the UTM zone a zone code.");
            lonZLabel->setObjectName("lonLabel");
            lonZLabel->setFont(labels);
            //lonZLabel->setFixedWidth(100);

            lonZ = new QLineEdit();
            lonZ->setObjectName("lonValue");
            lonZ->setFixedWidth(100);
            lonZ->setAlignment(Qt::AlignHCenter);
            //lonZ->setText(zone());
            //val = new QRegExpValidator(lonValid, lonZ);

            if (params.at(i+1) != LAT) {
            lonLay->addWidget(lonZLabel);
            lonLay->addWidget(lonZ);
            lonLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(lonLay);
            }
            break;
        case LAT:
            latLay = new QHBoxLayout;

            latZLabel = new QLabel();
            latZLabel->setText("Latitue/Zone");
            latZLabel->setToolTip("Latitude of any point in the UTM zone a zone code.");
            latZLabel->setObjectName("latLabel");
            latZLabel->setFont(labels);
            //latZLabel->setFixedWidth(100);

            latZ = new QLineEdit();
            latZValid = new QDoubleValidator(-180.000, 180.000, 3, latZ);
            latZValid->setNotation(QDoubleValidator::StandardNotation);
            latZ->setObjectName("latValue");
            latZ->setValidator(latZValid);
            latZ->setFixedWidth(100);
            latZ->setAlignment(Qt::AlignHCenter);

            if (params.at(i-1) != LON) {
            latLay->addWidget(latZLabel);
            latLay->addWidget(latZ);
            latLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));
            } else if (params.at(i-1) == LON){
                latLay->addWidget(lonZLabel);
                latLay->addWidget(lonZ);
                latLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
                latLay->addWidget(latZLabel);
                latLay->addWidget(latZ);
                //latLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));
            }
            projVLayout->addLayout(latLay);
            break;
        case SMAJOR:
            sMajLay = new QHBoxLayout;

            sMajorLabel = new QLabel();
            sMajorLabel->setText("Semi-major Axis");
            sMajorLabel->setToolTip("Semi-major axis of ellipsoid.  If zero, Clarke 1866 in meters is assumed.");
            sMajorLabel->setObjectName("sMajorLabel");
            sMajorLabel->setFont(labels);

            sMajor = new QLineEdit();
            sMajorValid = new QDoubleValidator(sMajor);
            sMajorValid->setNotation(QDoubleValidator::StandardNotation);
            sMajor->setObjectName("sMajorValue");
            sMajor->setValidator(sMajorValid);
            sMajor->setFixedWidth(100);

            if (params.at(i+1) != SMINOR){
            sMajLay->addWidget(sMajorLabel);
            sMajLay->addWidget(sMajor);
            sMajLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));
            }
            projVLayout->addLayout(sMajLay);
            break;
        case SMINOR:
            sMinLay = new QHBoxLayout;

            sMinorLabel = new QLabel();
            sMinorLabel->setText("Semi-minor Axis");
            sMinorLabel->setToolTip("Eccentricity squared of the ellipsoid if less than zero, if zero, a spherical form is assumed, or if greater than zero, the semi-minor axis of ellipsoid.");
            sMinorLabel->setObjectName("sMinorLabel");
            sMinorLabel->setFont(labels);

            sMinor = new QLineEdit();
            sMinorValid = new QDoubleValidator(sMinor);
            sMinorValid->setNotation(QDoubleValidator::StandardNotation);
            sMinor->setObjectName("sMinorValue");
            sMinor->setValidator(sMinorValid);
            sMinor->setFixedWidth(100);

            if (params.at(i-1) != SMAJOR){
            sMinLay->addWidget(sMinorLabel);
            sMinLay->addWidget(sMinor);
            sMinLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));
            } else if (params.at(i-1) == SMAJOR) {
                sMinLay->addWidget(sMajorLabel);
                sMinLay->addWidget(sMajor);
                sMinLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
                sMinLay->addWidget(sMinorLabel);
                sMinLay->addWidget(sMinor);
            }
            projVLayout->addLayout(sMinLay);
            break;
        case SPHERE:
            sphereLay = new QHBoxLayout;

            sphereLabel = new QLabel();
            sphereLabel->setText("Radius of Reference Sphere");
            sphereLabel->setToolTip("If zero, 6370997 meters is used.");
            sphereLabel->setObjectName("sphereLabel");
            sphereLabel->setFont(labels);

            sphere = new QLineEdit();
            sphereValid = new QDoubleValidator(0, 9999999, 3, sphere);
            sphereValid->setNotation(QDoubleValidator::StandardNotation);
            sphere->setObjectName("sphereValue");
            sphere->setValidator(sphereValid);
            sphere->setFixedWidth(100);

            sphereLay->addWidget(sphereLabel);
            sphereLay->addWidget(sphere);
            sphereLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(sphereLay);
            break;
        case STDPAR:
            stdParLay = new QHBoxLayout;

            stdParLabel = new QLabel();
            stdParLabel->setText("Latitude of Standard Parallel");
            stdParLabel->setToolTip("Latitude of the standard parallel");
            stdParLabel->setObjectName("stdPar");
            stdParLabel->setFont(labels);

            rowCount += 1;

            //DEGREE
            stdPr1DegLabel = new QLabel();
            stdPr1DegLabel->setText("�");
            stdPr1DegLabel->setObjectName("degLabel");
            stdPr1DegLabel->setFont(labels);

            stdPr1Deg = new QLineEdit();
            stdPr1Deg->setObjectName("stdParDeg");
            stdPr1Deg->setValidator(new QIntValidator(stdPr1Deg));    //CHECK
            stdPr1Deg->setFixedWidth(75);

            //MINUTE
            stdPr1MinLabel = new QLabel();
            stdPr1MinLabel->setText("'");
            stdPr1MinLabel->setObjectName("minLabel");
            stdPr1MinLabel->setFont(labels);

            stdPr1Min = new QLineEdit();
            stdPr1Min->setObjectName("stdParMin");
            stdPr1Min->setValidator(new QIntValidator(stdPr1Min));    //CHECK
            stdPr1Min->setFixedWidth(75);

            //SECOND
            stdPr1SecLabel = new QLabel();
            stdPr1SecLabel->setText("\"");
            stdPr1SecLabel->setObjectName("secLabel");
            stdPr1SecLabel->setFont(labels);

            stdPr1Sec = new QLineEdit();
            stdPr1Sec->setObjectName("stdParSec");
            stdPr1Sec->setValidator(new QIntValidator(stdPr1Sec));    //CHECK
            stdPr1Sec->setFixedWidth(75);

            stdParLay->addWidget(stdPr1Label);
            stdParLay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            stdParLay->addWidget(stdPr1Deg);
            stdParLay->addWidget(stdPr1DegLabel);
            stdParLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            stdParLay->addWidget(stdPr1Min);
            stdParLay->addWidget(stdPr1MinLabel);
            stdParLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            stdParLay->addWidget(stdPr1Sec);
            stdParLay->addWidget(stdPr1SecLabel);
            stdParLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(stdParLay);
            break;
        case STDPR1:
            stdParLay = new QHBoxLayout;

            stdPr1Label = new QLabel();
            stdPr1Label->setText("Latitude of 1st Standard Parallel");
            stdPr1Label->setToolTip("Latitude of the first standard parallel");
            stdPr1Label->setObjectName("stdParOne");
            stdPr1Label->setFont(labels);

            rowCount += 1;

            //DEGREE
            stdPr1DegLabel = new QLabel();
            stdPr1DegLabel->setText("�");
            stdPr1DegLabel->setObjectName("degLabel");
            stdPr1DegLabel->setFont(labels);

            stdPr1Deg = new QLineEdit();
            stdPr1Deg->setObjectName("stdParDeg");
            stdPr1Deg->setValidator(new QIntValidator(stdPr1Deg));    //CHECK
            stdPr1Deg->setFixedWidth(75);

            //MINUTE
            stdPr1MinLabel = new QLabel();
            stdPr1MinLabel->setText("'");
            stdPr1MinLabel->setObjectName("minLabel");
            stdPr1MinLabel->setFont(labels);

            stdPr1Min = new QLineEdit();
            stdPr1Min->setObjectName("stdParMin");
            stdPr1Min->setValidator(new QIntValidator(stdPr1Min));    //CHECK
            stdPr1Min->setFixedWidth(75);

            //SECOND
            stdPr1SecLabel = new QLabel();
            stdPr1SecLabel->setText("\"");
            stdPr1SecLabel->setObjectName("secLabel");
            stdPr1SecLabel->setFont(labels);

            stdPr1Sec = new QLineEdit();
            stdPr1Sec->setObjectName("stdParSec");
            stdPr1Sec->setValidator(new QIntValidator(stdPr1Sec));    //CHECK
            stdPr1Sec->setFixedWidth(75);

            stdParLay->addWidget(stdPr1Label);
            stdParLay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            stdParLay->addWidget(stdPr1Deg);
            stdParLay->addWidget(stdPr1DegLabel);
            stdParLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            stdParLay->addWidget(stdPr1Min);
            stdParLay->addWidget(stdPr1MinLabel);
            stdParLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            stdParLay->addWidget(stdPr1Sec);
            stdParLay->addWidget(stdPr1SecLabel);
            stdParLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(stdParLay);
            break;
        case STDPR2:
            stdPr2Lay = new QHBoxLayout;

            stdPr2Label = new QLabel();
            stdPr2Label->setText("Latitude of 2nd Standard Parallel");
            stdPr2Label->setToolTip("Latitude of the second standard parallel");
            stdPr2Label->setObjectName("stdParTwo");
            stdPr2Label->setFont(labels);

            rowCount += 1;

            //DEGREE
            stdPr2DegLabel = new QLabel();
            stdPr2DegLabel->setText("�");
            stdPr2DegLabel->setObjectName("degLabel");
            stdPr2DegLabel->setFont(labels);

            stdPr2Deg = new QLineEdit();
            stdPr2Deg->setObjectName("stdPr2Deg");
            stdPr2Deg->setValidator(new QIntValidator(stdPr2Deg));    //CHECK
            stdPr2Deg->setFixedWidth(75);

            //MINUTE
            stdPr2MinLabel = new QLabel();
            stdPr2MinLabel->setText("'");
            stdPr2MinLabel->setObjectName("minLabel");
            stdPr2MinLabel->setFont(labels);

            stdPr2Min = new QLineEdit();
            stdPr2Min->setObjectName("stdPr2Min");
            stdPr2Min->setValidator(new QIntValidator(stdPr2Min));    //CHECK
            stdPr2Min->setFixedWidth(75);

            //SECOND
            stdPr2SecLabel = new QLabel();
            stdPr2SecLabel->setText("\"");
            stdPr2SecLabel->setObjectName("secLabel");
            stdPr2SecLabel->setFont(labels);

            stdPr2Sec = new QLineEdit();
            stdPr2Sec->setObjectName("stdPr2Sec");
            stdPr2Sec->setValidator(new QIntValidator(stdPr2Sec));    //CHECK
            stdPr2Sec->setFixedWidth(75);

            stdPr2Lay->addWidget(stdPr2Label);
            stdPr2Lay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            stdPr2Lay->addWidget(stdPr2Deg);
            stdPr2Lay->addWidget(stdPr2DegLabel);
            stdPr2Lay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            stdPr2Lay->addWidget(stdPr2Min);
            stdPr2Lay->addWidget(stdPr2MinLabel);
            stdPr2Lay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            stdPr2Lay->addWidget(stdPr2Sec);
            stdPr2Lay->addWidget(stdPr2SecLabel);
            stdPr2Lay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(stdPr2Lay);
            break;
        case CENTMER:
            centMerLay = new QHBoxLayout;

            centMerLabel = new QLabel();
            centMerLabel->setText("Longitude of the central meridian");
            centMerLabel->setToolTip("Longitude of the central meridian");
            centMerLabel->setObjectName("centMerLabel");
            centMerLabel->setFont(labels);

            rowCount += 1;

            //DEGREE
            centMerDegLabel = new QLabel();
            centMerDegLabel->setText("�");
            centMerDegLabel->setObjectName("degLabel");
            centMerDegLabel->setFont(labels);

            centMerDeg = new QLineEdit();
            centMerDeg->setObjectName("centMerDeg");
            centMerDeg->setValidator(new QIntValidator(centMerDeg));    //CHECK
            centMerDeg->setFixedWidth(75);

            //MINUTE
            centMerMinLabel = new QLabel();
            centMerMinLabel->setText("'");
            centMerMinLabel->setObjectName("minLabel");
            centMerMinLabel->setFont(labels);

            centMerMin = new QLineEdit();
            centMerMin->setObjectName("centMerMin");
            centMerMin->setValidator(new QIntValidator(centMerMin));    //CHECK
            centMerMin->setFixedWidth(75);

            //SECOND
            centMerSecLabel = new QLabel();
            centMerSecLabel->setText("\"");
            centMerSecLabel->setObjectName("secLabel");
            centMerSecLabel->setFont(labels);

            centMerSec = new QLineEdit();
            centMerSec->setObjectName("centMerSec");
            centMerSec->setValidator(new QIntValidator(centMerSec));    //CHECK
            centMerSec->setFixedWidth(75);

            centMerLay->addWidget(centMerLabel);
            centMerLay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            centMerLay->addWidget(centMerDeg);
            centMerLay->addWidget(centMerDegLabel);
            centMerLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            centMerLay->addWidget(centMerMin);
            centMerLay->addWidget(centMerMinLabel);
            centMerLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            centMerLay->addWidget(centMerSec);
            centMerLay->addWidget(centMerSecLabel);
            centMerLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(centMerLay);
            break;
        case ORIGINLAT:
            originLatLay = new QHBoxLayout;

            originLatLabel = new QLabel();
            originLatLabel->setText("Latitude of the projection origin");
            originLatLabel->setToolTip("Latitude of the projection origin");
            originLatLabel->setObjectName("originLat");
            originLatLabel->setFont(labels);

            rowCount += 1;

            //DEGREE
            originLatDegLabel = new QLabel();
            originLatDegLabel->setText("�");
            originLatDegLabel->setObjectName("degLabel");
            originLatDegLabel->setFont(labels);

            originLatDeg = new QLineEdit();
            originLatDeg->setObjectName("originLatDeg");
            originLatDeg->setValidator(new QIntValidator(originLatDeg));    //CHECK
            originLatDeg->setFixedWidth(75);

            //MINUTE
            originLatMinLabel = new QLabel();
            originLatMinLabel->setText("'");
            originLatMinLabel->setObjectName("minLabel");
            originLatMinLabel->setFont(labels);

            originLatMin = new QLineEdit();
            originLatMin->setObjectName("originLatMin");
            originLatMin->setValidator(new QIntValidator(originLatMin));    //CHECK
            originLatMin->setFixedWidth(75);

            //SECOND
            originLatSecLabel = new QLabel();
            originLatSecLabel->setText("\"");
            originLatSecLabel->setObjectName("secLabel");
            originLatSecLabel->setFont(labels);

            originLatSec = new QLineEdit();
            originLatSec->setObjectName("originLatSec");
            originLatSec->setValidator(new QIntValidator(originLatSec));    //CHECK
            originLatSec->setFixedWidth(75);

            originLatLay->addWidget(originLatLabel);
            originLatLay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            originLatLay->addWidget(originLatDeg);
            originLatLay->addWidget(originLatDegLabel);
            originLatLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            originLatLay->addWidget(originLatMin);
            originLatLay->addWidget(originLatMinLabel);
            originLatLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            originLatLay->addWidget(originLatSec);
            originLatLay->addWidget(originLatSecLabel);
            originLatLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(originLatLay);
            break;
        case FE:
            fELay = new QHBoxLayout;

            fELabel = new QLabel();
            fELabel->setText("False Easting");
            fELabel->setToolTip("False easting in the same units as the semi-major axis");
            fELabel->setObjectName("falseEastingLabel");
            fELabel->setFont(labels);

            fE = new QLineEdit();
            fEValid = new QDoubleValidator(fE);
            fEValid->setNotation(QDoubleValidator::StandardNotation);
            fE->setObjectName("falseEastingValue");
            fE->setValidator(fEValid);
            fE->setFixedWidth(100);

            if (params.at(i+1) != FN){
            fELay->addWidget(fELabel);
            fELay->addWidget(fE);
            fELay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));
            }
            projVLayout->addLayout(fELay);
            break;
        case FN:
            fNLay = new QHBoxLayout;

            fNLabel = new QLabel();
            fNLabel->setText("False Northing");
            fNLabel->setToolTip("False northing in the same units as the semi-major axis");
            fNLabel->setObjectName("falseNorthingLabel");
            fNLabel->setFont(labels);

            fN = new QLineEdit();
            fNValid = new QDoubleValidator(fN);
            fNValid->setNotation(QDoubleValidator::StandardNotation);
            fN->setObjectName("falseNorthingValue");
            fN->setValidator(fNValid);
            fN->setFixedWidth(100);

            if (params.at(i-1) != FE){
            fNLay->addWidget(fNLabel);
            fNLay->addWidget(fN);
            fNLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));
            } else if (params.at(i-1) == FE){
                fNLay->addWidget(fELabel);
                fNLay->addWidget(fE);
                fNLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
                fNLay->addWidget(fNLabel);
                fNLay->addWidget(fN);
                fNLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));
            }
            projVLayout->addLayout(fNLay);
            break;
        case TRUESCALE:
            trueScaleLay = new QHBoxLayout;

            trueScaleLabel = new QLabel();
            trueScaleLabel->setText("True Scale");
            trueScaleLabel->setToolTip("Latitude of true scale");
            trueScaleLabel->setObjectName("trueScaleLabel");
            trueScaleLabel->setFont(labels);

            rowCount += 1;

            //DEGREE
            trueScaleDegLabel = new QLabel();
            trueScaleDegLabel->setText("�");
            trueScaleDegLabel->setObjectName("degLabel");
            trueScaleDegLabel->setFont(labels);

            trueScaleDeg = new QLineEdit();
            trueScaleDeg->setObjectName("trueScaleDeg");
            trueScaleDeg->setValidator(new QIntValidator(trueScaleDeg));    //CHECK
            trueScaleDeg->setFixedWidth(75);

            //MINUTE
            trueScaleMinLabel = new QLabel();
            trueScaleMinLabel->setText("'");
            trueScaleMinLabel->setObjectName("minLabel");
            trueScaleMinLabel->setFont(labels);

            trueScaleMin = new QLineEdit();
            trueScaleMin->setObjectName("trueScaleMin");
            trueScaleMin->setValidator(new QIntValidator(trueScaleMin));    //CHECK
            trueScaleMin->setFixedWidth(75);

            //SECOND
            trueScaleSecLabel = new QLabel();
            trueScaleSecLabel->setText("\"");
            trueScaleSecLabel->setObjectName("secLabel");
            trueScaleSecLabel->setFont(labels);

            trueScaleSec = new QLineEdit();
            trueScaleSec->setObjectName("trueScaleSec");
            trueScaleSec->setValidator(new QIntValidator(trueScaleSec));    //CHECK
            trueScaleSec->setFixedWidth(75);

            trueScaleLay->addWidget(trueScaleLabel);
            trueScaleLay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            trueScaleLay->addWidget(trueScaleDeg);
            trueScaleLay->addWidget(trueScaleDegLabel);
            trueScaleLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            trueScaleLay->addWidget(trueScaleMin);
            trueScaleLay->addWidget(trueScaleMinLabel);
            trueScaleLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            trueScaleLay->addWidget(trueScaleSec);
            trueScaleLay->addWidget(trueScaleSecLabel);
            trueScaleLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(trueScaleLay);
            break;
        case LONGPOL:
            longPolLay = new QHBoxLayout;

            longPolLabel = new QLabel();
            longPolLabel->setText("Longitude down below pole of map");
            longPolLabel->setToolTip("Longitude down below pole of map");
            longPolLabel->setObjectName("longPolLabel");
            longPolLabel->setFont(labels);

            rowCount += 1;

            //DEGREE
            longPolDegLabel = new QLabel();
            longPolDegLabel->setText("�");
            longPolDegLabel->setObjectName("degLabel");
            longPolDegLabel->setFont(labels);

            longPolDeg = new QLineEdit();
            longPolDeg->setObjectName("longPolDeg");
            longPolDeg->setValidator(new QIntValidator(longPolDeg));    //CHECK
            longPolDeg->setFixedWidth(75);

            //MINUTE
            longPolMinLabel = new QLabel();
            longPolMinLabel->setText("'");
            longPolMinLabel->setObjectName("minLabel");
            longPolMinLabel->setFont(labels);

            longPolMin = new QLineEdit();
            longPolMin->setObjectName("longPolMin");
            longPolMin->setValidator(new QIntValidator(longPolMin));    //CHECK
            longPolMin->setFixedWidth(75);

            //SECOND
            longPolSecLabel = new QLabel();
            longPolSecLabel->setText("\"");
            longPolSecLabel->setObjectName("secLabel");
            longPolSecLabel->setFont(labels);

            longPolSec = new QLineEdit();
            longPolSec->setObjectName("longPolSec");
            longPolSec->setValidator(new QIntValidator(longPolSec));    //CHECK
            longPolSec->setFixedWidth(75);

            longPolLay->addWidget(longPolLabel);
            longPolLay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            longPolLay->addWidget(longPolDeg);
            longPolLay->addWidget(longPolDegLabel);
            longPolLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            longPolLay->addWidget(longPolMin);
            longPolLay->addWidget(longPolMinLabel);
            longPolLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            longPolLay->addWidget(longPolSec);
            longPolLay->addWidget(longPolSecLabel);
            longPolLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(longPolLay);
            break;
        case FACTOR:
            factorLay = new QHBoxLayout;

            factorLabel = new QLabel();
            factorLabel->setText("Scale Factor");
            factorLabel->setToolTip("Scale factor at central meridian (Transverse Mercator) or center of projection (Hotine Oblique Mercator)");
            factorLabel->setObjectName("factorLabel");
            factorLabel->setFont(labels);

            factor = new QLineEdit();
            factorValid = new QDoubleValidator(factor);
            factorValid->setNotation(QDoubleValidator::StandardNotation);
            factor->setObjectName("factorValue");
            factor->setValidator(factorValid);
            factor->setFixedWidth(100);

            factorLay->addWidget(factorLabel);
            factorLay->addWidget(factor);
            factorLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(factorLay);
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

            longPolLay = new QHBoxLayout;

            longPolLabel = new QLabel();
            longPolLabel->setText("Longitude down below pole of map");
            longPolLabel->setToolTip("Longitude down below pole of map");
            longPolLabel->setObjectName("longPolLabel");
            longPolLabel->setFont(labels);

            rowCount += 1;

            //DEGREE
            longPolDegLabel = new QLabel();
            longPolDegLabel->setText("�");
            longPolDegLabel->setObjectName("degLabel");
            longPolDegLabel->setFont(labels);

            longPolDeg = new QLineEdit();
            longPolDeg->setObjectName("longPolDeg");
            longPolDeg->setValidator(new QIntValidator(longPolDeg));    //CHECK
            longPolDeg->setFixedWidth(75);

            //MINUTE
            longPolMinLabel = new QLabel();
            longPolMinLabel->setText("'");
            longPolMinLabel->setObjectName("minLabel");
            longPolMinLabel->setFont(labels);

            longPolMin = new QLineEdit();
            longPolMin->setObjectName("longPolMin");
            longPolMin->setValidator(new QIntValidator(longPolMin));    //CHECK
            longPolMin->setFixedWidth(75);

            //SECOND
            longPolSecLabel = new QLabel();
            longPolSecLabel->setText("\"");
            longPolSecLabel->setObjectName("secLabel");
            longPolSecLabel->setFont(labels);

            longPolSec = new QLineEdit();
            longPolSec->setObjectName("longPolSec");
            longPolSec->setValidator(new QIntValidator(longPolSec));    //CHECK
            longPolSec->setFixedWidth(75);

            longPolLay->addWidget(longPolLabel);
            longPolLay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            longPolLay->addWidget(longPolDeg);
            longPolLay->addWidget(longPolDegLabel);
            longPolLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            longPolLay->addWidget(longPolMin);
            longPolLay->addWidget(longPolMinLabel);
            longPolLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            longPolLay->addWidget(longPolSec);
            longPolLay->addWidget(longPolSecLabel);
            longPolLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(longPolLay);
            break;
        case CENTERLAT:
            centLatLay = new QHBoxLayout;

            centerLatLabel = new QLabel();
            centerLatLabel->setText("Latitude of center of projection");
            centerLatLabel->setToolTip("Latitude of center of projection");
            centerLatLabel->setObjectName("centerLatLabel");
            centerLatLabel->setFont(labels);

            rowCount += 1;

            //DEGREE
            centerLatDegLabel = new QLabel();
            centerLatDegLabel->setText("�");
            centerLatDegLabel->setObjectName("degLabel");
            centerLatDegLabel->setFont(labels);

            centerLatDeg = new QLineEdit();
            centerLatDeg->setObjectName("centerLatDeg");
            centerLatDeg->setValidator(new QIntValidator(centerLatDeg));    //CHECK
            centerLatDeg->setFixedWidth(75);

            //MINUTE
            centerLatMinLabel = new QLabel();
            centerLatMinLabel->setText("'");
            centerLatMinLabel->setObjectName("minLabel");
            centerLatMinLabel->setFont(labels);

            centerLatMin = new QLineEdit();
            centerLatMin->setObjectName("centerLatMin");
            centerLatMin->setValidator(new QIntValidator(centerLatMin));    //CHECK
            centerLatMin->setFixedWidth(75);

            //SECOND
            centerLatSecLabel = new QLabel();
            centerLatSecLabel->setText("\"");
            centerLatSecLabel->setObjectName("secLabel");
            centerLatSecLabel->setFont(labels);

            centerLatSec = new QLineEdit();
            centerLatSec->setObjectName("centerLatSec");
            centerLatSec->setValidator(new QIntValidator(centerLatSec));    //CHECK
            centerLatSec->setFixedWidth(75);

            centLatLay->addWidget(centerLatLabel);
            centLatLay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            centLatLay->addWidget(centerLatDeg);
            centLatLay->addWidget(centerLatDegLabel);
            centLatLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            centLatLay->addWidget(centerLatMin);
            centLatLay->addWidget(centerLatMinLabel);
            centLatLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            centLatLay->addWidget(centerLatSec);
            centLatLay->addWidget(centerLatSecLabel);
            centLatLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(centLatLay);
            break;
        case HEIGHT:
            heightLay = new QHBoxLayout;

            heightLabel = new QLabel();
            heightLabel->setText("Height of perspective point");
            heightLabel->setToolTip("Height of perspective point");
            heightLabel->setObjectName("heightLabel");
            heightLabel->setFont(labels);

            height = new QLineEdit();
            heightValid = new QDoubleValidator(height);
            heightValid->setNotation(QDoubleValidator::StandardNotation);
            height->setObjectName("heightValue");
            height->setValidator(heightValid);
            height->setFixedWidth(100);

            heightLay->addWidget(heightLabel);
            heightLay->addWidget(height);
            heightLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(heightLay);
            break;
        case LONG1:
            longOneLay = new QHBoxLayout;

            long1Label = new QLabel();
            long1Label->setText("Longitude of first point on center line");
            long1Label->setToolTip("Longitude of first point on center line");
            long1Label->setObjectName("LonOneLabel");
            long1Label->setFont(labels);

            rowCount += 1;

            //DEGREE
            long1DegLabel = new QLabel();
            long1DegLabel->setText("�");
            long1DegLabel->setObjectName("degLabel");
            long1DegLabel->setFont(labels);

            long1Deg = new QLineEdit();
            long1Deg->setObjectName("long1Deg");
            long1Deg->setValidator(new QIntValidator(long1Deg));    //CHECK
            long1Deg->setFixedWidth(75);

            //MINUTE
            long1MinLabel = new QLabel();
            long1MinLabel->setText("'");
            long1MinLabel->setObjectName("minLabel");
            long1MinLabel->setFont(labels);

            long1Min = new QLineEdit();
            long1Min->setObjectName("long1Min");
            long1Min->setValidator(new QIntValidator(long1Min));    //CHECK
            long1Min->setFixedWidth(75);

            //SECOND
            long1SecLabel = new QLabel();
            long1SecLabel->setText("\"");
            long1SecLabel->setObjectName("secLabel");
            long1SecLabel->setFont(labels);

            long1Sec = new QLineEdit();
            long1Sec->setObjectName("long1Sec");
            long1Sec->setValidator(new QIntValidator(long1Sec));    //CHECK
            long1Sec->setFixedWidth(75);

            longOneLay->addWidget(long1Label);
            longOneLay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            longOneLay->addWidget(long1Deg);
            longOneLay->addWidget(long1DegLabel);
            longOneLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            longOneLay->addWidget(long1Min);
            longOneLay->addWidget(long1MinLabel);
            longOneLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            longOneLay->addWidget(long1Sec);
            longOneLay->addWidget(long1SecLabel);
            longOneLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(longOneLay);
            break;
        case LONG2:
            longTwoLay = new QHBoxLayout;

            long2Label = new QLabel();
            long2Label->setText("Longitude of second point on center line");
            long2Label->setToolTip("Longitude of second point on center line");
            long2Label->setObjectName("LonTwoLabel");
            long2Label->setFont(labels);

            rowCount += 1;

            //DEGREE
            long2DegLabel = new QLabel();
            long2DegLabel->setText("�");
            long2DegLabel->setObjectName("degLabel");
            long2DegLabel->setFont(labels);

            long2Deg = new QLineEdit();
            long2Deg->setObjectName("long2Deg");
            long2Deg->setValidator(new QIntValidator(long2Deg));    //CHECK
            long2Deg->setFixedWidth(75);

            //MINUTE
            long2MinLabel = new QLabel();
            long2MinLabel->setText("'");
            long2MinLabel->setObjectName("minLabel");
            long2MinLabel->setFont(labels);

            long2Min = new QLineEdit();
            long2Min->setObjectName("long2Min");
            long2Min->setValidator(new QIntValidator(long2Min));    //CHECK
            long2Min->setFixedWidth(75);

            //SECOND
            long2SecLabel = new QLabel();
            long2SecLabel->setText("\"");
            long2SecLabel->setObjectName("secLabel");
            long2SecLabel->setFont(labels);

            long2Sec = new QLineEdit();
            long2Sec->setObjectName("long2Sec");
            long2Sec->setValidator(new QIntValidator(long2Sec));    //CHECK
            long2Sec->setFixedWidth(75);

            longTwoLay->addWidget(long2Label);
            longTwoLay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            longTwoLay->addWidget(long2Deg);
            longTwoLay->addWidget(long2DegLabel);
            longTwoLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            longTwoLay->addWidget(long2Min);
            longTwoLay->addWidget(long2MinLabel);
            longTwoLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            longTwoLay->addWidget(long2Sec);
            longTwoLay->addWidget(long2SecLabel);
            longTwoLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(longTwoLay);
            break;
        case LAT1:
            latOneLay = new QHBoxLayout;

            lat1Label = new QLabel();
            lat1Label->setText("Latitude of first point on center line");
            lat1Label->setToolTip("Latitude of first point on center line");
            lat1Label->setObjectName("latOneLabel");
            lat1Label->setFont(labels);

            rowCount += 1;

            //DEGREE
            lat1DegLabel = new QLabel();
            lat1DegLabel->setText("�");
            lat1DegLabel->setObjectName("degLabel");
            lat1DegLabel->setFont(labels);

            lat1Deg = new QLineEdit();
            lat1Deg->setObjectName("lat1Deg");
            lat1Deg->setValidator(new QIntValidator(lat1Deg));    //CHECK
            lat1Deg->setFixedWidth(75);

            //MINUTE
            lat1MinLabel = new QLabel();
            lat1MinLabel->setText("'");
            lat1MinLabel->setObjectName("minLabel");
            lat1MinLabel->setFont(labels);

            lat1Min = new QLineEdit();
            lat1Min->setObjectName("lat1Min");
            lat1Min->setValidator(new QIntValidator(lat1Min));    //CHECK
            lat1Min->setFixedWidth(75);

            //SECOND
            lat1SecLabel = new QLabel();
            lat1SecLabel->setText("\"");
            lat1SecLabel->setObjectName("secLabel");
            lat1SecLabel->setFont(labels);

            lat1Sec = new QLineEdit();
            lat1Sec->setObjectName("lat1Sec");
            lat1Sec->setValidator(new QIntValidator(lat1Sec));    //CHECK
            lat1Sec->setFixedWidth(75);

            latOneLay->addWidget(lat1Label);
            latOneLay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            latOneLay->addWidget(lat1Deg);
            latOneLay->addWidget(lat1DegLabel);
            latOneLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            latOneLay->addWidget(lat1Min);
            latOneLay->addWidget(lat1MinLabel);
            latOneLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            latOneLay->addWidget(lat1Sec);
            latOneLay->addWidget(lat1SecLabel);
            latOneLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(latOneLay);
            break;
        case LAT2:
            latTwoLay = new QHBoxLayout;

            lat2Label = new QLabel();
            lat2Label->setText("Latitude of second point on center line");
            lat2Label->setToolTip("Latitude of second point on center line");
            lat2Label->setObjectName("latTwoLabel");
            lat2Label->setFont(labels);

            rowCount += 1;

            //DEGREE
            lat2DegLabel = new QLabel();
            lat2DegLabel->setText("�");
            lat2DegLabel->setObjectName("degLabel");
            lat2DegLabel->setFont(labels);

            lat2Deg = new QLineEdit();
            lat2Deg->setObjectName("lat2Deg");
            lat2Deg->setValidator(new QIntValidator(lat2Deg));    //CHECK
            lat2Deg->setFixedWidth(75);

            //MINUTE
            lat2MinLabel = new QLabel();
            lat2MinLabel->setText("'");
            lat2MinLabel->setObjectName("minLabel");
            lat2MinLabel->setFont(labels);

            lat2Min = new QLineEdit();
            lat2Min->setObjectName("lat2Min");
            lat2Min->setValidator(new QIntValidator(lat2Min));    //CHECK
            lat2Min->setFixedWidth(75);

            //SECOND
            lat2SecLabel = new QLabel();
            lat2SecLabel->setText("\"");
            lat2SecLabel->setObjectName("secLabel");
            lat2SecLabel->setFont(labels);

            lat2Sec = new QLineEdit();
            lat2Sec->setObjectName("lat2Sec");
            lat2Sec->setValidator(new QIntValidator(lat2Sec));    //CHECK
            lat2Sec->setFixedWidth(75);

            latTwoLay->addWidget(lat2Label);
            latTwoLay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            latTwoLay->addWidget(lat2Deg);
            latTwoLay->addWidget(lat2DegLabel);
            latTwoLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            latTwoLay->addWidget(lat2Min);
            latTwoLay->addWidget(lat2MinLabel);
            latTwoLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            latTwoLay->addWidget(lat2Sec);
            latTwoLay->addWidget(lat2SecLabel);
            latTwoLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(latTwoLay);
            break;
        case AZIANG:
            aziAngLay = new QHBoxLayout;

            aziAngLabel = new QLabel();
            aziAngLabel->setText("Azimuth angle east of north of center line");
            aziAngLabel->setToolTip("Azimuth angle east of north of center line");
            aziAngLabel->setObjectName("aziAngLabel");
            aziAngLabel->setFont(labels);

            rowCount += 1;

            //DEGREE
            aziAngDegLabel = new QLabel();
            aziAngDegLabel->setText("�");
            aziAngDegLabel->setObjectName("degLabel");
            aziAngDegLabel->setFont(labels);

            aziAngDeg = new QLineEdit();
            aziAngDeg->setObjectName("aziAngDeg");
            aziAngDeg->setValidator(new QIntValidator(aziAngDeg));    //CHECK
            aziAngDeg->setFixedWidth(75);

            //MINUTE
            aziAngMinLabel = new QLabel();
            aziAngMinLabel->setText("'");
            aziAngMinLabel->setObjectName("minLabel");
            aziAngMinLabel->setFont(labels);

            aziAngMin = new QLineEdit();
            aziAngMin->setObjectName("aziAngMin");
            aziAngMin->setValidator(new QIntValidator(aziAngMin));    //CHECK
            aziAngMin->setFixedWidth(75);

            //SECOND
            aziAngSecLabel = new QLabel();
            aziAngSecLabel->setText("\"");
            aziAngSecLabel->setObjectName("secLabel");
            aziAngSecLabel->setFont(labels);

            aziAngSec = new QLineEdit();
            aziAngSec->setObjectName("aziAngSec");
            aziAngSec->setValidator(new QIntValidator(aziAngSec));    //CHECK
            aziAngSec->setFixedWidth(75);

            aziAngLay->addWidget(aziAngLabel);
            aziAngLay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            aziAngLay->addWidget(aziAngDeg);
            aziAngLay->addWidget(aziAngDegLabel);
            aziAngLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            aziAngLay->addWidget(aziAngMin);
            aziAngLay->addWidget(aziAngMinLabel);
            aziAngLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            aziAngLay->addWidget(aziAngSec);
            aziAngLay->addWidget(aziAngSecLabel);
            aziAngLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(aziAngLay);
            break;
        case AZMTHPT:
            azmthPtLay = new QHBoxLayout;

            azmthPtLabel = new QLabel();
            azmthPtLabel->setText("Longitude of point on central meridian where azimuth occurs");
            azmthPtLabel->setToolTip("Longitude of point on central meridian where azimuth occurs");
            azmthPtLabel->setObjectName("AzmthPtLabel");
            azmthPtLabel->setFont(labels);

            rowCount += 1;

            //DEGREE
            azmthPtDegLabel = new QLabel();
            azmthPtDegLabel->setText("�");
            azmthPtDegLabel->setObjectName("degLabel");
            azmthPtDegLabel->setFont(labels);

            azmthPtDeg = new QLineEdit();
            azmthPtDeg->setObjectName("azmthPtDeg");
            azmthPtDeg->setValidator(new QIntValidator(azmthPtDeg));    //CHECK
            azmthPtDeg->setFixedWidth(75);

            //MINUTE
            azmthPtMinLabel = new QLabel();
            azmthPtMinLabel->setText("'");
            azmthPtMinLabel->setObjectName("minLabel");
            azmthPtMinLabel->setFont(labels);

            azmthPtMin = new QLineEdit();
            azmthPtMin->setObjectName("azmthPtMin");
            azmthPtMin->setValidator(new QIntValidator(azmthPtMin));    //CHECK
            azmthPtMin->setFixedWidth(75);

            //SECOND
            azmthPtSecLabel = new QLabel();
            azmthPtSecLabel->setText("\"");
            azmthPtSecLabel->setObjectName("secLabel");
            azmthPtSecLabel->setFont(labels);

            azmthPtSec = new QLineEdit();
            azmthPtSec->setObjectName("azmthPtSec");
            azmthPtSec->setValidator(new QIntValidator(azmthPtSec));    //CHECK
            azmthPtSec->setFixedWidth(75);

            azmthPtLay->addWidget(azmthPtLabel);
            azmthPtLay->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            azmthPtLay->addWidget(azmthPtDeg);
            azmthPtLay->addWidget(azmthPtDegLabel);
            azmthPtLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            azmthPtLay->addWidget(azmthPtMin);
            azmthPtLay->addWidget(azmthPtMinLabel);
            azmthPtLay->addSpacerItem(new QSpacerItem(10,0,QSizePolicy::Minimum,QSizePolicy::Preferred ));
            azmthPtLay->addWidget(azmthPtSec);
            azmthPtLay->addWidget(azmthPtSecLabel);
            azmthPtLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(azmthPtLay);
            break;
        case INCANG:
            break;
        case ASCLONG:
            break;
        case PSREV:
            psRevLay = new QHBoxLayout;

            psRevLabel = new QLabel();
            psRevLabel->setText("Period of satellite revolution in minutes");
            psRevLabel->setToolTip("Period of satellite revolution in minutes");
            psRevLabel->setObjectName("psRevLabel");
            psRevLabel->setFont(labels);

            psRev = new QLineEdit();
            psRevValid = new QDoubleValidator(psRev);
            psRevValid->setNotation(QDoubleValidator::StandardNotation);
            psRev->setObjectName("psRevValue");
            psRev->setValidator(psRevValid);
            psRev->setFixedWidth(100);


            break;
        case LRAT:
            lRatLay = new QHBoxLayout;

            lRatLabel = new QLabel();
            lRatLabel->setText("Landsat ratio to compensate for confusion at northern end of orbit");
            lRatLabel->setToolTip("Landsat ratio to compensate for confusion at northern end of orbit");
            lRatLabel->setObjectName("lRatLabel");
            lRatLabel->setFont(labels);

            lRat = new QLineEdit();
            lRatValid = new QDoubleValidator(lRat);
            lRatValid->setNotation(QDoubleValidator::StandardNotation);
            lRat->setObjectName("lRatValue");
            lRat->setValidator(lRatValid);

            lRatLay->addWidget(lRatLabel);
            lRatLay->addWidget(lRat);
            lRatLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(lRatLay);
            break;
        case PFLAG:
            pFlagLay = new QHBoxLayout;

            pFlagLabel = new QLabel();
            pFlagLabel->setText("End of path flag for Landsat");
            pFlagLabel->setToolTip("End of path flag for Landsat:  0 = start of path, 1 = end of path");
            pFlagLabel->setObjectName("pFlagLabel");
            pFlagLabel->setFont(labels);

            pFlag = new QLineEdit();
            pFlag->setObjectName("pFlagValue");
            pFlag->setValidator(new QIntValidator(0,1,pFlag));

            pFlagLay->addWidget(pFlagLabel);
            pFlagLay->addWidget(pFlag);
            pFlagLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(pFlagLay);
            break;
        case SATNUM:
            satNumLay = new QHBoxLayout;

            satNumLabel = new QLabel();
            satNumLabel->setText("Landsat Satellite Number");
            satNumLabel->setToolTip("Landsat Satellite Number");
            satNumLabel->setObjectName("satNumLabel");
            satNumLabel->setFont(labels);

            satNum = new QLineEdit();
            satNum->setObjectName("satNumValue");
            satNum->setValidator(new QIntValidator(1,7,satNum));

            satNumLay->addWidget(satNumLabel);
            satNumLay->addWidget(satNum);
            satNumLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(satNumLay);
            break;
        case PATH:
            pathLay = new QHBoxLayout;

            pathLabel = new QLabel();
            pathLabel->setText("Landsat Path Number");
            pathLabel->setToolTip("Landsat Path Number (Use WRS-1 for Landsat 1, 2 and 3 and WRS-2 for Landsat 4, 5 and 6.)");
            pathLabel->setObjectName("pathLabel");
            pathLabel->setFont(labels);

            path = new QLineEdit();
            path->setObjectName("pathValue");
            path->setValidator(new QIntValidator(1,233,path));

            pathLay->addWidget(pathLabel);
            pathLay->addWidget(path);
            pathLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(pathLay);;
            break;
        case SHAPEM:
            shapeMLay = new QHBoxLayout;

            shapeMLabel = new QLabel();
            shapeMLabel->setText("Oblated Equal Area oval shape parameter m");
            shapeMLabel->setToolTip("Oblated Equal Area oval shape parameter m");
            shapeMLabel->setObjectName("mShapeLabel");

            shapeM = new QLineEdit();
            shapeMValid = new QDoubleValidator(shapeM);
            shapeMValid->setNotation(QDoubleValidator::StandardNotation);
            shapeM->setObjectName("mShapeValue");
            shapeM->setValidator(shapeMValid);

            shapeMLay->addWidget(shapeMLabel);
            shapeMLay->addWidget(shapeM);
            shapeMLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(shapeMLay);
            break;
        case SHAPEN:
            shapeNLay = new QHBoxLayout;

            shapeNLabel = new QLabel();
            shapeNLabel->setText("Oblated Equal Area oval shape parameter n");
            shapeNLabel->setToolTip("Oblated Equal Area oval shape parameter n");
            shapeNLabel->setObjectName("nShapeLabel");
            shapeNLabel->setFont(labels);

            shapeN = new QLineEdit();
            shapeNValid = new QDoubleValidator(shapeN);
            shapeNValid->setNotation(QDoubleValidator::StandardNotation);
            shapeN->setObjectName("nShapeValue");
            shapeN->setValidator(shapeNValid);

            shapeNLay->addWidget(shapeNLabel);
            shapeNLay->addWidget(shapeN);
            shapeNLay->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Preferred ));

            projVLayout->addLayout(shapeNLay);
            break;
        case ANGLE:
            break;
        default:
            std::cout << "ERROR: " << i << std::endl;
            error = 1;
            break;
        }
        projVLayout->addSpacerItem(new QSpacerItem(0,7,QSizePolicy::Preferred, QSizePolicy::Preferred));
        rowCount++;
    }
    projVLayout->addSpacerItem(new QSpacerItem(0,0,QSizePolicy::Preferred, QSizePolicy::Expanding));
    return error;
}
