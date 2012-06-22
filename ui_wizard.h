/********************************************************************************
** Form generated from reading UI file 'wizard.ui'
**
** Created: Fri Jun 22 11:54:35 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZARD_H
#define UI_WIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Wizard
{
public:
    QAction *actionOpen;
    QAction *actionSave_Reprojection;
    QAction *actionSelection_Screen;
    QAction *actionExit;
    QAction *actionLoad_Projection_Info;
    QAction *actionSave_Projection_Info;
    QAction *actionToggle_Preview;
    QAction *actionEdit_Author;
    QAction *actionUser_Guide;
    QAction *actionAbout_dRasterBlaster;
    QAction *actionAbout_Qt;
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *controlLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnBack;
    QPushButton *btnCancel;
    QPushButton *btnNext;
    QStackedWidget *mainWidget;
    QWidget *WelcomeScreen;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *welcomeTextLayout;
    QLabel *Header;
    QLabel *subHeader;
    QSpacerItem *verticalSpacer;
    QLabel *basicInstruction;
    QFrame *frame;
    QLabel *magicHat;
    QWidget *OpenRaster;
    QFrame *openRasterHeading;
    QLabel *pageTitle;
    QLabel *simpleDescription;
    QLabel *smallMagicHat;
    QLabel *detailedDescription;
    QGroupBox *selectFile;
    QTreeView *dirView;
    QListView *fileView;
    QFrame *verticalLine;
    QListWidget *navigationMenu;
    QWidget *EditInput;
    QFrame *EditInputOptionsHeading;
    QLabel *labelPageTitle_2;
    QLabel *simpleDescription_2;
    QLabel *smallMagicHat_2;
    QListWidget *listPages_2;
    QFrame *line_2;
    QLabel *label_13;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLineEdit *Rows;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QLineEdit *Cols;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *hLayoutSheroid_2;
    QLabel *labelSheroid_2;
    QComboBox *sheroid;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QLineEdit *pixelSize;
    QComboBox *pixelUnits;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelPixelType_2;
    QComboBox *pixelType;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelULlat_2;
    QLineEdit *Latitude;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelULlat_3;
    QLineEdit *Longitude;
    QWidget *horizontalLayoutWidget_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelFillValue_2;
    QCheckBox *fillEnable;
    QLineEdit *FillValue;
    QWidget *horizontalLayoutWidget_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelNoDataValue_2;
    QCheckBox *noDataValueEnable;
    QLineEdit *noDataValue;
    QWidget *horizontalLayoutWidget_12;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelNoDataValue_3;
    QLineEdit *bandCount;
    QWidget *EditInputProj;
    QFrame *Heading_7;
    QLabel *labelPageTitle_7;
    QLabel *labelPageDesc_7;
    QLabel *label_15;
    QListWidget *listPages_7;
    QFrame *line_7;
    QStackedWidget *inputProjection;
    QWidget *GEO;
    QWidget *_UTM;
    QWidget *SPCS;
    QWidget *ALBERS;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_16;
    QLineEdit *ALBERS_SMajor;
    QSpacerItem *horizontalSpacer_2;
    QWidget *horizontalLayoutWidget_14;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_17;
    QLineEdit *ALBERS_SMinor;
    QSpacerItem *horizontalSpacer_3;
    QWidget *horizontalLayoutWidget_15;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_22;
    QLineEdit *ALBERS_STDPR1;
    QSpacerItem *horizontalSpacer_4;
    QWidget *horizontalLayoutWidget_16;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_23;
    QLineEdit *ALBERS_STDPR2;
    QSpacerItem *horizontalSpacer_5;
    QWidget *horizontalLayoutWidget_17;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_24;
    QLineEdit *ALBERS_CENTMER;
    QSpacerItem *horizontalSpacer_6;
    QWidget *horizontalLayoutWidget_18;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_25;
    QLineEdit *ALBERS_ORIGIN;
    QSpacerItem *horizontalSpacer_7;
    QWidget *horizontalLayoutWidget_19;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_26;
    QLineEdit *ALBERS_FE;
    QSpacerItem *horizontalSpacer_8;
    QWidget *horizontalLayoutWidget_20;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_27;
    QLineEdit *ALBERS_FN;
    QSpacerItem *horizontalSpacer_9;
    QWidget *LAMCC;
    QWidget *MERCAT;
    QWidget *PS;
    QWidget *POLYC;
    QWidget *EQUIDC;
    QWidget *TM;
    QWidget *STEREO;
    QWidget *LAMAZ;
    QWidget *AZMEQD;
    QWidget *GNOMON;
    QWidget *ORTHO;
    QWidget *GVNSP;
    QWidget *SNSOID;
    QWidget *EQRECT;
    QWidget *MILLER;
    QWidget *VGRINT;
    QWidget *HOM;
    QWidget *ROBIN;
    QWidget *SOM;
    QWidget *ALASKA;
    QWidget *GOOD;
    QWidget *MOLL;
    QWidget *IMOLL;
    QWidget *HAMMER;
    QWidget *WAGIV;
    QWidget *WAGVII;
    QWidget *OBEQA;
    QWidget *USRDEF;
    QFrame *line_8;
    QWidget *horizontalLayoutWidget_21;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_28;
    QComboBox *inputProjectionBox;
    QSpacerItem *horizontalSpacer_11;
    QWidget *SelectOutputOptions;
    QFrame *line_3;
    QListWidget *listPages_3;
    QFrame *Heading_3;
    QLabel *labelPageTitle_3;
    QLabel *labelPageDesc_3;
    QLabel *label_7;
    QWidget *horizontalLayoutWidget_43;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_57;
    QLineEdit *outRows;
    QWidget *horizontalLayoutWidget_44;
    QHBoxLayout *horizontalLayout_42;
    QLabel *labelPixelType_4;
    QComboBox *outPixelType;
    QWidget *horizontalLayoutWidget_45;
    QHBoxLayout *horizontalLayout_43;
    QLabel *labelNoDataValue_6;
    QLineEdit *outBandCount;
    QWidget *horizontalLayoutWidget_46;
    QHBoxLayout *horizontalLayout_44;
    QLabel *labelULlat_6;
    QLineEdit *outLatitude;
    QWidget *horizontalLayoutWidget_47;
    QHBoxLayout *horizontalLayout_45;
    QLabel *labelFillValue_4;
    QCheckBox *outfillEnable;
    QLineEdit *outFillValue;
    QWidget *horizontalLayoutWidget_48;
    QHBoxLayout *horizontalLayout_46;
    QLabel *labelNoDataValue_7;
    QCheckBox *outNoDataValueEnable;
    QLineEdit *outNoDataValue;
    QWidget *horizontalLayoutWidget_49;
    QHBoxLayout *horizontalLayout_47;
    QLabel *labelULlat_7;
    QLineEdit *outLongitude;
    QWidget *horizontalLayoutWidget_50;
    QHBoxLayout *horizontalLayout_48;
    QLabel *label_58;
    QLineEdit *outPixelSize;
    QComboBox *outPixelUnits;
    QWidget *horizontalLayoutWidget_51;
    QHBoxLayout *hLayoutSheroid_4;
    QLabel *labelSheroid_4;
    QComboBox *outSheroid;
    QWidget *horizontalLayoutWidget_52;
    QHBoxLayout *horizontalLayout_49;
    QLabel *label_59;
    QLineEdit *outCols;
    QLabel *label_49;
    QWidget *outputProjections;
    QStackedWidget *outputProjection;
    QWidget *GEO_3;
    QWidget *_UTM_3;
    QWidget *SPCS_3;
    QWidget *ALBERS_3;
    QWidget *horizontalLayoutWidget_30;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_39;
    QLineEdit *ALBERS_SMajor_3;
    QSpacerItem *horizontalSpacer_22;
    QWidget *horizontalLayoutWidget_31;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_40;
    QLineEdit *ALBERS_SMinor_3;
    QSpacerItem *horizontalSpacer_23;
    QWidget *horizontalLayoutWidget_32;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_41;
    QLineEdit *ALBERS_STDPR1_3;
    QSpacerItem *horizontalSpacer_24;
    QWidget *horizontalLayoutWidget_33;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_42;
    QLineEdit *ALBERS_STDPR2_3;
    QSpacerItem *horizontalSpacer_25;
    QWidget *horizontalLayoutWidget_34;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_43;
    QLineEdit *ALBERS_CENTMER_3;
    QSpacerItem *horizontalSpacer_26;
    QWidget *horizontalLayoutWidget_35;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_44;
    QLineEdit *ALBERS_ORIGIN_3;
    QSpacerItem *horizontalSpacer_27;
    QWidget *horizontalLayoutWidget_36;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_45;
    QLineEdit *ALBERS_FE_3;
    QSpacerItem *horizontalSpacer_28;
    QWidget *horizontalLayoutWidget_37;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_46;
    QLineEdit *ALBERS_FN_3;
    QSpacerItem *horizontalSpacer_29;
    QWidget *LAMCC_3;
    QWidget *MERCAT_3;
    QWidget *PS_3;
    QWidget *POLYC_3;
    QWidget *EQUIDC_3;
    QWidget *TM_3;
    QWidget *STEREO_3;
    QWidget *LAMAZ_3;
    QWidget *AZMEQD_3;
    QWidget *GNOMON_3;
    QWidget *ORTHO_3;
    QWidget *GVNSP_3;
    QWidget *SNSOID_3;
    QWidget *EQRECT_3;
    QWidget *MILLER_3;
    QWidget *VGRINT_3;
    QWidget *HOM_3;
    QWidget *ROBIN_3;
    QWidget *SOM_3;
    QWidget *ALASKA_3;
    QWidget *GOOD_3;
    QWidget *MOLL_3;
    QWidget *IMOLL_3;
    QWidget *HAMMER_3;
    QWidget *horizontalLayoutWidget_39;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_50;
    QLineEdit *ALBERS_SMajor_4;
    QSpacerItem *horizontalSpacer_32;
    QWidget *horizontalLayoutWidget_40;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_51;
    QLineEdit *ALBERS_SMajor_5;
    QSpacerItem *horizontalSpacer_33;
    QWidget *horizontalLayoutWidget_41;
    QHBoxLayout *horizontalLayout_50;
    QLabel *label_52;
    QLineEdit *ALBERS_SMajor_6;
    QSpacerItem *horizontalSpacer_34;
    QWidget *horizontalLayoutWidget_42;
    QHBoxLayout *horizontalLayout_51;
    QLabel *label_53;
    QLineEdit *ALBERS_SMajor_7;
    QSpacerItem *horizontalSpacer_35;
    QWidget *WAGIV_3;
    QWidget *WAGVII_3;
    QWidget *OBEQA_3;
    QWidget *USRDEF_3;
    QFrame *line_9;
    QFrame *line_10;
    QWidget *horizontalLayoutWidget_38;
    QHBoxLayout *horizontalLayout_38;
    QSpacerItem *horizontalSpacer_30;
    QLabel *label_47;
    QComboBox *outProjectionBox;
    QSpacerItem *horizontalSpacer_31;
    QListWidget *listPages_8;
    QFrame *Heading_8;
    QLabel *labelPageTitle_9;
    QLabel *labelPageDesc_9;
    QLabel *label_48;
    QWidget *PreviewOutput;
    QFrame *Heading_4;
    QLabel *labelPageTitle_4;
    QLabel *labelPageDesc_4;
    QLabel *label_8;
    QListWidget *listPages_4;
    QFrame *line_4;
    QWidget *ReprojectSave;
    QFrame *Heading_5;
    QLabel *labelPageTitle_5;
    QLabel *labelPageDesc_5;
    QLabel *label_9;
    QListWidget *listPages_5;
    QFrame *line_5;
    QGroupBox *groupBox_2;
    QTreeView *dirView_2;
    QLabel *label_18;
    QWidget *Finish;
    QFrame *Heading_6;
    QLabel *labelPageTitle_6;
    QLabel *labelPageDesc_6;
    QLabel *label_10;
    QListWidget *listPages_6;
    QFrame *line_6;
    QLabel *label_19;
    QWidget *horizontalLayoutWidget_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_20;
    QLabel *label_21;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOptions;
    QMenu *menuHelp;

    void setupUi(QMainWindow *Wizard)
    {
        if (Wizard->objectName().isEmpty())
            Wizard->setObjectName(QString::fromUtf8("Wizard"));
        Wizard->resize(640, 480);
        actionOpen = new QAction(Wizard);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/document-open-516.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave_Reprojection = new QAction(Wizard);
        actionSave_Reprojection->setObjectName(QString::fromUtf8("actionSave_Reprojection"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/document-save-516.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Reprojection->setIcon(icon1);
        actionSelection_Screen = new QAction(Wizard);
        actionSelection_Screen->setObjectName(QString::fromUtf8("actionSelection_Screen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/mail-mark-task.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelection_Screen->setIcon(icon2);
        actionExit = new QAction(Wizard);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/document-close-316.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionLoad_Projection_Info = new QAction(Wizard);
        actionLoad_Projection_Info->setObjectName(QString::fromUtf8("actionLoad_Projection_Info"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/svn-commit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad_Projection_Info->setIcon(icon4);
        actionSave_Projection_Info = new QAction(Wizard);
        actionSave_Projection_Info->setObjectName(QString::fromUtf8("actionSave_Projection_Info"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Images/svn-update.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Projection_Info->setIcon(icon5);
        actionToggle_Preview = new QAction(Wizard);
        actionToggle_Preview->setObjectName(QString::fromUtf8("actionToggle_Preview"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Images/system-search-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggle_Preview->setIcon(icon6);
        actionEdit_Author = new QAction(Wizard);
        actionEdit_Author->setObjectName(QString::fromUtf8("actionEdit_Author"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Images/configure-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_Author->setIcon(icon7);
        actionUser_Guide = new QAction(Wizard);
        actionUser_Guide->setObjectName(QString::fromUtf8("actionUser_Guide"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Images/documentation.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUser_Guide->setIcon(icon8);
        actionAbout_dRasterBlaster = new QAction(Wizard);
        actionAbout_dRasterBlaster->setObjectName(QString::fromUtf8("actionAbout_dRasterBlaster"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Images/icon_16x16x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_dRasterBlaster->setIcon(icon9);
        actionAbout_Qt = new QAction(Wizard);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Images/qt-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Qt->setIcon(icon10);
        centralWidget = new QWidget(Wizard);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 419, 631, 41));
        controlLayout = new QHBoxLayout(horizontalLayoutWidget);
        controlLayout->setObjectName(QString::fromUtf8("controlLayout"));
        controlLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        controlLayout->addItem(horizontalSpacer);

        btnBack = new QPushButton(horizontalLayoutWidget);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setEnabled(false);
        QFont font;
        font.setPointSize(10);
        btnBack->setFont(font);

        controlLayout->addWidget(btnBack);

        btnCancel = new QPushButton(horizontalLayoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setFont(font);

        controlLayout->addWidget(btnCancel);

        btnNext = new QPushButton(horizontalLayoutWidget);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setFont(font);

        controlLayout->addWidget(btnNext);

        mainWidget = new QStackedWidget(centralWidget);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        mainWidget->setGeometry(QRect(0, -1, 642, 421));
        mainWidget->setStyleSheet(QString::fromUtf8(""));
        mainWidget->setFrameShape(QFrame::Box);
        WelcomeScreen = new QWidget();
        WelcomeScreen->setObjectName(QString::fromUtf8("WelcomeScreen"));
        verticalLayoutWidget = new QWidget(WelcomeScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 10, 381, 401));
        welcomeTextLayout = new QVBoxLayout(verticalLayoutWidget);
        welcomeTextLayout->setObjectName(QString::fromUtf8("welcomeTextLayout"));
        welcomeTextLayout->setContentsMargins(0, 0, 0, 0);
        Header = new QLabel(verticalLayoutWidget);
        Header->setObjectName(QString::fromUtf8("Header"));
        QFont font1;
        font1.setPointSize(32);
        font1.setBold(true);
        font1.setWeight(75);
        Header->setFont(font1);
        Header->setWordWrap(true);

        welcomeTextLayout->addWidget(Header);

        subHeader = new QLabel(verticalLayoutWidget);
        subHeader->setObjectName(QString::fromUtf8("subHeader"));
        QFont font2;
        font2.setPointSize(14);
        subHeader->setFont(font2);
        subHeader->setWordWrap(true);

        welcomeTextLayout->addWidget(subHeader);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        welcomeTextLayout->addItem(verticalSpacer);

        basicInstruction = new QLabel(verticalLayoutWidget);
        basicInstruction->setObjectName(QString::fromUtf8("basicInstruction"));
        basicInstruction->setFont(font);

        welcomeTextLayout->addWidget(basicInstruction);

        frame = new QFrame(WelcomeScreen);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 641, 421));
        frame->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        magicHat = new QLabel(frame);
        magicHat->setObjectName(QString::fromUtf8("magicHat"));
        magicHat->setGeometry(QRect(0, 30, 261, 381));
        magicHat->setPixmap(QPixmap(QString::fromUtf8(":/Images/tools-wizard256.png")));
        mainWidget->addWidget(WelcomeScreen);
        frame->raise();
        verticalLayoutWidget->raise();
        OpenRaster = new QWidget();
        OpenRaster->setObjectName(QString::fromUtf8("OpenRaster"));
        openRasterHeading = new QFrame(OpenRaster);
        openRasterHeading->setObjectName(QString::fromUtf8("openRasterHeading"));
        openRasterHeading->setGeometry(QRect(-1, -1, 642, 61));
        openRasterHeading->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        openRasterHeading->setFrameShape(QFrame::Box);
        openRasterHeading->setFrameShadow(QFrame::Plain);
        pageTitle = new QLabel(openRasterHeading);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(80, 10, 171, 20));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        pageTitle->setFont(font3);
        simpleDescription = new QLabel(openRasterHeading);
        simpleDescription->setObjectName(QString::fromUtf8("simpleDescription"));
        simpleDescription->setGeometry(QRect(100, 30, 301, 21));
        simpleDescription->setFont(font);
        simpleDescription->setWordWrap(true);
        smallMagicHat = new QLabel(openRasterHeading);
        smallMagicHat->setObjectName(QString::fromUtf8("smallMagicHat"));
        smallMagicHat->setGeometry(QRect(20, 10, 46, 41));
        smallMagicHat->setPixmap(QPixmap(QString::fromUtf8(":/Images/tools-wizard256.png")));
        smallMagicHat->setScaledContents(true);
        detailedDescription = new QLabel(OpenRaster);
        detailedDescription->setObjectName(QString::fromUtf8("detailedDescription"));
        detailedDescription->setGeometry(QRect(190, 70, 421, 41));
        detailedDescription->setFont(font);
        detailedDescription->setWordWrap(true);
        selectFile = new QGroupBox(OpenRaster);
        selectFile->setObjectName(QString::fromUtf8("selectFile"));
        selectFile->setGeometry(QRect(180, 120, 441, 271));
        selectFile->setFont(font);
        dirView = new QTreeView(selectFile);
        dirView->setObjectName(QString::fromUtf8("dirView"));
        dirView->setGeometry(QRect(10, 20, 221, 241));
        dirView->header()->setVisible(false);
        dirView->header()->setDefaultSectionSize(200);
        fileView = new QListView(selectFile);
        fileView->setObjectName(QString::fromUtf8("fileView"));
        fileView->setGeometry(QRect(240, 20, 191, 241));
        verticalLine = new QFrame(OpenRaster);
        verticalLine->setObjectName(QString::fromUtf8("verticalLine"));
        verticalLine->setGeometry(QRect(150, 70, 20, 341));
        verticalLine->setFrameShape(QFrame::VLine);
        verticalLine->setFrameShadow(QFrame::Sunken);
        navigationMenu = new QListWidget(OpenRaster);
        new QListWidgetItem(navigationMenu);
        new QListWidgetItem(navigationMenu);
        new QListWidgetItem(navigationMenu);
        new QListWidgetItem(navigationMenu);
        new QListWidgetItem(navigationMenu);
        new QListWidgetItem(navigationMenu);
        new QListWidgetItem(navigationMenu);
        new QListWidgetItem(navigationMenu);
        new QListWidgetItem(navigationMenu);
        new QListWidgetItem(navigationMenu);
        navigationMenu->setObjectName(QString::fromUtf8("navigationMenu"));
        navigationMenu->setEnabled(false);
        navigationMenu->setGeometry(QRect(10, 70, 151, 341));
        navigationMenu->setFont(font);
        navigationMenu->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QListWidget::item:selected, QListWidget::item:selected:active{\n"
"	background-color: rgba(71, 175, 255, 128);\n"
"	border: 1px solid rgba(71, 175, 255, 128);\n"
"}\n"
""));
        navigationMenu->setFrameShape(QFrame::NoFrame);
        navigationMenu->setFrameShadow(QFrame::Plain);
        navigationMenu->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        navigationMenu->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        navigationMenu->setAutoScroll(false);
        navigationMenu->setEditTriggers(QAbstractItemView::NoEditTriggers);
        navigationMenu->setProperty("showDropIndicator", QVariant(false));
        navigationMenu->setAlternatingRowColors(false);
        navigationMenu->setSelectionBehavior(QAbstractItemView::SelectRows);
        navigationMenu->setSpacing(6);
        navigationMenu->setUniformItemSizes(true);
        navigationMenu->setSelectionRectVisible(true);
        mainWidget->addWidget(OpenRaster);
        EditInput = new QWidget();
        EditInput->setObjectName(QString::fromUtf8("EditInput"));
        EditInputOptionsHeading = new QFrame(EditInput);
        EditInputOptionsHeading->setObjectName(QString::fromUtf8("EditInputOptionsHeading"));
        EditInputOptionsHeading->setGeometry(QRect(-1, -1, 642, 61));
        EditInputOptionsHeading->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        EditInputOptionsHeading->setFrameShape(QFrame::Box);
        EditInputOptionsHeading->setFrameShadow(QFrame::Plain);
        labelPageTitle_2 = new QLabel(EditInputOptionsHeading);
        labelPageTitle_2->setObjectName(QString::fromUtf8("labelPageTitle_2"));
        labelPageTitle_2->setGeometry(QRect(80, 10, 171, 20));
        labelPageTitle_2->setFont(font3);
        simpleDescription_2 = new QLabel(EditInputOptionsHeading);
        simpleDescription_2->setObjectName(QString::fromUtf8("simpleDescription_2"));
        simpleDescription_2->setGeometry(QRect(100, 30, 471, 21));
        simpleDescription_2->setFont(font);
        simpleDescription_2->setWordWrap(true);
        smallMagicHat_2 = new QLabel(EditInputOptionsHeading);
        smallMagicHat_2->setObjectName(QString::fromUtf8("smallMagicHat_2"));
        smallMagicHat_2->setGeometry(QRect(20, 10, 46, 41));
        smallMagicHat_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/tools-wizard256.png")));
        smallMagicHat_2->setScaledContents(true);
        listPages_2 = new QListWidget(EditInput);
        new QListWidgetItem(listPages_2);
        new QListWidgetItem(listPages_2);
        new QListWidgetItem(listPages_2);
        new QListWidgetItem(listPages_2);
        new QListWidgetItem(listPages_2);
        new QListWidgetItem(listPages_2);
        new QListWidgetItem(listPages_2);
        new QListWidgetItem(listPages_2);
        new QListWidgetItem(listPages_2);
        new QListWidgetItem(listPages_2);
        listPages_2->setObjectName(QString::fromUtf8("listPages_2"));
        listPages_2->setEnabled(false);
        listPages_2->setGeometry(QRect(10, 70, 151, 341));
        listPages_2->setFont(font);
        listPages_2->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QListWidget::item:selected, QListWidget::item:selected:active{\n"
"	background-color: rgba(71, 175, 255, 128);\n"
"	border: 1px solid rgba(71, 175, 255, 128);\n"
"}\n"
""));
        listPages_2->setFrameShape(QFrame::NoFrame);
        listPages_2->setFrameShadow(QFrame::Plain);
        listPages_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages_2->setAutoScroll(false);
        listPages_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listPages_2->setProperty("showDropIndicator", QVariant(false));
        listPages_2->setAlternatingRowColors(false);
        listPages_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        listPages_2->setSpacing(6);
        listPages_2->setUniformItemSizes(true);
        listPages_2->setSelectionRectVisible(true);
        line_2 = new QFrame(EditInput);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(150, 70, 20, 341));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_13 = new QLabel(EditInput);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(180, 70, 441, 41));
        label_13->setFont(font);
        label_13->setWordWrap(true);
        horizontalLayoutWidget_3 = new QWidget(EditInput);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(180, 130, 141, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(horizontalLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);

        horizontalLayout_3->addWidget(label_11);

        Rows = new QLineEdit(horizontalLayoutWidget_3);
        Rows->setObjectName(QString::fromUtf8("Rows"));
        Rows->setMaximumSize(QSize(100, 16777215));
        Rows->setFont(font);

        horizontalLayout_3->addWidget(Rows);

        horizontalLayoutWidget_4 = new QWidget(EditInput);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(180, 160, 161, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font3);

        horizontalLayout_4->addWidget(label_12);

        Cols = new QLineEdit(horizontalLayoutWidget_4);
        Cols->setObjectName(QString::fromUtf8("Cols"));
        Cols->setMaximumSize(QSize(100, 16777215));
        Cols->setFont(font);

        horizontalLayout_4->addWidget(Cols);

        horizontalLayoutWidget_8 = new QWidget(EditInput);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(180, 190, 291, 31));
        hLayoutSheroid_2 = new QHBoxLayout(horizontalLayoutWidget_8);
        hLayoutSheroid_2->setObjectName(QString::fromUtf8("hLayoutSheroid_2"));
        hLayoutSheroid_2->setContentsMargins(0, 0, 0, 0);
        labelSheroid_2 = new QLabel(horizontalLayoutWidget_8);
        labelSheroid_2->setObjectName(QString::fromUtf8("labelSheroid_2"));
        labelSheroid_2->setFont(font3);

        hLayoutSheroid_2->addWidget(labelSheroid_2);

        sheroid = new QComboBox(horizontalLayoutWidget_8);
        sheroid->setObjectName(QString::fromUtf8("sheroid"));
        sheroid->setMinimumSize(QSize(225, 0));
        sheroid->setFont(font);

        hLayoutSheroid_2->addWidget(sheroid);

        horizontalLayoutWidget_5 = new QWidget(EditInput);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(180, 220, 271, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(horizontalLayoutWidget_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font3);

        horizontalLayout_5->addWidget(label_14);

        pixelSize = new QLineEdit(horizontalLayoutWidget_5);
        pixelSize->setObjectName(QString::fromUtf8("pixelSize"));
        pixelSize->setMaximumSize(QSize(100, 16777215));
        pixelSize->setFont(font);

        horizontalLayout_5->addWidget(pixelSize);

        pixelUnits = new QComboBox(horizontalLayoutWidget_5);
        pixelUnits->setObjectName(QString::fromUtf8("pixelUnits"));
        pixelUnits->setMinimumSize(QSize(100, 0));
        pixelUnits->setMaximumSize(QSize(90, 16777215));
        pixelUnits->setFont(font);

        horizontalLayout_5->addWidget(pixelUnits);

        horizontalLayoutWidget_6 = new QWidget(EditInput);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(180, 250, 241, 31));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        labelPixelType_2 = new QLabel(horizontalLayoutWidget_6);
        labelPixelType_2->setObjectName(QString::fromUtf8("labelPixelType_2"));
        labelPixelType_2->setFont(font3);

        horizontalLayout_6->addWidget(labelPixelType_2);

        pixelType = new QComboBox(horizontalLayoutWidget_6);
        pixelType->setObjectName(QString::fromUtf8("pixelType"));
        pixelType->setMinimumSize(QSize(165, 0));
        pixelType->setMaximumSize(QSize(165, 16777215));
        pixelType->setFont(font);

        horizontalLayout_6->addWidget(pixelType);

        horizontalLayoutWidget_7 = new QWidget(EditInput);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(180, 280, 181, 31));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelULlat_2 = new QLabel(horizontalLayoutWidget_7);
        labelULlat_2->setObjectName(QString::fromUtf8("labelULlat_2"));
        labelULlat_2->setFont(font3);

        horizontalLayout_7->addWidget(labelULlat_2);

        Latitude = new QLineEdit(horizontalLayoutWidget_7);
        Latitude->setObjectName(QString::fromUtf8("Latitude"));
        Latitude->setMinimumSize(QSize(100, 0));
        Latitude->setMaximumSize(QSize(100, 16777215));
        Latitude->setFont(font);
        Latitude->setAcceptDrops(false);

        horizontalLayout_7->addWidget(Latitude);

        horizontalLayoutWidget_9 = new QWidget(EditInput);
        horizontalLayoutWidget_9->setObjectName(QString::fromUtf8("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(180, 310, 191, 31));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        labelULlat_3 = new QLabel(horizontalLayoutWidget_9);
        labelULlat_3->setObjectName(QString::fromUtf8("labelULlat_3"));
        labelULlat_3->setFont(font3);

        horizontalLayout_8->addWidget(labelULlat_3);

        Longitude = new QLineEdit(horizontalLayoutWidget_9);
        Longitude->setObjectName(QString::fromUtf8("Longitude"));
        Longitude->setMinimumSize(QSize(100, 0));
        Longitude->setMaximumSize(QSize(100, 16777215));
        Longitude->setFont(font);
        Longitude->setAcceptDrops(false);

        horizontalLayout_8->addWidget(Longitude);

        horizontalLayoutWidget_10 = new QWidget(EditInput);
        horizontalLayoutWidget_10->setObjectName(QString::fromUtf8("horizontalLayoutWidget_10"));
        horizontalLayoutWidget_10->setGeometry(QRect(180, 340, 182, 31));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_10);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        labelFillValue_2 = new QLabel(horizontalLayoutWidget_10);
        labelFillValue_2->setObjectName(QString::fromUtf8("labelFillValue_2"));
        labelFillValue_2->setMinimumSize(QSize(0, 0));
        labelFillValue_2->setFont(font3);

        horizontalLayout_9->addWidget(labelFillValue_2);

        fillEnable = new QCheckBox(horizontalLayoutWidget_10);
        fillEnable->setObjectName(QString::fromUtf8("fillEnable"));

        horizontalLayout_9->addWidget(fillEnable);

        FillValue = new QLineEdit(horizontalLayoutWidget_10);
        FillValue->setObjectName(QString::fromUtf8("FillValue"));
        FillValue->setEnabled(false);
        FillValue->setMinimumSize(QSize(100, 0));
        FillValue->setMaximumSize(QSize(100, 16777215));
        FillValue->setAcceptDrops(false);
        FillValue->setReadOnly(false);

        horizontalLayout_9->addWidget(FillValue);

        horizontalLayoutWidget_11 = new QWidget(EditInput);
        horizontalLayoutWidget_11->setObjectName(QString::fromUtf8("horizontalLayoutWidget_11"));
        horizontalLayoutWidget_11->setGeometry(QRect(180, 370, 218, 31));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        labelNoDataValue_2 = new QLabel(horizontalLayoutWidget_11);
        labelNoDataValue_2->setObjectName(QString::fromUtf8("labelNoDataValue_2"));
        labelNoDataValue_2->setMinimumSize(QSize(0, 0));
        labelNoDataValue_2->setFont(font3);

        horizontalLayout_10->addWidget(labelNoDataValue_2);

        noDataValueEnable = new QCheckBox(horizontalLayoutWidget_11);
        noDataValueEnable->setObjectName(QString::fromUtf8("noDataValueEnable"));

        horizontalLayout_10->addWidget(noDataValueEnable);

        noDataValue = new QLineEdit(horizontalLayoutWidget_11);
        noDataValue->setObjectName(QString::fromUtf8("noDataValue"));
        noDataValue->setEnabled(false);
        noDataValue->setMinimumSize(QSize(100, 0));
        noDataValue->setMaximumSize(QSize(100, 16777215));
        noDataValue->setAcceptDrops(false);
        noDataValue->setReadOnly(false);

        horizontalLayout_10->addWidget(noDataValue);

        horizontalLayoutWidget_12 = new QWidget(EditInput);
        horizontalLayoutWidget_12->setObjectName(QString::fromUtf8("horizontalLayoutWidget_12"));
        horizontalLayoutWidget_12->setGeometry(QRect(440, 250, 181, 31));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_12);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        labelNoDataValue_3 = new QLabel(horizontalLayoutWidget_12);
        labelNoDataValue_3->setObjectName(QString::fromUtf8("labelNoDataValue_3"));
        labelNoDataValue_3->setMinimumSize(QSize(0, 0));
        labelNoDataValue_3->setFont(font3);

        horizontalLayout_11->addWidget(labelNoDataValue_3);

        bandCount = new QLineEdit(horizontalLayoutWidget_12);
        bandCount->setObjectName(QString::fromUtf8("bandCount"));
        bandCount->setEnabled(true);
        bandCount->setMinimumSize(QSize(100, 0));
        bandCount->setMaximumSize(QSize(100, 16777215));
        bandCount->setAcceptDrops(false);
        bandCount->setReadOnly(false);

        horizontalLayout_11->addWidget(bandCount);

        mainWidget->addWidget(EditInput);
        EditInputProj = new QWidget();
        EditInputProj->setObjectName(QString::fromUtf8("EditInputProj"));
        Heading_7 = new QFrame(EditInputProj);
        Heading_7->setObjectName(QString::fromUtf8("Heading_7"));
        Heading_7->setGeometry(QRect(-1, -1, 642, 61));
        Heading_7->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        Heading_7->setFrameShape(QFrame::Box);
        Heading_7->setFrameShadow(QFrame::Plain);
        labelPageTitle_7 = new QLabel(Heading_7);
        labelPageTitle_7->setObjectName(QString::fromUtf8("labelPageTitle_7"));
        labelPageTitle_7->setGeometry(QRect(80, 10, 171, 20));
        labelPageTitle_7->setFont(font3);
        labelPageDesc_7 = new QLabel(Heading_7);
        labelPageDesc_7->setObjectName(QString::fromUtf8("labelPageDesc_7"));
        labelPageDesc_7->setGeometry(QRect(100, 30, 481, 21));
        labelPageDesc_7->setFont(font);
        labelPageDesc_7->setWordWrap(true);
        label_15 = new QLabel(Heading_7);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 10, 46, 41));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/Images/tools-wizard256.png")));
        label_15->setScaledContents(true);
        listPages_7 = new QListWidget(EditInputProj);
        new QListWidgetItem(listPages_7);
        new QListWidgetItem(listPages_7);
        new QListWidgetItem(listPages_7);
        new QListWidgetItem(listPages_7);
        new QListWidgetItem(listPages_7);
        new QListWidgetItem(listPages_7);
        new QListWidgetItem(listPages_7);
        new QListWidgetItem(listPages_7);
        new QListWidgetItem(listPages_7);
        new QListWidgetItem(listPages_7);
        listPages_7->setObjectName(QString::fromUtf8("listPages_7"));
        listPages_7->setEnabled(false);
        listPages_7->setGeometry(QRect(10, 70, 151, 341));
        listPages_7->setFont(font);
        listPages_7->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QListWidget::item:selected, QListWidget::item:selected:active{\n"
"	background-color: rgba(71, 175, 255, 128);\n"
"	border: 1px solid rgba(71, 175, 255, 128);\n"
"}\n"
""));
        listPages_7->setFrameShape(QFrame::NoFrame);
        listPages_7->setFrameShadow(QFrame::Plain);
        listPages_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages_7->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages_7->setAutoScroll(false);
        listPages_7->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listPages_7->setProperty("showDropIndicator", QVariant(false));
        listPages_7->setAlternatingRowColors(false);
        listPages_7->setSelectionBehavior(QAbstractItemView::SelectRows);
        listPages_7->setSpacing(6);
        listPages_7->setUniformItemSizes(true);
        listPages_7->setSelectionRectVisible(true);
        line_7 = new QFrame(EditInputProj);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(150, 70, 20, 341));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        inputProjection = new QStackedWidget(EditInputProj);
        inputProjection->setObjectName(QString::fromUtf8("inputProjection"));
        inputProjection->setGeometry(QRect(170, 100, 461, 311));
        GEO = new QWidget();
        GEO->setObjectName(QString::fromUtf8("GEO"));
        inputProjection->addWidget(GEO);
        _UTM = new QWidget();
        _UTM->setObjectName(QString::fromUtf8("_UTM"));
        inputProjection->addWidget(_UTM);
        SPCS = new QWidget();
        SPCS->setObjectName(QString::fromUtf8("SPCS"));
        inputProjection->addWidget(SPCS);
        ALBERS = new QWidget();
        ALBERS->setObjectName(QString::fromUtf8("ALBERS"));
        horizontalLayoutWidget_2 = new QWidget(ALBERS);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 10, 431, 21));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(horizontalLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font3);

        horizontalLayout_2->addWidget(label_16);

        ALBERS_SMajor = new QLineEdit(horizontalLayoutWidget_2);
        ALBERS_SMajor->setObjectName(QString::fromUtf8("ALBERS_SMajor"));
        ALBERS_SMajor->setFont(font);

        horizontalLayout_2->addWidget(ALBERS_SMajor);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayoutWidget_14 = new QWidget(ALBERS);
        horizontalLayoutWidget_14->setObjectName(QString::fromUtf8("horizontalLayoutWidget_14"));
        horizontalLayoutWidget_14->setGeometry(QRect(0, 40, 431, 24));
        horizontalLayout_13 = new QHBoxLayout(horizontalLayoutWidget_14);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(horizontalLayoutWidget_14);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font3);

        horizontalLayout_13->addWidget(label_17);

        ALBERS_SMinor = new QLineEdit(horizontalLayoutWidget_14);
        ALBERS_SMinor->setObjectName(QString::fromUtf8("ALBERS_SMinor"));
        ALBERS_SMinor->setFont(font);

        horizontalLayout_13->addWidget(ALBERS_SMinor);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);

        horizontalLayoutWidget_15 = new QWidget(ALBERS);
        horizontalLayoutWidget_15->setObjectName(QString::fromUtf8("horizontalLayoutWidget_15"));
        horizontalLayoutWidget_15->setGeometry(QRect(0, 70, 431, 24));
        horizontalLayout_14 = new QHBoxLayout(horizontalLayoutWidget_15);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(horizontalLayoutWidget_15);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font3);

        horizontalLayout_14->addWidget(label_22);

        ALBERS_STDPR1 = new QLineEdit(horizontalLayoutWidget_15);
        ALBERS_STDPR1->setObjectName(QString::fromUtf8("ALBERS_STDPR1"));
        ALBERS_STDPR1->setFont(font);

        horizontalLayout_14->addWidget(ALBERS_STDPR1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_4);

        horizontalLayoutWidget_16 = new QWidget(ALBERS);
        horizontalLayoutWidget_16->setObjectName(QString::fromUtf8("horizontalLayoutWidget_16"));
        horizontalLayoutWidget_16->setGeometry(QRect(0, 100, 431, 24));
        horizontalLayout_15 = new QHBoxLayout(horizontalLayoutWidget_16);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(horizontalLayoutWidget_16);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font3);

        horizontalLayout_15->addWidget(label_23);

        ALBERS_STDPR2 = new QLineEdit(horizontalLayoutWidget_16);
        ALBERS_STDPR2->setObjectName(QString::fromUtf8("ALBERS_STDPR2"));
        ALBERS_STDPR2->setFont(font);

        horizontalLayout_15->addWidget(ALBERS_STDPR2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_5);

        horizontalLayoutWidget_17 = new QWidget(ALBERS);
        horizontalLayoutWidget_17->setObjectName(QString::fromUtf8("horizontalLayoutWidget_17"));
        horizontalLayoutWidget_17->setGeometry(QRect(0, 130, 431, 24));
        horizontalLayout_16 = new QHBoxLayout(horizontalLayoutWidget_17);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(horizontalLayoutWidget_17);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font3);

        horizontalLayout_16->addWidget(label_24);

        ALBERS_CENTMER = new QLineEdit(horizontalLayoutWidget_17);
        ALBERS_CENTMER->setObjectName(QString::fromUtf8("ALBERS_CENTMER"));
        ALBERS_CENTMER->setFont(font);

        horizontalLayout_16->addWidget(ALBERS_CENTMER);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_6);

        horizontalLayoutWidget_18 = new QWidget(ALBERS);
        horizontalLayoutWidget_18->setObjectName(QString::fromUtf8("horizontalLayoutWidget_18"));
        horizontalLayoutWidget_18->setGeometry(QRect(0, 160, 431, 24));
        horizontalLayout_17 = new QHBoxLayout(horizontalLayoutWidget_18);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(horizontalLayoutWidget_18);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font3);

        horizontalLayout_17->addWidget(label_25);

        ALBERS_ORIGIN = new QLineEdit(horizontalLayoutWidget_18);
        ALBERS_ORIGIN->setObjectName(QString::fromUtf8("ALBERS_ORIGIN"));
        ALBERS_ORIGIN->setFont(font);

        horizontalLayout_17->addWidget(ALBERS_ORIGIN);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_7);

        horizontalLayoutWidget_19 = new QWidget(ALBERS);
        horizontalLayoutWidget_19->setObjectName(QString::fromUtf8("horizontalLayoutWidget_19"));
        horizontalLayoutWidget_19->setGeometry(QRect(0, 190, 431, 24));
        horizontalLayout_18 = new QHBoxLayout(horizontalLayoutWidget_19);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(horizontalLayoutWidget_19);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font3);

        horizontalLayout_18->addWidget(label_26);

        ALBERS_FE = new QLineEdit(horizontalLayoutWidget_19);
        ALBERS_FE->setObjectName(QString::fromUtf8("ALBERS_FE"));
        ALBERS_FE->setFont(font);

        horizontalLayout_18->addWidget(ALBERS_FE);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_8);

        horizontalLayoutWidget_20 = new QWidget(ALBERS);
        horizontalLayoutWidget_20->setObjectName(QString::fromUtf8("horizontalLayoutWidget_20"));
        horizontalLayoutWidget_20->setGeometry(QRect(0, 220, 431, 24));
        horizontalLayout_19 = new QHBoxLayout(horizontalLayoutWidget_20);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(horizontalLayoutWidget_20);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font3);

        horizontalLayout_19->addWidget(label_27);

        ALBERS_FN = new QLineEdit(horizontalLayoutWidget_20);
        ALBERS_FN->setObjectName(QString::fromUtf8("ALBERS_FN"));
        ALBERS_FN->setFont(font);

        horizontalLayout_19->addWidget(ALBERS_FN);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_9);

        inputProjection->addWidget(ALBERS);
        LAMCC = new QWidget();
        LAMCC->setObjectName(QString::fromUtf8("LAMCC"));
        inputProjection->addWidget(LAMCC);
        MERCAT = new QWidget();
        MERCAT->setObjectName(QString::fromUtf8("MERCAT"));
        inputProjection->addWidget(MERCAT);
        PS = new QWidget();
        PS->setObjectName(QString::fromUtf8("PS"));
        inputProjection->addWidget(PS);
        POLYC = new QWidget();
        POLYC->setObjectName(QString::fromUtf8("POLYC"));
        inputProjection->addWidget(POLYC);
        EQUIDC = new QWidget();
        EQUIDC->setObjectName(QString::fromUtf8("EQUIDC"));
        inputProjection->addWidget(EQUIDC);
        TM = new QWidget();
        TM->setObjectName(QString::fromUtf8("TM"));
        inputProjection->addWidget(TM);
        STEREO = new QWidget();
        STEREO->setObjectName(QString::fromUtf8("STEREO"));
        inputProjection->addWidget(STEREO);
        LAMAZ = new QWidget();
        LAMAZ->setObjectName(QString::fromUtf8("LAMAZ"));
        inputProjection->addWidget(LAMAZ);
        AZMEQD = new QWidget();
        AZMEQD->setObjectName(QString::fromUtf8("AZMEQD"));
        inputProjection->addWidget(AZMEQD);
        GNOMON = new QWidget();
        GNOMON->setObjectName(QString::fromUtf8("GNOMON"));
        inputProjection->addWidget(GNOMON);
        ORTHO = new QWidget();
        ORTHO->setObjectName(QString::fromUtf8("ORTHO"));
        inputProjection->addWidget(ORTHO);
        GVNSP = new QWidget();
        GVNSP->setObjectName(QString::fromUtf8("GVNSP"));
        inputProjection->addWidget(GVNSP);
        SNSOID = new QWidget();
        SNSOID->setObjectName(QString::fromUtf8("SNSOID"));
        inputProjection->addWidget(SNSOID);
        EQRECT = new QWidget();
        EQRECT->setObjectName(QString::fromUtf8("EQRECT"));
        inputProjection->addWidget(EQRECT);
        MILLER = new QWidget();
        MILLER->setObjectName(QString::fromUtf8("MILLER"));
        inputProjection->addWidget(MILLER);
        VGRINT = new QWidget();
        VGRINT->setObjectName(QString::fromUtf8("VGRINT"));
        inputProjection->addWidget(VGRINT);
        HOM = new QWidget();
        HOM->setObjectName(QString::fromUtf8("HOM"));
        inputProjection->addWidget(HOM);
        ROBIN = new QWidget();
        ROBIN->setObjectName(QString::fromUtf8("ROBIN"));
        inputProjection->addWidget(ROBIN);
        SOM = new QWidget();
        SOM->setObjectName(QString::fromUtf8("SOM"));
        inputProjection->addWidget(SOM);
        ALASKA = new QWidget();
        ALASKA->setObjectName(QString::fromUtf8("ALASKA"));
        inputProjection->addWidget(ALASKA);
        GOOD = new QWidget();
        GOOD->setObjectName(QString::fromUtf8("GOOD"));
        inputProjection->addWidget(GOOD);
        MOLL = new QWidget();
        MOLL->setObjectName(QString::fromUtf8("MOLL"));
        inputProjection->addWidget(MOLL);
        IMOLL = new QWidget();
        IMOLL->setObjectName(QString::fromUtf8("IMOLL"));
        inputProjection->addWidget(IMOLL);
        HAMMER = new QWidget();
        HAMMER->setObjectName(QString::fromUtf8("HAMMER"));
        inputProjection->addWidget(HAMMER);
        WAGIV = new QWidget();
        WAGIV->setObjectName(QString::fromUtf8("WAGIV"));
        inputProjection->addWidget(WAGIV);
        WAGVII = new QWidget();
        WAGVII->setObjectName(QString::fromUtf8("WAGVII"));
        inputProjection->addWidget(WAGVII);
        OBEQA = new QWidget();
        OBEQA->setObjectName(QString::fromUtf8("OBEQA"));
        inputProjection->addWidget(OBEQA);
        USRDEF = new QWidget();
        USRDEF->setObjectName(QString::fromUtf8("USRDEF"));
        inputProjection->addWidget(USRDEF);
        line_8 = new QFrame(EditInputProj);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(180, 90, 441, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_21 = new QWidget(EditInputProj);
        horizontalLayoutWidget_21->setObjectName(QString::fromUtf8("horizontalLayoutWidget_21"));
        horizontalLayoutWidget_21->setGeometry(QRect(170, 70, 461, 22));
        horizontalLayout_20 = new QHBoxLayout(horizontalLayoutWidget_21);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_10);

        label_28 = new QLabel(horizontalLayoutWidget_21);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFont(font3);

        horizontalLayout_20->addWidget(label_28);

        inputProjectionBox = new QComboBox(horizontalLayoutWidget_21);
        inputProjectionBox->setObjectName(QString::fromUtf8("inputProjectionBox"));

        horizontalLayout_20->addWidget(inputProjectionBox);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_11);

        mainWidget->addWidget(EditInputProj);
        SelectOutputOptions = new QWidget();
        SelectOutputOptions->setObjectName(QString::fromUtf8("SelectOutputOptions"));
        line_3 = new QFrame(SelectOutputOptions);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(150, 70, 20, 341));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        listPages_3 = new QListWidget(SelectOutputOptions);
        new QListWidgetItem(listPages_3);
        new QListWidgetItem(listPages_3);
        new QListWidgetItem(listPages_3);
        new QListWidgetItem(listPages_3);
        new QListWidgetItem(listPages_3);
        new QListWidgetItem(listPages_3);
        new QListWidgetItem(listPages_3);
        new QListWidgetItem(listPages_3);
        new QListWidgetItem(listPages_3);
        new QListWidgetItem(listPages_3);
        listPages_3->setObjectName(QString::fromUtf8("listPages_3"));
        listPages_3->setEnabled(false);
        listPages_3->setGeometry(QRect(10, 70, 151, 341));
        listPages_3->setFont(font);
        listPages_3->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QListWidget::item:selected, QListWidget::item:selected:active{\n"
"	background-color: rgba(71, 175, 255, 128);\n"
"	border: 1px solid rgba(71, 175, 255, 128);\n"
"}\n"
""));
        listPages_3->setFrameShape(QFrame::NoFrame);
        listPages_3->setFrameShadow(QFrame::Plain);
        listPages_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages_3->setAutoScroll(false);
        listPages_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listPages_3->setProperty("showDropIndicator", QVariant(false));
        listPages_3->setAlternatingRowColors(false);
        listPages_3->setSelectionBehavior(QAbstractItemView::SelectRows);
        listPages_3->setSpacing(6);
        listPages_3->setUniformItemSizes(true);
        listPages_3->setSelectionRectVisible(true);
        Heading_3 = new QFrame(SelectOutputOptions);
        Heading_3->setObjectName(QString::fromUtf8("Heading_3"));
        Heading_3->setGeometry(QRect(-1, -1, 642, 61));
        Heading_3->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        Heading_3->setFrameShape(QFrame::Box);
        Heading_3->setFrameShadow(QFrame::Plain);
        labelPageTitle_3 = new QLabel(Heading_3);
        labelPageTitle_3->setObjectName(QString::fromUtf8("labelPageTitle_3"));
        labelPageTitle_3->setGeometry(QRect(80, 10, 171, 20));
        labelPageTitle_3->setFont(font3);
        labelPageDesc_3 = new QLabel(Heading_3);
        labelPageDesc_3->setObjectName(QString::fromUtf8("labelPageDesc_3"));
        labelPageDesc_3->setGeometry(QRect(100, 30, 471, 21));
        labelPageDesc_3->setFont(font);
        labelPageDesc_3->setWordWrap(true);
        label_7 = new QLabel(Heading_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 10, 46, 41));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/Images/tools-wizard256.png")));
        label_7->setScaledContents(true);
        horizontalLayoutWidget_43 = new QWidget(SelectOutputOptions);
        horizontalLayoutWidget_43->setObjectName(QString::fromUtf8("horizontalLayoutWidget_43"));
        horizontalLayoutWidget_43->setGeometry(QRect(180, 130, 141, 31));
        horizontalLayout_41 = new QHBoxLayout(horizontalLayoutWidget_43);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        horizontalLayout_41->setContentsMargins(0, 0, 0, 0);
        label_57 = new QLabel(horizontalLayoutWidget_43);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setFont(font3);

        horizontalLayout_41->addWidget(label_57);

        outRows = new QLineEdit(horizontalLayoutWidget_43);
        outRows->setObjectName(QString::fromUtf8("outRows"));
        outRows->setMaximumSize(QSize(100, 16777215));
        outRows->setFont(font);

        horizontalLayout_41->addWidget(outRows);

        horizontalLayoutWidget_44 = new QWidget(SelectOutputOptions);
        horizontalLayoutWidget_44->setObjectName(QString::fromUtf8("horizontalLayoutWidget_44"));
        horizontalLayoutWidget_44->setGeometry(QRect(180, 250, 241, 31));
        horizontalLayout_42 = new QHBoxLayout(horizontalLayoutWidget_44);
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        horizontalLayout_42->setContentsMargins(0, 0, 0, 0);
        labelPixelType_4 = new QLabel(horizontalLayoutWidget_44);
        labelPixelType_4->setObjectName(QString::fromUtf8("labelPixelType_4"));
        labelPixelType_4->setFont(font3);

        horizontalLayout_42->addWidget(labelPixelType_4);

        outPixelType = new QComboBox(horizontalLayoutWidget_44);
        outPixelType->setObjectName(QString::fromUtf8("outPixelType"));
        outPixelType->setMinimumSize(QSize(165, 0));
        outPixelType->setMaximumSize(QSize(165, 16777215));
        outPixelType->setFont(font);

        horizontalLayout_42->addWidget(outPixelType);

        horizontalLayoutWidget_45 = new QWidget(SelectOutputOptions);
        horizontalLayoutWidget_45->setObjectName(QString::fromUtf8("horizontalLayoutWidget_45"));
        horizontalLayoutWidget_45->setGeometry(QRect(440, 250, 182, 31));
        horizontalLayout_43 = new QHBoxLayout(horizontalLayoutWidget_45);
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        horizontalLayout_43->setContentsMargins(0, 0, 0, 0);
        labelNoDataValue_6 = new QLabel(horizontalLayoutWidget_45);
        labelNoDataValue_6->setObjectName(QString::fromUtf8("labelNoDataValue_6"));
        labelNoDataValue_6->setMinimumSize(QSize(0, 0));
        labelNoDataValue_6->setFont(font3);

        horizontalLayout_43->addWidget(labelNoDataValue_6);

        outBandCount = new QLineEdit(horizontalLayoutWidget_45);
        outBandCount->setObjectName(QString::fromUtf8("outBandCount"));
        outBandCount->setEnabled(true);
        outBandCount->setMinimumSize(QSize(100, 0));
        outBandCount->setMaximumSize(QSize(100, 16777215));
        outBandCount->setAcceptDrops(false);
        outBandCount->setReadOnly(false);

        horizontalLayout_43->addWidget(outBandCount);

        horizontalLayoutWidget_46 = new QWidget(SelectOutputOptions);
        horizontalLayoutWidget_46->setObjectName(QString::fromUtf8("horizontalLayoutWidget_46"));
        horizontalLayoutWidget_46->setGeometry(QRect(180, 280, 181, 31));
        horizontalLayout_44 = new QHBoxLayout(horizontalLayoutWidget_46);
        horizontalLayout_44->setObjectName(QString::fromUtf8("horizontalLayout_44"));
        horizontalLayout_44->setContentsMargins(0, 0, 0, 0);
        labelULlat_6 = new QLabel(horizontalLayoutWidget_46);
        labelULlat_6->setObjectName(QString::fromUtf8("labelULlat_6"));
        labelULlat_6->setFont(font3);

        horizontalLayout_44->addWidget(labelULlat_6);

        outLatitude = new QLineEdit(horizontalLayoutWidget_46);
        outLatitude->setObjectName(QString::fromUtf8("outLatitude"));
        outLatitude->setMinimumSize(QSize(100, 0));
        outLatitude->setMaximumSize(QSize(100, 16777215));
        outLatitude->setFont(font);
        outLatitude->setAcceptDrops(false);

        horizontalLayout_44->addWidget(outLatitude);

        horizontalLayoutWidget_47 = new QWidget(SelectOutputOptions);
        horizontalLayoutWidget_47->setObjectName(QString::fromUtf8("horizontalLayoutWidget_47"));
        horizontalLayoutWidget_47->setGeometry(QRect(180, 340, 182, 31));
        horizontalLayout_45 = new QHBoxLayout(horizontalLayoutWidget_47);
        horizontalLayout_45->setObjectName(QString::fromUtf8("horizontalLayout_45"));
        horizontalLayout_45->setContentsMargins(0, 0, 0, 0);
        labelFillValue_4 = new QLabel(horizontalLayoutWidget_47);
        labelFillValue_4->setObjectName(QString::fromUtf8("labelFillValue_4"));
        labelFillValue_4->setMinimumSize(QSize(0, 0));
        labelFillValue_4->setFont(font3);

        horizontalLayout_45->addWidget(labelFillValue_4);

        outfillEnable = new QCheckBox(horizontalLayoutWidget_47);
        outfillEnable->setObjectName(QString::fromUtf8("outfillEnable"));

        horizontalLayout_45->addWidget(outfillEnable);

        outFillValue = new QLineEdit(horizontalLayoutWidget_47);
        outFillValue->setObjectName(QString::fromUtf8("outFillValue"));
        outFillValue->setEnabled(false);
        outFillValue->setMinimumSize(QSize(100, 0));
        outFillValue->setMaximumSize(QSize(100, 16777215));
        outFillValue->setAcceptDrops(false);
        outFillValue->setReadOnly(false);

        horizontalLayout_45->addWidget(outFillValue);

        horizontalLayoutWidget_48 = new QWidget(SelectOutputOptions);
        horizontalLayoutWidget_48->setObjectName(QString::fromUtf8("horizontalLayoutWidget_48"));
        horizontalLayoutWidget_48->setGeometry(QRect(180, 370, 218, 31));
        horizontalLayout_46 = new QHBoxLayout(horizontalLayoutWidget_48);
        horizontalLayout_46->setObjectName(QString::fromUtf8("horizontalLayout_46"));
        horizontalLayout_46->setContentsMargins(0, 0, 0, 0);
        labelNoDataValue_7 = new QLabel(horizontalLayoutWidget_48);
        labelNoDataValue_7->setObjectName(QString::fromUtf8("labelNoDataValue_7"));
        labelNoDataValue_7->setMinimumSize(QSize(0, 0));
        labelNoDataValue_7->setFont(font3);

        horizontalLayout_46->addWidget(labelNoDataValue_7);

        outNoDataValueEnable = new QCheckBox(horizontalLayoutWidget_48);
        outNoDataValueEnable->setObjectName(QString::fromUtf8("outNoDataValueEnable"));

        horizontalLayout_46->addWidget(outNoDataValueEnable);

        outNoDataValue = new QLineEdit(horizontalLayoutWidget_48);
        outNoDataValue->setObjectName(QString::fromUtf8("outNoDataValue"));
        outNoDataValue->setEnabled(false);
        outNoDataValue->setMinimumSize(QSize(100, 0));
        outNoDataValue->setMaximumSize(QSize(100, 16777215));
        outNoDataValue->setAcceptDrops(false);
        outNoDataValue->setReadOnly(false);

        horizontalLayout_46->addWidget(outNoDataValue);

        horizontalLayoutWidget_49 = new QWidget(SelectOutputOptions);
        horizontalLayoutWidget_49->setObjectName(QString::fromUtf8("horizontalLayoutWidget_49"));
        horizontalLayoutWidget_49->setGeometry(QRect(180, 310, 191, 31));
        horizontalLayout_47 = new QHBoxLayout(horizontalLayoutWidget_49);
        horizontalLayout_47->setObjectName(QString::fromUtf8("horizontalLayout_47"));
        horizontalLayout_47->setContentsMargins(0, 0, 0, 0);
        labelULlat_7 = new QLabel(horizontalLayoutWidget_49);
        labelULlat_7->setObjectName(QString::fromUtf8("labelULlat_7"));
        labelULlat_7->setFont(font3);

        horizontalLayout_47->addWidget(labelULlat_7);

        outLongitude = new QLineEdit(horizontalLayoutWidget_49);
        outLongitude->setObjectName(QString::fromUtf8("outLongitude"));
        outLongitude->setMinimumSize(QSize(100, 0));
        outLongitude->setMaximumSize(QSize(100, 16777215));
        outLongitude->setFont(font);
        outLongitude->setAcceptDrops(false);

        horizontalLayout_47->addWidget(outLongitude);

        horizontalLayoutWidget_50 = new QWidget(SelectOutputOptions);
        horizontalLayoutWidget_50->setObjectName(QString::fromUtf8("horizontalLayoutWidget_50"));
        horizontalLayoutWidget_50->setGeometry(QRect(180, 220, 271, 31));
        horizontalLayout_48 = new QHBoxLayout(horizontalLayoutWidget_50);
        horizontalLayout_48->setObjectName(QString::fromUtf8("horizontalLayout_48"));
        horizontalLayout_48->setContentsMargins(0, 0, 0, 0);
        label_58 = new QLabel(horizontalLayoutWidget_50);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setFont(font3);

        horizontalLayout_48->addWidget(label_58);

        outPixelSize = new QLineEdit(horizontalLayoutWidget_50);
        outPixelSize->setObjectName(QString::fromUtf8("outPixelSize"));
        outPixelSize->setMaximumSize(QSize(100, 16777215));
        outPixelSize->setFont(font);

        horizontalLayout_48->addWidget(outPixelSize);

        outPixelUnits = new QComboBox(horizontalLayoutWidget_50);
        outPixelUnits->setObjectName(QString::fromUtf8("outPixelUnits"));
        outPixelUnits->setMinimumSize(QSize(100, 0));
        outPixelUnits->setMaximumSize(QSize(90, 16777215));
        outPixelUnits->setFont(font);

        horizontalLayout_48->addWidget(outPixelUnits);

        horizontalLayoutWidget_51 = new QWidget(SelectOutputOptions);
        horizontalLayoutWidget_51->setObjectName(QString::fromUtf8("horizontalLayoutWidget_51"));
        horizontalLayoutWidget_51->setGeometry(QRect(180, 190, 291, 31));
        hLayoutSheroid_4 = new QHBoxLayout(horizontalLayoutWidget_51);
        hLayoutSheroid_4->setObjectName(QString::fromUtf8("hLayoutSheroid_4"));
        hLayoutSheroid_4->setContentsMargins(0, 0, 0, 0);
        labelSheroid_4 = new QLabel(horizontalLayoutWidget_51);
        labelSheroid_4->setObjectName(QString::fromUtf8("labelSheroid_4"));
        labelSheroid_4->setFont(font3);

        hLayoutSheroid_4->addWidget(labelSheroid_4);

        outSheroid = new QComboBox(horizontalLayoutWidget_51);
        outSheroid->setObjectName(QString::fromUtf8("outSheroid"));
        outSheroid->setMinimumSize(QSize(225, 0));
        outSheroid->setFont(font);

        hLayoutSheroid_4->addWidget(outSheroid);

        horizontalLayoutWidget_52 = new QWidget(SelectOutputOptions);
        horizontalLayoutWidget_52->setObjectName(QString::fromUtf8("horizontalLayoutWidget_52"));
        horizontalLayoutWidget_52->setGeometry(QRect(180, 160, 161, 31));
        horizontalLayout_49 = new QHBoxLayout(horizontalLayoutWidget_52);
        horizontalLayout_49->setObjectName(QString::fromUtf8("horizontalLayout_49"));
        horizontalLayout_49->setContentsMargins(0, 0, 0, 0);
        label_59 = new QLabel(horizontalLayoutWidget_52);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setFont(font3);

        horizontalLayout_49->addWidget(label_59);

        outCols = new QLineEdit(horizontalLayoutWidget_52);
        outCols->setObjectName(QString::fromUtf8("outCols"));
        outCols->setMaximumSize(QSize(100, 16777215));
        outCols->setFont(font);

        horizontalLayout_49->addWidget(outCols);

        label_49 = new QLabel(SelectOutputOptions);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(180, 70, 441, 41));
        label_49->setFont(font);
        label_49->setWordWrap(true);
        mainWidget->addWidget(SelectOutputOptions);
        outputProjections = new QWidget();
        outputProjections->setObjectName(QString::fromUtf8("outputProjections"));
        outputProjection = new QStackedWidget(outputProjections);
        outputProjection->setObjectName(QString::fromUtf8("outputProjection"));
        outputProjection->setGeometry(QRect(171, 101, 461, 311));
        GEO_3 = new QWidget();
        GEO_3->setObjectName(QString::fromUtf8("GEO_3"));
        outputProjection->addWidget(GEO_3);
        _UTM_3 = new QWidget();
        _UTM_3->setObjectName(QString::fromUtf8("_UTM_3"));
        outputProjection->addWidget(_UTM_3);
        SPCS_3 = new QWidget();
        SPCS_3->setObjectName(QString::fromUtf8("SPCS_3"));
        outputProjection->addWidget(SPCS_3);
        ALBERS_3 = new QWidget();
        ALBERS_3->setObjectName(QString::fromUtf8("ALBERS_3"));
        horizontalLayoutWidget_30 = new QWidget(ALBERS_3);
        horizontalLayoutWidget_30->setObjectName(QString::fromUtf8("horizontalLayoutWidget_30"));
        horizontalLayoutWidget_30->setGeometry(QRect(0, 10, 431, 24));
        horizontalLayout_30 = new QHBoxLayout(horizontalLayoutWidget_30);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        horizontalLayout_30->setContentsMargins(0, 0, 0, 0);
        label_39 = new QLabel(horizontalLayoutWidget_30);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setFont(font3);

        horizontalLayout_30->addWidget(label_39);

        ALBERS_SMajor_3 = new QLineEdit(horizontalLayoutWidget_30);
        ALBERS_SMajor_3->setObjectName(QString::fromUtf8("ALBERS_SMajor_3"));
        ALBERS_SMajor_3->setFont(font);

        horizontalLayout_30->addWidget(ALBERS_SMajor_3);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_30->addItem(horizontalSpacer_22);

        horizontalLayoutWidget_31 = new QWidget(ALBERS_3);
        horizontalLayoutWidget_31->setObjectName(QString::fromUtf8("horizontalLayoutWidget_31"));
        horizontalLayoutWidget_31->setGeometry(QRect(0, 40, 431, 24));
        horizontalLayout_31 = new QHBoxLayout(horizontalLayoutWidget_31);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalLayout_31->setContentsMargins(0, 0, 0, 0);
        label_40 = new QLabel(horizontalLayoutWidget_31);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setFont(font3);

        horizontalLayout_31->addWidget(label_40);

        ALBERS_SMinor_3 = new QLineEdit(horizontalLayoutWidget_31);
        ALBERS_SMinor_3->setObjectName(QString::fromUtf8("ALBERS_SMinor_3"));
        ALBERS_SMinor_3->setFont(font);

        horizontalLayout_31->addWidget(ALBERS_SMinor_3);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_23);

        horizontalLayoutWidget_32 = new QWidget(ALBERS_3);
        horizontalLayoutWidget_32->setObjectName(QString::fromUtf8("horizontalLayoutWidget_32"));
        horizontalLayoutWidget_32->setGeometry(QRect(0, 70, 431, 24));
        horizontalLayout_32 = new QHBoxLayout(horizontalLayoutWidget_32);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalLayout_32->setContentsMargins(0, 0, 0, 0);
        label_41 = new QLabel(horizontalLayoutWidget_32);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setFont(font3);

        horizontalLayout_32->addWidget(label_41);

        ALBERS_STDPR1_3 = new QLineEdit(horizontalLayoutWidget_32);
        ALBERS_STDPR1_3->setObjectName(QString::fromUtf8("ALBERS_STDPR1_3"));
        ALBERS_STDPR1_3->setFont(font);

        horizontalLayout_32->addWidget(ALBERS_STDPR1_3);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_24);

        horizontalLayoutWidget_33 = new QWidget(ALBERS_3);
        horizontalLayoutWidget_33->setObjectName(QString::fromUtf8("horizontalLayoutWidget_33"));
        horizontalLayoutWidget_33->setGeometry(QRect(0, 100, 431, 24));
        horizontalLayout_33 = new QHBoxLayout(horizontalLayoutWidget_33);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        horizontalLayout_33->setContentsMargins(0, 0, 0, 0);
        label_42 = new QLabel(horizontalLayoutWidget_33);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setFont(font3);

        horizontalLayout_33->addWidget(label_42);

        ALBERS_STDPR2_3 = new QLineEdit(horizontalLayoutWidget_33);
        ALBERS_STDPR2_3->setObjectName(QString::fromUtf8("ALBERS_STDPR2_3"));
        ALBERS_STDPR2_3->setFont(font);

        horizontalLayout_33->addWidget(ALBERS_STDPR2_3);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_25);

        horizontalLayoutWidget_34 = new QWidget(ALBERS_3);
        horizontalLayoutWidget_34->setObjectName(QString::fromUtf8("horizontalLayoutWidget_34"));
        horizontalLayoutWidget_34->setGeometry(QRect(0, 130, 431, 24));
        horizontalLayout_34 = new QHBoxLayout(horizontalLayoutWidget_34);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        horizontalLayout_34->setContentsMargins(0, 0, 0, 0);
        label_43 = new QLabel(horizontalLayoutWidget_34);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setFont(font3);

        horizontalLayout_34->addWidget(label_43);

        ALBERS_CENTMER_3 = new QLineEdit(horizontalLayoutWidget_34);
        ALBERS_CENTMER_3->setObjectName(QString::fromUtf8("ALBERS_CENTMER_3"));
        ALBERS_CENTMER_3->setFont(font);

        horizontalLayout_34->addWidget(ALBERS_CENTMER_3);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_26);

        horizontalLayoutWidget_35 = new QWidget(ALBERS_3);
        horizontalLayoutWidget_35->setObjectName(QString::fromUtf8("horizontalLayoutWidget_35"));
        horizontalLayoutWidget_35->setGeometry(QRect(0, 160, 431, 24));
        horizontalLayout_35 = new QHBoxLayout(horizontalLayoutWidget_35);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        horizontalLayout_35->setContentsMargins(0, 0, 0, 0);
        label_44 = new QLabel(horizontalLayoutWidget_35);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setFont(font3);

        horizontalLayout_35->addWidget(label_44);

        ALBERS_ORIGIN_3 = new QLineEdit(horizontalLayoutWidget_35);
        ALBERS_ORIGIN_3->setObjectName(QString::fromUtf8("ALBERS_ORIGIN_3"));
        ALBERS_ORIGIN_3->setFont(font);

        horizontalLayout_35->addWidget(ALBERS_ORIGIN_3);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_27);

        horizontalLayoutWidget_36 = new QWidget(ALBERS_3);
        horizontalLayoutWidget_36->setObjectName(QString::fromUtf8("horizontalLayoutWidget_36"));
        horizontalLayoutWidget_36->setGeometry(QRect(0, 190, 431, 24));
        horizontalLayout_36 = new QHBoxLayout(horizontalLayoutWidget_36);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        horizontalLayout_36->setContentsMargins(0, 0, 0, 0);
        label_45 = new QLabel(horizontalLayoutWidget_36);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setFont(font3);

        horizontalLayout_36->addWidget(label_45);

        ALBERS_FE_3 = new QLineEdit(horizontalLayoutWidget_36);
        ALBERS_FE_3->setObjectName(QString::fromUtf8("ALBERS_FE_3"));
        ALBERS_FE_3->setFont(font);

        horizontalLayout_36->addWidget(ALBERS_FE_3);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_36->addItem(horizontalSpacer_28);

        horizontalLayoutWidget_37 = new QWidget(ALBERS_3);
        horizontalLayoutWidget_37->setObjectName(QString::fromUtf8("horizontalLayoutWidget_37"));
        horizontalLayoutWidget_37->setGeometry(QRect(0, 220, 431, 24));
        horizontalLayout_37 = new QHBoxLayout(horizontalLayoutWidget_37);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        horizontalLayout_37->setContentsMargins(0, 0, 0, 0);
        label_46 = new QLabel(horizontalLayoutWidget_37);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setFont(font3);

        horizontalLayout_37->addWidget(label_46);

        ALBERS_FN_3 = new QLineEdit(horizontalLayoutWidget_37);
        ALBERS_FN_3->setObjectName(QString::fromUtf8("ALBERS_FN_3"));
        ALBERS_FN_3->setFont(font);

        horizontalLayout_37->addWidget(ALBERS_FN_3);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_29);

        outputProjection->addWidget(ALBERS_3);
        LAMCC_3 = new QWidget();
        LAMCC_3->setObjectName(QString::fromUtf8("LAMCC_3"));
        outputProjection->addWidget(LAMCC_3);
        MERCAT_3 = new QWidget();
        MERCAT_3->setObjectName(QString::fromUtf8("MERCAT_3"));
        outputProjection->addWidget(MERCAT_3);
        PS_3 = new QWidget();
        PS_3->setObjectName(QString::fromUtf8("PS_3"));
        outputProjection->addWidget(PS_3);
        POLYC_3 = new QWidget();
        POLYC_3->setObjectName(QString::fromUtf8("POLYC_3"));
        outputProjection->addWidget(POLYC_3);
        EQUIDC_3 = new QWidget();
        EQUIDC_3->setObjectName(QString::fromUtf8("EQUIDC_3"));
        outputProjection->addWidget(EQUIDC_3);
        TM_3 = new QWidget();
        TM_3->setObjectName(QString::fromUtf8("TM_3"));
        outputProjection->addWidget(TM_3);
        STEREO_3 = new QWidget();
        STEREO_3->setObjectName(QString::fromUtf8("STEREO_3"));
        outputProjection->addWidget(STEREO_3);
        LAMAZ_3 = new QWidget();
        LAMAZ_3->setObjectName(QString::fromUtf8("LAMAZ_3"));
        outputProjection->addWidget(LAMAZ_3);
        AZMEQD_3 = new QWidget();
        AZMEQD_3->setObjectName(QString::fromUtf8("AZMEQD_3"));
        outputProjection->addWidget(AZMEQD_3);
        GNOMON_3 = new QWidget();
        GNOMON_3->setObjectName(QString::fromUtf8("GNOMON_3"));
        outputProjection->addWidget(GNOMON_3);
        ORTHO_3 = new QWidget();
        ORTHO_3->setObjectName(QString::fromUtf8("ORTHO_3"));
        outputProjection->addWidget(ORTHO_3);
        GVNSP_3 = new QWidget();
        GVNSP_3->setObjectName(QString::fromUtf8("GVNSP_3"));
        outputProjection->addWidget(GVNSP_3);
        SNSOID_3 = new QWidget();
        SNSOID_3->setObjectName(QString::fromUtf8("SNSOID_3"));
        outputProjection->addWidget(SNSOID_3);
        EQRECT_3 = new QWidget();
        EQRECT_3->setObjectName(QString::fromUtf8("EQRECT_3"));
        outputProjection->addWidget(EQRECT_3);
        MILLER_3 = new QWidget();
        MILLER_3->setObjectName(QString::fromUtf8("MILLER_3"));
        outputProjection->addWidget(MILLER_3);
        VGRINT_3 = new QWidget();
        VGRINT_3->setObjectName(QString::fromUtf8("VGRINT_3"));
        outputProjection->addWidget(VGRINT_3);
        HOM_3 = new QWidget();
        HOM_3->setObjectName(QString::fromUtf8("HOM_3"));
        outputProjection->addWidget(HOM_3);
        ROBIN_3 = new QWidget();
        ROBIN_3->setObjectName(QString::fromUtf8("ROBIN_3"));
        outputProjection->addWidget(ROBIN_3);
        SOM_3 = new QWidget();
        SOM_3->setObjectName(QString::fromUtf8("SOM_3"));
        outputProjection->addWidget(SOM_3);
        ALASKA_3 = new QWidget();
        ALASKA_3->setObjectName(QString::fromUtf8("ALASKA_3"));
        outputProjection->addWidget(ALASKA_3);
        GOOD_3 = new QWidget();
        GOOD_3->setObjectName(QString::fromUtf8("GOOD_3"));
        outputProjection->addWidget(GOOD_3);
        MOLL_3 = new QWidget();
        MOLL_3->setObjectName(QString::fromUtf8("MOLL_3"));
        outputProjection->addWidget(MOLL_3);
        IMOLL_3 = new QWidget();
        IMOLL_3->setObjectName(QString::fromUtf8("IMOLL_3"));
        outputProjection->addWidget(IMOLL_3);
        HAMMER_3 = new QWidget();
        HAMMER_3->setObjectName(QString::fromUtf8("HAMMER_3"));
        horizontalLayoutWidget_39 = new QWidget(HAMMER_3);
        horizontalLayoutWidget_39->setObjectName(QString::fromUtf8("horizontalLayoutWidget_39"));
        horizontalLayoutWidget_39->setGeometry(QRect(10, 20, 431, 24));
        horizontalLayout_39 = new QHBoxLayout(horizontalLayoutWidget_39);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        horizontalLayout_39->setContentsMargins(0, 0, 0, 0);
        label_50 = new QLabel(horizontalLayoutWidget_39);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setFont(font3);

        horizontalLayout_39->addWidget(label_50);

        ALBERS_SMajor_4 = new QLineEdit(horizontalLayoutWidget_39);
        ALBERS_SMajor_4->setObjectName(QString::fromUtf8("ALBERS_SMajor_4"));
        ALBERS_SMajor_4->setFont(font);

        horizontalLayout_39->addWidget(ALBERS_SMajor_4);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_32);

        horizontalLayoutWidget_40 = new QWidget(HAMMER_3);
        horizontalLayoutWidget_40->setObjectName(QString::fromUtf8("horizontalLayoutWidget_40"));
        horizontalLayoutWidget_40->setGeometry(QRect(10, 50, 431, 24));
        horizontalLayout_40 = new QHBoxLayout(horizontalLayoutWidget_40);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        horizontalLayout_40->setContentsMargins(0, 0, 0, 0);
        label_51 = new QLabel(horizontalLayoutWidget_40);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setFont(font3);

        horizontalLayout_40->addWidget(label_51);

        ALBERS_SMajor_5 = new QLineEdit(horizontalLayoutWidget_40);
        ALBERS_SMajor_5->setObjectName(QString::fromUtf8("ALBERS_SMajor_5"));
        ALBERS_SMajor_5->setFont(font);

        horizontalLayout_40->addWidget(ALBERS_SMajor_5);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_40->addItem(horizontalSpacer_33);

        horizontalLayoutWidget_41 = new QWidget(HAMMER_3);
        horizontalLayoutWidget_41->setObjectName(QString::fromUtf8("horizontalLayoutWidget_41"));
        horizontalLayoutWidget_41->setGeometry(QRect(10, 80, 431, 24));
        horizontalLayout_50 = new QHBoxLayout(horizontalLayoutWidget_41);
        horizontalLayout_50->setObjectName(QString::fromUtf8("horizontalLayout_50"));
        horizontalLayout_50->setContentsMargins(0, 0, 0, 0);
        label_52 = new QLabel(horizontalLayoutWidget_41);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setFont(font3);

        horizontalLayout_50->addWidget(label_52);

        ALBERS_SMajor_6 = new QLineEdit(horizontalLayoutWidget_41);
        ALBERS_SMajor_6->setObjectName(QString::fromUtf8("ALBERS_SMajor_6"));
        ALBERS_SMajor_6->setFont(font);

        horizontalLayout_50->addWidget(ALBERS_SMajor_6);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_50->addItem(horizontalSpacer_34);

        horizontalLayoutWidget_42 = new QWidget(HAMMER_3);
        horizontalLayoutWidget_42->setObjectName(QString::fromUtf8("horizontalLayoutWidget_42"));
        horizontalLayoutWidget_42->setGeometry(QRect(10, 110, 431, 24));
        horizontalLayout_51 = new QHBoxLayout(horizontalLayoutWidget_42);
        horizontalLayout_51->setObjectName(QString::fromUtf8("horizontalLayout_51"));
        horizontalLayout_51->setContentsMargins(0, 0, 0, 0);
        label_53 = new QLabel(horizontalLayoutWidget_42);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setFont(font3);

        horizontalLayout_51->addWidget(label_53);

        ALBERS_SMajor_7 = new QLineEdit(horizontalLayoutWidget_42);
        ALBERS_SMajor_7->setObjectName(QString::fromUtf8("ALBERS_SMajor_7"));
        ALBERS_SMajor_7->setFont(font);

        horizontalLayout_51->addWidget(ALBERS_SMajor_7);

        horizontalSpacer_35 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_51->addItem(horizontalSpacer_35);

        outputProjection->addWidget(HAMMER_3);
        WAGIV_3 = new QWidget();
        WAGIV_3->setObjectName(QString::fromUtf8("WAGIV_3"));
        outputProjection->addWidget(WAGIV_3);
        WAGVII_3 = new QWidget();
        WAGVII_3->setObjectName(QString::fromUtf8("WAGVII_3"));
        outputProjection->addWidget(WAGVII_3);
        OBEQA_3 = new QWidget();
        OBEQA_3->setObjectName(QString::fromUtf8("OBEQA_3"));
        outputProjection->addWidget(OBEQA_3);
        USRDEF_3 = new QWidget();
        USRDEF_3->setObjectName(QString::fromUtf8("USRDEF_3"));
        outputProjection->addWidget(USRDEF_3);
        line_9 = new QFrame(outputProjections);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(151, 71, 20, 341));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(outputProjections);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(181, 91, 441, 20));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_38 = new QWidget(outputProjections);
        horizontalLayoutWidget_38->setObjectName(QString::fromUtf8("horizontalLayoutWidget_38"));
        horizontalLayoutWidget_38->setGeometry(QRect(171, 71, 461, 22));
        horizontalLayout_38 = new QHBoxLayout(horizontalLayoutWidget_38);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        horizontalLayout_38->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_30);

        label_47 = new QLabel(horizontalLayoutWidget_38);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setFont(font3);

        horizontalLayout_38->addWidget(label_47);

        outProjectionBox = new QComboBox(horizontalLayoutWidget_38);
        outProjectionBox->setObjectName(QString::fromUtf8("outProjectionBox"));

        horizontalLayout_38->addWidget(outProjectionBox);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_31);

        listPages_8 = new QListWidget(outputProjections);
        new QListWidgetItem(listPages_8);
        new QListWidgetItem(listPages_8);
        new QListWidgetItem(listPages_8);
        new QListWidgetItem(listPages_8);
        new QListWidgetItem(listPages_8);
        new QListWidgetItem(listPages_8);
        new QListWidgetItem(listPages_8);
        new QListWidgetItem(listPages_8);
        new QListWidgetItem(listPages_8);
        new QListWidgetItem(listPages_8);
        listPages_8->setObjectName(QString::fromUtf8("listPages_8"));
        listPages_8->setEnabled(false);
        listPages_8->setGeometry(QRect(11, 71, 151, 341));
        listPages_8->setFont(font);
        listPages_8->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QListWidget::item:selected, QListWidget::item:selected:active{\n"
"	background-color: rgba(71, 175, 255, 128);\n"
"	border: 1px solid rgba(71, 175, 255, 128);\n"
"}\n"
""));
        listPages_8->setFrameShape(QFrame::NoFrame);
        listPages_8->setFrameShadow(QFrame::Plain);
        listPages_8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages_8->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages_8->setAutoScroll(false);
        listPages_8->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listPages_8->setProperty("showDropIndicator", QVariant(false));
        listPages_8->setAlternatingRowColors(false);
        listPages_8->setSelectionBehavior(QAbstractItemView::SelectRows);
        listPages_8->setSpacing(6);
        listPages_8->setUniformItemSizes(true);
        listPages_8->setSelectionRectVisible(true);
        Heading_8 = new QFrame(outputProjections);
        Heading_8->setObjectName(QString::fromUtf8("Heading_8"));
        Heading_8->setGeometry(QRect(-1, -1, 642, 61));
        Heading_8->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        Heading_8->setFrameShape(QFrame::Box);
        Heading_8->setFrameShadow(QFrame::Plain);
        labelPageTitle_9 = new QLabel(Heading_8);
        labelPageTitle_9->setObjectName(QString::fromUtf8("labelPageTitle_9"));
        labelPageTitle_9->setGeometry(QRect(80, 10, 171, 20));
        labelPageTitle_9->setFont(font3);
        labelPageDesc_9 = new QLabel(Heading_8);
        labelPageDesc_9->setObjectName(QString::fromUtf8("labelPageDesc_9"));
        labelPageDesc_9->setGeometry(QRect(100, 30, 481, 21));
        labelPageDesc_9->setFont(font);
        labelPageDesc_9->setWordWrap(true);
        label_48 = new QLabel(Heading_8);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(20, 10, 46, 41));
        label_48->setPixmap(QPixmap(QString::fromUtf8(":/Images/tools-wizard256.png")));
        label_48->setScaledContents(true);
        mainWidget->addWidget(outputProjections);
        PreviewOutput = new QWidget();
        PreviewOutput->setObjectName(QString::fromUtf8("PreviewOutput"));
        Heading_4 = new QFrame(PreviewOutput);
        Heading_4->setObjectName(QString::fromUtf8("Heading_4"));
        Heading_4->setGeometry(QRect(-1, -1, 642, 61));
        Heading_4->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        Heading_4->setFrameShape(QFrame::Box);
        Heading_4->setFrameShadow(QFrame::Plain);
        labelPageTitle_4 = new QLabel(Heading_4);
        labelPageTitle_4->setObjectName(QString::fromUtf8("labelPageTitle_4"));
        labelPageTitle_4->setGeometry(QRect(80, 10, 171, 20));
        labelPageTitle_4->setFont(font3);
        labelPageDesc_4 = new QLabel(Heading_4);
        labelPageDesc_4->setObjectName(QString::fromUtf8("labelPageDesc_4"));
        labelPageDesc_4->setGeometry(QRect(100, 30, 471, 21));
        labelPageDesc_4->setFont(font);
        labelPageDesc_4->setWordWrap(true);
        label_8 = new QLabel(Heading_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 10, 46, 41));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/Images/tools-wizard256.png")));
        label_8->setScaledContents(true);
        listPages_4 = new QListWidget(PreviewOutput);
        new QListWidgetItem(listPages_4);
        new QListWidgetItem(listPages_4);
        new QListWidgetItem(listPages_4);
        new QListWidgetItem(listPages_4);
        new QListWidgetItem(listPages_4);
        new QListWidgetItem(listPages_4);
        new QListWidgetItem(listPages_4);
        new QListWidgetItem(listPages_4);
        new QListWidgetItem(listPages_4);
        new QListWidgetItem(listPages_4);
        listPages_4->setObjectName(QString::fromUtf8("listPages_4"));
        listPages_4->setEnabled(false);
        listPages_4->setGeometry(QRect(10, 70, 151, 341));
        listPages_4->setFont(font);
        listPages_4->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QListWidget::item:selected, QListWidget::item:selected:active{\n"
"	background-color: rgba(71, 175, 255, 128);\n"
"	border: 1px solid rgba(71, 175, 255, 128);\n"
"}\n"
""));
        listPages_4->setFrameShape(QFrame::NoFrame);
        listPages_4->setFrameShadow(QFrame::Plain);
        listPages_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages_4->setAutoScroll(false);
        listPages_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listPages_4->setProperty("showDropIndicator", QVariant(false));
        listPages_4->setAlternatingRowColors(false);
        listPages_4->setSelectionBehavior(QAbstractItemView::SelectRows);
        listPages_4->setSpacing(6);
        listPages_4->setUniformItemSizes(true);
        listPages_4->setSelectionRectVisible(true);
        line_4 = new QFrame(PreviewOutput);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(150, 70, 20, 341));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        mainWidget->addWidget(PreviewOutput);
        ReprojectSave = new QWidget();
        ReprojectSave->setObjectName(QString::fromUtf8("ReprojectSave"));
        Heading_5 = new QFrame(ReprojectSave);
        Heading_5->setObjectName(QString::fromUtf8("Heading_5"));
        Heading_5->setGeometry(QRect(-1, -1, 642, 61));
        Heading_5->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        Heading_5->setFrameShape(QFrame::Box);
        Heading_5->setFrameShadow(QFrame::Plain);
        labelPageTitle_5 = new QLabel(Heading_5);
        labelPageTitle_5->setObjectName(QString::fromUtf8("labelPageTitle_5"));
        labelPageTitle_5->setGeometry(QRect(80, 10, 171, 20));
        labelPageTitle_5->setFont(font3);
        labelPageDesc_5 = new QLabel(Heading_5);
        labelPageDesc_5->setObjectName(QString::fromUtf8("labelPageDesc_5"));
        labelPageDesc_5->setGeometry(QRect(100, 30, 471, 21));
        labelPageDesc_5->setFont(font);
        labelPageDesc_5->setWordWrap(true);
        label_9 = new QLabel(Heading_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 10, 46, 41));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/Images/tools-wizard256.png")));
        label_9->setScaledContents(true);
        listPages_5 = new QListWidget(ReprojectSave);
        new QListWidgetItem(listPages_5);
        new QListWidgetItem(listPages_5);
        new QListWidgetItem(listPages_5);
        new QListWidgetItem(listPages_5);
        new QListWidgetItem(listPages_5);
        new QListWidgetItem(listPages_5);
        new QListWidgetItem(listPages_5);
        new QListWidgetItem(listPages_5);
        new QListWidgetItem(listPages_5);
        new QListWidgetItem(listPages_5);
        listPages_5->setObjectName(QString::fromUtf8("listPages_5"));
        listPages_5->setEnabled(false);
        listPages_5->setGeometry(QRect(10, 70, 151, 341));
        listPages_5->setFont(font);
        listPages_5->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QListWidget::item:selected, QListWidget::item:selected:active{\n"
"	background-color: rgba(71, 175, 255, 128);\n"
"	border: 1px solid rgba(71, 175, 255, 128);\n"
"}\n"
""));
        listPages_5->setFrameShape(QFrame::NoFrame);
        listPages_5->setFrameShadow(QFrame::Plain);
        listPages_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages_5->setAutoScroll(false);
        listPages_5->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listPages_5->setProperty("showDropIndicator", QVariant(false));
        listPages_5->setAlternatingRowColors(false);
        listPages_5->setSelectionBehavior(QAbstractItemView::SelectRows);
        listPages_5->setSpacing(6);
        listPages_5->setUniformItemSizes(true);
        listPages_5->setSelectionRectVisible(true);
        line_5 = new QFrame(ReprojectSave);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(150, 70, 20, 341));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        groupBox_2 = new QGroupBox(ReprojectSave);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(180, 140, 441, 271));
        groupBox_2->setFont(font);
        dirView_2 = new QTreeView(groupBox_2);
        dirView_2->setObjectName(QString::fromUtf8("dirView_2"));
        dirView_2->setGeometry(QRect(10, 20, 421, 241));
        dirView_2->header()->setVisible(false);
        dirView_2->header()->setDefaultSectionSize(200);
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(0, -60, 431, 71));
        mainWidget->addWidget(ReprojectSave);
        Finish = new QWidget();
        Finish->setObjectName(QString::fromUtf8("Finish"));
        Heading_6 = new QFrame(Finish);
        Heading_6->setObjectName(QString::fromUtf8("Heading_6"));
        Heading_6->setGeometry(QRect(-1, -1, 642, 61));
        Heading_6->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        Heading_6->setFrameShape(QFrame::Box);
        Heading_6->setFrameShadow(QFrame::Plain);
        labelPageTitle_6 = new QLabel(Heading_6);
        labelPageTitle_6->setObjectName(QString::fromUtf8("labelPageTitle_6"));
        labelPageTitle_6->setGeometry(QRect(80, 10, 171, 20));
        labelPageTitle_6->setFont(font3);
        labelPageDesc_6 = new QLabel(Heading_6);
        labelPageDesc_6->setObjectName(QString::fromUtf8("labelPageDesc_6"));
        labelPageDesc_6->setGeometry(QRect(100, 30, 471, 21));
        labelPageDesc_6->setFont(font);
        labelPageDesc_6->setWordWrap(true);
        label_10 = new QLabel(Heading_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 10, 46, 41));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/Images/tools-wizard256.png")));
        label_10->setScaledContents(true);
        listPages_6 = new QListWidget(Finish);
        new QListWidgetItem(listPages_6);
        new QListWidgetItem(listPages_6);
        new QListWidgetItem(listPages_6);
        new QListWidgetItem(listPages_6);
        new QListWidgetItem(listPages_6);
        new QListWidgetItem(listPages_6);
        new QListWidgetItem(listPages_6);
        new QListWidgetItem(listPages_6);
        new QListWidgetItem(listPages_6);
        new QListWidgetItem(listPages_6);
        listPages_6->setObjectName(QString::fromUtf8("listPages_6"));
        listPages_6->setEnabled(false);
        listPages_6->setGeometry(QRect(10, 70, 151, 341));
        listPages_6->setFont(font);
        listPages_6->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QListWidget::item:selected, QListWidget::item:selected:active{\n"
"	background-color: rgba(71, 175, 255, 128);\n"
"	border: 1px solid rgba(71, 175, 255, 128);\n"
"}\n"
""));
        listPages_6->setFrameShape(QFrame::NoFrame);
        listPages_6->setFrameShadow(QFrame::Plain);
        listPages_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages_6->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages_6->setAutoScroll(false);
        listPages_6->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listPages_6->setProperty("showDropIndicator", QVariant(false));
        listPages_6->setAlternatingRowColors(false);
        listPages_6->setSelectionBehavior(QAbstractItemView::SelectRows);
        listPages_6->setSpacing(6);
        listPages_6->setUniformItemSizes(true);
        listPages_6->setSelectionRectVisible(true);
        line_6 = new QFrame(Finish);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(150, 70, 20, 341));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_19 = new QLabel(Finish);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(180, 80, 431, 31));
        label_19->setFont(font);
        label_19->setWordWrap(true);
        horizontalLayoutWidget_13 = new QWidget(Finish);
        horizontalLayoutWidget_13->setObjectName(QString::fromUtf8("horizontalLayoutWidget_13"));
        horizontalLayoutWidget_13->setGeometry(QRect(172, 180, 451, 152));
        horizontalLayout_12 = new QHBoxLayout(horizontalLayoutWidget_13);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(horizontalLayoutWidget_13);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMaximumSize(QSize(150, 150));
        QFont font4;
        font4.setPointSize(20);
        label_20->setFont(font4);
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/Images/dialog-apply.png")));
        label_20->setScaledContents(true);

        horizontalLayout_12->addWidget(label_20);

        label_21 = new QLabel(horizontalLayoutWidget_13);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(true);
        font5.setWeight(75);
        label_21->setFont(font5);
        label_21->setWordWrap(true);

        horizontalLayout_12->addWidget(label_21);

        progressBar = new QProgressBar(Finish);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(180, 390, 441, 21));
        progressBar->setValue(24);
        mainWidget->addWidget(Finish);
        Wizard->setCentralWidget(centralWidget);
        menubar = new QMenuBar(Wizard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 21));
        menubar->setFont(font);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        Wizard->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_Reprojection);
        menuFile->addSeparator();
        menuFile->addAction(actionSelection_Screen);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuOptions->addAction(actionLoad_Projection_Info);
        menuOptions->addAction(actionSave_Projection_Info);
        menuOptions->addSeparator();
        menuOptions->addAction(actionToggle_Preview);
        menuHelp->addAction(actionEdit_Author);
        menuHelp->addAction(actionUser_Guide);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_dRasterBlaster);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(Wizard);

        mainWidget->setCurrentIndex(6);
        navigationMenu->setCurrentRow(3);
        listPages_2->setCurrentRow(4);
        pixelUnits->setCurrentIndex(0);
        pixelType->setCurrentIndex(0);
        listPages_7->setCurrentRow(4);
        inputProjection->setCurrentIndex(0);
        inputProjectionBox->setCurrentIndex(0);
        listPages_3->setCurrentRow(5);
        outPixelType->setCurrentIndex(0);
        outPixelUnits->setCurrentIndex(0);
        outputProjection->setCurrentIndex(27);
        outProjectionBox->setCurrentIndex(0);
        listPages_8->setCurrentRow(5);
        listPages_4->setCurrentRow(6);
        listPages_5->setCurrentRow(7);
        listPages_6->setCurrentRow(8);


        QMetaObject::connectSlotsByName(Wizard);
    } // setupUi

    void retranslateUi(QMainWindow *Wizard)
    {
        Wizard->setWindowTitle(QApplication::translate("Wizard", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("Wizard", "Open", 0, QApplication::UnicodeUTF8));
        actionSave_Reprojection->setText(QApplication::translate("Wizard", "Save Reprojection", 0, QApplication::UnicodeUTF8));
        actionSelection_Screen->setText(QApplication::translate("Wizard", "Selection Screen", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("Wizard", "Exit", 0, QApplication::UnicodeUTF8));
        actionLoad_Projection_Info->setText(QApplication::translate("Wizard", "Load Projection Info", 0, QApplication::UnicodeUTF8));
        actionSave_Projection_Info->setText(QApplication::translate("Wizard", "Save Projection Info", 0, QApplication::UnicodeUTF8));
        actionToggle_Preview->setText(QApplication::translate("Wizard", "Toggle Preview", 0, QApplication::UnicodeUTF8));
        actionEdit_Author->setText(QApplication::translate("Wizard", "Edit Author Info", 0, QApplication::UnicodeUTF8));
        actionUser_Guide->setText(QApplication::translate("Wizard", "User Guide", 0, QApplication::UnicodeUTF8));
        actionAbout_dRasterBlaster->setText(QApplication::translate("Wizard", "About dRasterBlaster", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("Wizard", "About Qt", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("Wizard", "< Back", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("Wizard", "Cancel", 0, QApplication::UnicodeUTF8));
        btnNext->setText(QApplication::translate("Wizard", "Next >", 0, QApplication::UnicodeUTF8));
        Header->setText(QApplication::translate("Wizard", "Welcome to         Raster Wizard", 0, QApplication::UnicodeUTF8));
        subHeader->setText(QApplication::translate("Wizard", "This will guide you to reprojecting a raster.", 0, QApplication::UnicodeUTF8));
        basicInstruction->setText(QApplication::translate("Wizard", "Click next, to Continue...", 0, QApplication::UnicodeUTF8));
        magicHat->setText(QString());
        pageTitle->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        simpleDescription->setText(QApplication::translate("Wizard", "Select the raster to open", 0, QApplication::UnicodeUTF8));
        smallMagicHat->setText(QString());
        detailedDescription->setText(QApplication::translate("Wizard", "TextLabel", 0, QApplication::UnicodeUTF8));
        selectFile->setTitle(QApplication::translate("Wizard", "Select File", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = navigationMenu->isSortingEnabled();
        navigationMenu->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = navigationMenu->item(2);
        ___qlistwidgetitem->setText(QApplication::translate("Wizard", "Welcome", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = navigationMenu->item(3);
        ___qlistwidgetitem1->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = navigationMenu->item(4);
        ___qlistwidgetitem2->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = navigationMenu->item(5);
        ___qlistwidgetitem3->setText(QApplication::translate("Wizard", "Select Output Options", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = navigationMenu->item(6);
        ___qlistwidgetitem4->setText(QApplication::translate("Wizard", "Preview Output", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = navigationMenu->item(7);
        ___qlistwidgetitem5->setText(QApplication::translate("Wizard", "Reproject and Save", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem6 = navigationMenu->item(8);
        ___qlistwidgetitem6->setText(QApplication::translate("Wizard", "Finish", 0, QApplication::UnicodeUTF8));
        navigationMenu->setSortingEnabled(__sortingEnabled);

        labelPageTitle_2->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        simpleDescription_2->setText(QApplication::translate("Wizard", "Review the current input parameters and change anything that may need changed", 0, QApplication::UnicodeUTF8));
        smallMagicHat_2->setText(QString());

        const bool __sortingEnabled1 = listPages_2->isSortingEnabled();
        listPages_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem7 = listPages_2->item(2);
        ___qlistwidgetitem7->setText(QApplication::translate("Wizard", "Welcome", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem8 = listPages_2->item(3);
        ___qlistwidgetitem8->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem9 = listPages_2->item(4);
        ___qlistwidgetitem9->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem10 = listPages_2->item(5);
        ___qlistwidgetitem10->setText(QApplication::translate("Wizard", "Select Output Options", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem11 = listPages_2->item(6);
        ___qlistwidgetitem11->setText(QApplication::translate("Wizard", "Preview Output", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem12 = listPages_2->item(7);
        ___qlistwidgetitem12->setText(QApplication::translate("Wizard", "Reproject and Save", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem13 = listPages_2->item(8);
        ___qlistwidgetitem13->setText(QApplication::translate("Wizard", "Finish", 0, QApplication::UnicodeUTF8));
        listPages_2->setSortingEnabled(__sortingEnabled1);

        label_13->setText(QApplication::translate("Wizard", "Many of these inputs will not need changed. If you are unsure, either hover over an item for more details or click 'Next' to continue through the Wizard.", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Wizard", "Rows", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Wizard", "Columns", 0, QApplication::UnicodeUTF8));
        labelSheroid_2->setText(QApplication::translate("Wizard", "Sheroid", 0, QApplication::UnicodeUTF8));
        sheroid->clear();
        sheroid->insertItems(0, QStringList()
         << QApplication::translate("Wizard", "Clarke 1866", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Clarke 1880", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Bessel", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "International 1967", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "International 1909", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "WGS 72", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Everest", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "WGS 66", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "GRS 1980", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Airy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Modified Everest", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Modified Airy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "WGS 84", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Southeast Asia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Australian National", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Krassovsky", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Hough", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Mercury 1960", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Modified Mercury 1968", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Earth", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Bessel 1841 Namibia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Everest Sabah", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Everest India 1956", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Everest Malaysia 1969", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Everest Malay 1948", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Everest Pakistan", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Hayford", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Helmert 1906", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Indonesian 1974", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "South American 1969", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "WGS 60", 0, QApplication::UnicodeUTF8)
        );
        label_14->setText(QApplication::translate("Wizard", "Pixel Size", 0, QApplication::UnicodeUTF8));
        pixelUnits->clear();
        pixelUnits->insertItems(0, QStringList()
         << QApplication::translate("Wizard", "Meter(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Arcsecond(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Arcminute(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Degree(s)", 0, QApplication::UnicodeUTF8)
        );
        labelPixelType_2->setText(QApplication::translate("Wizard", "Pixel Type", 0, QApplication::UnicodeUTF8));
        pixelType->clear();
        pixelType->insertItems(0, QStringList()
         << QApplication::translate("Wizard", "Unspecified Type", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Unsigned 8-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Unsigned 16-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Signed 16-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Unsigned 32-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Signed 32-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "32-Bit IEEE Float", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "64-Bit IEEE Float", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Complex Int16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Complex Int32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Complex Float32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Complex Float64", 0, QApplication::UnicodeUTF8)
        );
        labelULlat_2->setText(QApplication::translate("Wizard", "UL Latitude", 0, QApplication::UnicodeUTF8));
        labelULlat_3->setText(QApplication::translate("Wizard", "UL Longitude", 0, QApplication::UnicodeUTF8));
        labelFillValue_2->setText(QApplication::translate("Wizard", "Fill Value", 0, QApplication::UnicodeUTF8));
        fillEnable->setText(QString());
        labelNoDataValue_2->setText(QApplication::translate("Wizard", "No Data Value", 0, QApplication::UnicodeUTF8));
        noDataValueEnable->setText(QString());
        labelNoDataValue_3->setText(QApplication::translate("Wizard", "Band Count", 0, QApplication::UnicodeUTF8));
        labelPageTitle_7->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        labelPageDesc_7->setText(QApplication::translate("Wizard", "Review the current input parameters and change anything that may need changed", 0, QApplication::UnicodeUTF8));
        label_15->setText(QString());

        const bool __sortingEnabled2 = listPages_7->isSortingEnabled();
        listPages_7->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem14 = listPages_7->item(2);
        ___qlistwidgetitem14->setText(QApplication::translate("Wizard", "Welcome", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem15 = listPages_7->item(3);
        ___qlistwidgetitem15->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem16 = listPages_7->item(4);
        ___qlistwidgetitem16->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem17 = listPages_7->item(5);
        ___qlistwidgetitem17->setText(QApplication::translate("Wizard", "Select Output Options", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem18 = listPages_7->item(6);
        ___qlistwidgetitem18->setText(QApplication::translate("Wizard", "Preview Output", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem19 = listPages_7->item(7);
        ___qlistwidgetitem19->setText(QApplication::translate("Wizard", "Reproject and Save", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem20 = listPages_7->item(8);
        ___qlistwidgetitem20->setText(QApplication::translate("Wizard", "Finish", 0, QApplication::UnicodeUTF8));
        listPages_7->setSortingEnabled(__sortingEnabled2);

        label_16->setText(QApplication::translate("Wizard", "Semi-Major axis of Ellipsoid.", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Wizard", "Semi-Minor axis of Ellipsoid", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Wizard", "Latitude of the first standard parallel", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("Wizard", "Latitude of the second standard parallel", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("Wizard", "Longitude of the Central Meridan", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("Wizard", "Latitude of the projection origin", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("Wizard", "False Easting", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("Wizard", "False Northing", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("Wizard", "Projection:", 0, QApplication::UnicodeUTF8));
        inputProjectionBox->clear();
        inputProjectionBox->insertItems(0, QStringList()
         << QApplication::translate("Wizard", "Geographic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Universal Transverse Mercator (UTM)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "State Plane Coordinates", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Albers Conical Equal Area", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Lambert Conformal Conic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Mercator", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Polar Stereographic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Polyconic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Equidistant Conic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Transverse Mercator", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Stereographic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Lambert Azimuthal Equal Area", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Azimuthal Equidistant", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Gnomonic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Orthographic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "General Vertical Near-Side Perspective", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Sinusoidal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Equirectangular", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "MillerCylindrical", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Van der Grinten", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "(Hotine) Oblique Mercator", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Robinson", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Space Oblique Mercator (SOM)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Alaska Conformal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Interrupted Goode Homolosine", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Mollweide", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Interrupted Mollweide", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Hammer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Wagner IV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Wagner VII", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Oblated Equal Area", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "User Defined", 0, QApplication::UnicodeUTF8)
        );

        const bool __sortingEnabled3 = listPages_3->isSortingEnabled();
        listPages_3->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem21 = listPages_3->item(2);
        ___qlistwidgetitem21->setText(QApplication::translate("Wizard", "Welcome", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem22 = listPages_3->item(3);
        ___qlistwidgetitem22->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem23 = listPages_3->item(4);
        ___qlistwidgetitem23->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem24 = listPages_3->item(5);
        ___qlistwidgetitem24->setText(QApplication::translate("Wizard", "Select Output Options", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem25 = listPages_3->item(6);
        ___qlistwidgetitem25->setText(QApplication::translate("Wizard", "Preview Output", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem26 = listPages_3->item(7);
        ___qlistwidgetitem26->setText(QApplication::translate("Wizard", "Reproject and Save", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem27 = listPages_3->item(8);
        ___qlistwidgetitem27->setText(QApplication::translate("Wizard", "Finish", 0, QApplication::UnicodeUTF8));
        listPages_3->setSortingEnabled(__sortingEnabled3);

        labelPageTitle_3->setText(QApplication::translate("Wizard", "Select Output Options", 0, QApplication::UnicodeUTF8));
        labelPageDesc_3->setText(QApplication::translate("Wizard", "Select the output options you would like to reproject with", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        label_57->setText(QApplication::translate("Wizard", "Rows", 0, QApplication::UnicodeUTF8));
        labelPixelType_4->setText(QApplication::translate("Wizard", "Pixel Type", 0, QApplication::UnicodeUTF8));
        outPixelType->clear();
        outPixelType->insertItems(0, QStringList()
         << QApplication::translate("Wizard", "Unspecified Type", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Unsigned 8-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Unsigned 16-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Signed 16-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Unsigned 32-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Signed 32-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "32-Bit IEEE Float", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "64-Bit IEEE Float", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Complex Int16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Complex Int32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Complex Float32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Complex Float64", 0, QApplication::UnicodeUTF8)
        );
        labelNoDataValue_6->setText(QApplication::translate("Wizard", "Band Count", 0, QApplication::UnicodeUTF8));
        labelULlat_6->setText(QApplication::translate("Wizard", "UL Latitude", 0, QApplication::UnicodeUTF8));
        labelFillValue_4->setText(QApplication::translate("Wizard", "Fill Value", 0, QApplication::UnicodeUTF8));
        outfillEnable->setText(QString());
        labelNoDataValue_7->setText(QApplication::translate("Wizard", "No Data Value", 0, QApplication::UnicodeUTF8));
        outNoDataValueEnable->setText(QString());
        labelULlat_7->setText(QApplication::translate("Wizard", "UL Longitude", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("Wizard", "Pixel Size", 0, QApplication::UnicodeUTF8));
        outPixelUnits->clear();
        outPixelUnits->insertItems(0, QStringList()
         << QApplication::translate("Wizard", "Meter(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Arcsecond(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Arcminute(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Degree(s)", 0, QApplication::UnicodeUTF8)
        );
        labelSheroid_4->setText(QApplication::translate("Wizard", "Sheroid", 0, QApplication::UnicodeUTF8));
        outSheroid->clear();
        outSheroid->insertItems(0, QStringList()
         << QApplication::translate("Wizard", "Clarke 1866", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Clarke 1880", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Bessel", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "International 1967", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "International 1909", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "WGS 72", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Everest", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "WGS 66", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "GRS 1980", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Airy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Modified Everest", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Modified Airy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "WGS 84", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Southeast Asia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Australian National", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Krassovsky", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Hough", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Mercury 1960", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Modified Mercury 1968", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Earth", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Bessel 1841 Namibia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Everest Sabah", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Everest India 1956", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Everest Malaysia 1969", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Everest Malay 1948", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Everest Pakistan", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Hayford", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Helmert 1906", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Indonesian 1974", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "South American 1969", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "WGS 60", 0, QApplication::UnicodeUTF8)
        );
        label_59->setText(QApplication::translate("Wizard", "Columns", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("Wizard", "Many of these inputs will not need changed. If you are unsure, either hover over an item for more details or click 'Next' to continue through the Wizard.", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("Wizard", "Semi-Major axis of Ellipsoid.", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("Wizard", "Semi-Minor axis of Ellipsoid", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("Wizard", "Latitude of the first standard parallel", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("Wizard", "Latitude of the second standard parallel", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("Wizard", "Longitude of the Central Meridan", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("Wizard", "Latitude of the projection origin", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("Wizard", "False Easting", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("Wizard", "False Northing", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("Wizard", "Radius of reference sphere", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("Wizard", "Longitude of the Central Meridian", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("Wizard", "False Easting", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("Wizard", "False Northing", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("Wizard", "Projection:", 0, QApplication::UnicodeUTF8));
        outProjectionBox->clear();
        outProjectionBox->insertItems(0, QStringList()
         << QApplication::translate("Wizard", "Geographic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Universal Transverse Mercator (UTM)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "State Plane Coordinates", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Albers Conical Equal Area", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Lambert Conformal Conic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Mercator", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Polar Stereographic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Polyconic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Equidistant Conic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Transverse Mercator", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Stereographic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Lambert Azimuthal Equal Area", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Azimuthal Equidistant", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Gnomonic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Orthographic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "General Vertical Near-Side Perspective", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Sinusoidal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Equirectangular", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "MillerCylindrical", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Van der Grinten", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "(Hotine) Oblique Mercator", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Robinson", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Space Oblique Mercator (SOM)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Alaska Conformal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Interrupted Goode Homolosine", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Mollweide", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Interrupted Mollweide", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Hammer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Wagner IV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Wagner VII", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Oblated Equal Area", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "User Defined", 0, QApplication::UnicodeUTF8)
        );

        const bool __sortingEnabled4 = listPages_8->isSortingEnabled();
        listPages_8->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem28 = listPages_8->item(2);
        ___qlistwidgetitem28->setText(QApplication::translate("Wizard", "Welcome", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem29 = listPages_8->item(3);
        ___qlistwidgetitem29->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem30 = listPages_8->item(4);
        ___qlistwidgetitem30->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem31 = listPages_8->item(5);
        ___qlistwidgetitem31->setText(QApplication::translate("Wizard", "Select Output Options", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem32 = listPages_8->item(6);
        ___qlistwidgetitem32->setText(QApplication::translate("Wizard", "Preview Output", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem33 = listPages_8->item(7);
        ___qlistwidgetitem33->setText(QApplication::translate("Wizard", "Reproject and Save", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem34 = listPages_8->item(8);
        ___qlistwidgetitem34->setText(QApplication::translate("Wizard", "Finish", 0, QApplication::UnicodeUTF8));
        listPages_8->setSortingEnabled(__sortingEnabled4);

        labelPageTitle_9->setText(QApplication::translate("Wizard", "Select Ouput Projection", 0, QApplication::UnicodeUTF8));
        labelPageDesc_9->setText(QApplication::translate("Wizard", "Review the current input parameters and change anything that may need changed", 0, QApplication::UnicodeUTF8));
        label_48->setText(QString());
        labelPageTitle_4->setText(QApplication::translate("Wizard", "Preview Output", 0, QApplication::UnicodeUTF8));
        labelPageDesc_4->setText(QApplication::translate("Wizard", "Below will show a preview output based on the options selected in previous pages", 0, QApplication::UnicodeUTF8));
        label_8->setText(QString());

        const bool __sortingEnabled5 = listPages_4->isSortingEnabled();
        listPages_4->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem35 = listPages_4->item(2);
        ___qlistwidgetitem35->setText(QApplication::translate("Wizard", "Welcome", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem36 = listPages_4->item(3);
        ___qlistwidgetitem36->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem37 = listPages_4->item(4);
        ___qlistwidgetitem37->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem38 = listPages_4->item(5);
        ___qlistwidgetitem38->setText(QApplication::translate("Wizard", "Select Output Options", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem39 = listPages_4->item(6);
        ___qlistwidgetitem39->setText(QApplication::translate("Wizard", "Preview Output", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem40 = listPages_4->item(7);
        ___qlistwidgetitem40->setText(QApplication::translate("Wizard", "Reproject and Save", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem41 = listPages_4->item(8);
        ___qlistwidgetitem41->setText(QApplication::translate("Wizard", "Finish", 0, QApplication::UnicodeUTF8));
        listPages_4->setSortingEnabled(__sortingEnabled5);

        labelPageTitle_5->setText(QApplication::translate("Wizard", "Reproject and Save", 0, QApplication::UnicodeUTF8));
        labelPageDesc_5->setText(QApplication::translate("Wizard", "Assuming the preview was alright, select a place to save the reprojection", 0, QApplication::UnicodeUTF8));
        label_9->setText(QString());

        const bool __sortingEnabled6 = listPages_5->isSortingEnabled();
        listPages_5->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem42 = listPages_5->item(2);
        ___qlistwidgetitem42->setText(QApplication::translate("Wizard", "Welcome", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem43 = listPages_5->item(3);
        ___qlistwidgetitem43->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem44 = listPages_5->item(4);
        ___qlistwidgetitem44->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem45 = listPages_5->item(5);
        ___qlistwidgetitem45->setText(QApplication::translate("Wizard", "Select Output Options", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem46 = listPages_5->item(6);
        ___qlistwidgetitem46->setText(QApplication::translate("Wizard", "Preview Output", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem47 = listPages_5->item(7);
        ___qlistwidgetitem47->setText(QApplication::translate("Wizard", "Reproject and Save", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem48 = listPages_5->item(8);
        ___qlistwidgetitem48->setText(QApplication::translate("Wizard", "Finish", 0, QApplication::UnicodeUTF8));
        listPages_5->setSortingEnabled(__sortingEnabled6);

        groupBox_2->setTitle(QApplication::translate("Wizard", "Select Place to Save", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Wizard", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelPageTitle_6->setText(QApplication::translate("Wizard", "Finished", 0, QApplication::UnicodeUTF8));
        labelPageDesc_6->setText(QApplication::translate("Wizard", "Raster has been successfully reprojected", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());

        const bool __sortingEnabled7 = listPages_6->isSortingEnabled();
        listPages_6->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem49 = listPages_6->item(2);
        ___qlistwidgetitem49->setText(QApplication::translate("Wizard", "Welcome", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem50 = listPages_6->item(3);
        ___qlistwidgetitem50->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem51 = listPages_6->item(4);
        ___qlistwidgetitem51->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem52 = listPages_6->item(5);
        ___qlistwidgetitem52->setText(QApplication::translate("Wizard", "Select Output Options", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem53 = listPages_6->item(6);
        ___qlistwidgetitem53->setText(QApplication::translate("Wizard", "Preview Output", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem54 = listPages_6->item(7);
        ___qlistwidgetitem54->setText(QApplication::translate("Wizard", "Reproject and Save", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem55 = listPages_6->item(8);
        ___qlistwidgetitem55->setText(QApplication::translate("Wizard", "Finish", 0, QApplication::UnicodeUTF8));
        listPages_6->setSortingEnabled(__sortingEnabled7);

        label_19->setText(QApplication::translate("Wizard", "Success! The raster has been successfully reprojected. You may now click 'Finish'", 0, QApplication::UnicodeUTF8));
        label_20->setText(QString());
        label_21->setText(QApplication::translate("Wizard", "File Name", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("Wizard", "File", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("Wizard", "Options", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("Wizard", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Wizard: public Ui_Wizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARD_H
