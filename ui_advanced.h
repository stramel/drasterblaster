/********************************************************************************
** Form generated from reading UI file 'advanced.ui'
**
** Created: Wed May 9 11:44:30 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCED_H
#define UI_ADVANCED_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Advanced
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
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *hLayoutTitle;
    QLabel *ReprojectionInformation;
    QSpacerItem *horizontalSpacer;
    QCheckBox *editInputParams;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *hLayoutStatus;
    QLabel *labelStatus;
    QSpacerItem *horizontalSpacer_5;
    QProgressBar *progressBar;
    QTabWidget *tabWidget;
    QWidget *tabRasterInfo;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *hLayoutFile;
    QLabel *labelFileName;
    QLabel *fileName;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *hLayoutRowCol;
    QLabel *labelRows;
    QLineEdit *Rows;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelCols;
    QLineEdit *Cols;
    QSpacerItem *horizontalSpacer_7;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *hLayoutPixels;
    QLabel *labelPixelSize;
    QLineEdit *pixelSize;
    QComboBox *pixelUnits;
    QSpacerItem *horizontalSpacer_8;
    QLabel *labelPixelType;
    QComboBox *pixelType;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *hLayoutFill;
    QLabel *labelFillValue;
    QCheckBox *fillEnable;
    QLineEdit *FillValue;
    QSpacerItem *horizontalSpacer_3;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *hLayoutNoData;
    QLabel *labelNoDataValue;
    QCheckBox *noDataValueEnable;
    QLineEdit *noDataValue;
    QSpacerItem *horizontalSpacer_4;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *hLayoutSheroid;
    QLabel *labelSheroid;
    QComboBox *sheroidSelector;
    QSpacerItem *horizontalSpacer_6;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *hLayoutUL;
    QLabel *labelULlat;
    QLineEdit *Latitude;
    QSpacerItem *horizontalSpacer_9;
    QLabel *labelULlon;
    QLineEdit *Longitude;
    QSpacerItem *horizontalSpacer_10;
    QWidget *tabProjectionInfo;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOptions;
    QMenu *menuHelp;

    void setupUi(QMainWindow *Advanced)
    {
        if (Advanced->objectName().isEmpty())
            Advanced->setObjectName(QString::fromUtf8("Advanced"));
        Advanced->resize(640, 480);
        actionOpen = new QAction(Advanced);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/document-open-516.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        QFont font;
        font.setPointSize(10);
        actionOpen->setFont(font);
        actionSave_Reprojection = new QAction(Advanced);
        actionSave_Reprojection->setObjectName(QString::fromUtf8("actionSave_Reprojection"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/document-save-516.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Reprojection->setIcon(icon1);
        actionSave_Reprojection->setFont(font);
        actionSelection_Screen = new QAction(Advanced);
        actionSelection_Screen->setObjectName(QString::fromUtf8("actionSelection_Screen"));
        actionSelection_Screen->setFont(font);
        actionExit = new QAction(Advanced);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/document-close-316.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        actionExit->setFont(font);
        actionLoad_Projection_Info = new QAction(Advanced);
        actionLoad_Projection_Info->setObjectName(QString::fromUtf8("actionLoad_Projection_Info"));
        actionLoad_Projection_Info->setFont(font);
        actionSave_Projection_Info = new QAction(Advanced);
        actionSave_Projection_Info->setObjectName(QString::fromUtf8("actionSave_Projection_Info"));
        actionSave_Projection_Info->setFont(font);
        actionToggle_Preview = new QAction(Advanced);
        actionToggle_Preview->setObjectName(QString::fromUtf8("actionToggle_Preview"));
        actionToggle_Preview->setFont(font);
        actionEdit_Author = new QAction(Advanced);
        actionEdit_Author->setObjectName(QString::fromUtf8("actionEdit_Author"));
        actionEdit_Author->setFont(font);
        actionUser_Guide = new QAction(Advanced);
        actionUser_Guide->setObjectName(QString::fromUtf8("actionUser_Guide"));
        actionUser_Guide->setFont(font);
        actionAbout_dRasterBlaster = new QAction(Advanced);
        actionAbout_dRasterBlaster->setObjectName(QString::fromUtf8("actionAbout_dRasterBlaster"));
        actionAbout_dRasterBlaster->setFont(font);
        actionAbout_Qt = new QAction(Advanced);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionAbout_Qt->setFont(font);
        centralwidget = new QWidget(Advanced);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 621, 51));
        hLayoutTitle = new QHBoxLayout(horizontalLayoutWidget);
        hLayoutTitle->setObjectName(QString::fromUtf8("hLayoutTitle"));
        hLayoutTitle->setContentsMargins(0, 0, 0, 0);
        ReprojectionInformation = new QLabel(horizontalLayoutWidget);
        ReprojectionInformation->setObjectName(QString::fromUtf8("ReprojectionInformation"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        ReprojectionInformation->setFont(font1);

        hLayoutTitle->addWidget(ReprojectionInformation);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutTitle->addItem(horizontalSpacer);

        editInputParams = new QCheckBox(horizontalLayoutWidget);
        editInputParams->setObjectName(QString::fromUtf8("editInputParams"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        editInputParams->setFont(font2);

        hLayoutTitle->addWidget(editInputParams);

        horizontalLayoutWidget_7 = new QWidget(centralwidget);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(20, 430, 611, 31));
        hLayoutStatus = new QHBoxLayout(horizontalLayoutWidget_7);
        hLayoutStatus->setObjectName(QString::fromUtf8("hLayoutStatus"));
        hLayoutStatus->setContentsMargins(0, 0, 0, 0);
        labelStatus = new QLabel(horizontalLayoutWidget_7);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));

        hLayoutStatus->addWidget(labelStatus);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutStatus->addItem(horizontalSpacer_5);

        progressBar = new QProgressBar(horizontalLayoutWidget_7);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMinimumSize(QSize(200, 0));
        progressBar->setMaximumSize(QSize(200, 16777215));
        progressBar->setValue(0);

        hLayoutStatus->addWidget(progressBar);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 60, 621, 371));
        tabWidget->setFont(font);
        tabRasterInfo = new QWidget();
        tabRasterInfo->setObjectName(QString::fromUtf8("tabRasterInfo"));
        horizontalLayoutWidget_2 = new QWidget(tabRasterInfo);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 591, 31));
        hLayoutFile = new QHBoxLayout(horizontalLayoutWidget_2);
        hLayoutFile->setObjectName(QString::fromUtf8("hLayoutFile"));
        hLayoutFile->setContentsMargins(0, 0, 0, 0);
        labelFileName = new QLabel(horizontalLayoutWidget_2);
        labelFileName->setObjectName(QString::fromUtf8("labelFileName"));
        labelFileName->setMaximumSize(QSize(85, 16777215));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        labelFileName->setFont(font3);

        hLayoutFile->addWidget(labelFileName);

        fileName = new QLabel(horizontalLayoutWidget_2);
        fileName->setObjectName(QString::fromUtf8("fileName"));
        QFont font4;
        font4.setPointSize(11);
        fileName->setFont(font4);

        hLayoutFile->addWidget(fileName);

        horizontalLayoutWidget_3 = new QWidget(tabRasterInfo);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 50, 591, 31));
        hLayoutRowCol = new QHBoxLayout(horizontalLayoutWidget_3);
        hLayoutRowCol->setObjectName(QString::fromUtf8("hLayoutRowCol"));
        hLayoutRowCol->setContentsMargins(0, 0, 0, 0);
        labelRows = new QLabel(horizontalLayoutWidget_3);
        labelRows->setObjectName(QString::fromUtf8("labelRows"));
        labelRows->setFont(font2);

        hLayoutRowCol->addWidget(labelRows);

        Rows = new QLineEdit(horizontalLayoutWidget_3);
        Rows->setObjectName(QString::fromUtf8("Rows"));
        Rows->setMinimumSize(QSize(100, 0));
        Rows->setAcceptDrops(false);

        hLayoutRowCol->addWidget(Rows);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutRowCol->addItem(horizontalSpacer_2);

        labelCols = new QLabel(horizontalLayoutWidget_3);
        labelCols->setObjectName(QString::fromUtf8("labelCols"));
        labelCols->setFont(font2);

        hLayoutRowCol->addWidget(labelCols);

        Cols = new QLineEdit(horizontalLayoutWidget_3);
        Cols->setObjectName(QString::fromUtf8("Cols"));
        Cols->setMinimumSize(QSize(100, 0));
        Cols->setAcceptDrops(false);

        hLayoutRowCol->addWidget(Cols);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutRowCol->addItem(horizontalSpacer_7);

        horizontalLayoutWidget_4 = new QWidget(tabRasterInfo);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 130, 591, 31));
        hLayoutPixels = new QHBoxLayout(horizontalLayoutWidget_4);
        hLayoutPixels->setObjectName(QString::fromUtf8("hLayoutPixels"));
        hLayoutPixels->setContentsMargins(0, 0, 0, 0);
        labelPixelSize = new QLabel(horizontalLayoutWidget_4);
        labelPixelSize->setObjectName(QString::fromUtf8("labelPixelSize"));
        labelPixelSize->setFont(font2);

        hLayoutPixels->addWidget(labelPixelSize);

        pixelSize = new QLineEdit(horizontalLayoutWidget_4);
        pixelSize->setObjectName(QString::fromUtf8("pixelSize"));
        pixelSize->setMinimumSize(QSize(75, 0));
        pixelSize->setMaximumSize(QSize(75, 16777215));
        pixelSize->setAcceptDrops(false);

        hLayoutPixels->addWidget(pixelSize);

        pixelUnits = new QComboBox(horizontalLayoutWidget_4);
        pixelUnits->setObjectName(QString::fromUtf8("pixelUnits"));
        pixelUnits->setMinimumSize(QSize(90, 0));
        pixelUnits->setMaximumSize(QSize(90, 16777215));

        hLayoutPixels->addWidget(pixelUnits);

        horizontalSpacer_8 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutPixels->addItem(horizontalSpacer_8);

        labelPixelType = new QLabel(horizontalLayoutWidget_4);
        labelPixelType->setObjectName(QString::fromUtf8("labelPixelType"));
        labelPixelType->setFont(font2);

        hLayoutPixels->addWidget(labelPixelType);

        pixelType = new QComboBox(horizontalLayoutWidget_4);
        pixelType->setObjectName(QString::fromUtf8("pixelType"));
        pixelType->setMinimumSize(QSize(150, 0));
        pixelType->setMaximumSize(QSize(150, 16777215));

        hLayoutPixels->addWidget(pixelType);

        horizontalLayoutWidget_5 = new QWidget(tabRasterInfo);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 210, 591, 31));
        hLayoutFill = new QHBoxLayout(horizontalLayoutWidget_5);
        hLayoutFill->setObjectName(QString::fromUtf8("hLayoutFill"));
        hLayoutFill->setContentsMargins(0, 0, 0, 0);
        labelFillValue = new QLabel(horizontalLayoutWidget_5);
        labelFillValue->setObjectName(QString::fromUtf8("labelFillValue"));
        labelFillValue->setMinimumSize(QSize(0, 0));
        labelFillValue->setFont(font2);

        hLayoutFill->addWidget(labelFillValue);

        fillEnable = new QCheckBox(horizontalLayoutWidget_5);
        fillEnable->setObjectName(QString::fromUtf8("fillEnable"));

        hLayoutFill->addWidget(fillEnable);

        FillValue = new QLineEdit(horizontalLayoutWidget_5);
        FillValue->setObjectName(QString::fromUtf8("FillValue"));
        FillValue->setEnabled(false);
        FillValue->setMinimumSize(QSize(100, 0));
        FillValue->setAcceptDrops(false);
        FillValue->setReadOnly(false);

        hLayoutFill->addWidget(FillValue);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutFill->addItem(horizontalSpacer_3);

        horizontalLayoutWidget_6 = new QWidget(tabRasterInfo);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 250, 591, 31));
        hLayoutNoData = new QHBoxLayout(horizontalLayoutWidget_6);
        hLayoutNoData->setObjectName(QString::fromUtf8("hLayoutNoData"));
        hLayoutNoData->setContentsMargins(0, 0, 0, 0);
        labelNoDataValue = new QLabel(horizontalLayoutWidget_6);
        labelNoDataValue->setObjectName(QString::fromUtf8("labelNoDataValue"));
        labelNoDataValue->setMinimumSize(QSize(0, 0));
        labelNoDataValue->setFont(font2);

        hLayoutNoData->addWidget(labelNoDataValue);

        noDataValueEnable = new QCheckBox(horizontalLayoutWidget_6);
        noDataValueEnable->setObjectName(QString::fromUtf8("noDataValueEnable"));

        hLayoutNoData->addWidget(noDataValueEnable);

        noDataValue = new QLineEdit(horizontalLayoutWidget_6);
        noDataValue->setObjectName(QString::fromUtf8("noDataValue"));
        noDataValue->setEnabled(false);
        noDataValue->setMinimumSize(QSize(100, 0));
        noDataValue->setAcceptDrops(false);
        noDataValue->setReadOnly(false);

        hLayoutNoData->addWidget(noDataValue);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutNoData->addItem(horizontalSpacer_4);

        horizontalLayoutWidget_8 = new QWidget(tabRasterInfo);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(10, 90, 591, 31));
        hLayoutSheroid = new QHBoxLayout(horizontalLayoutWidget_8);
        hLayoutSheroid->setObjectName(QString::fromUtf8("hLayoutSheroid"));
        hLayoutSheroid->setContentsMargins(0, 0, 0, 0);
        labelSheroid = new QLabel(horizontalLayoutWidget_8);
        labelSheroid->setObjectName(QString::fromUtf8("labelSheroid"));
        labelSheroid->setFont(font2);

        hLayoutSheroid->addWidget(labelSheroid);

        sheroidSelector = new QComboBox(horizontalLayoutWidget_8);
        sheroidSelector->setObjectName(QString::fromUtf8("sheroidSelector"));
        sheroidSelector->setMinimumSize(QSize(200, 0));

        hLayoutSheroid->addWidget(sheroidSelector);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutSheroid->addItem(horizontalSpacer_6);

        horizontalLayoutWidget_9 = new QWidget(tabRasterInfo);
        horizontalLayoutWidget_9->setObjectName(QString::fromUtf8("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(10, 170, 591, 31));
        hLayoutUL = new QHBoxLayout(horizontalLayoutWidget_9);
        hLayoutUL->setObjectName(QString::fromUtf8("hLayoutUL"));
        hLayoutUL->setContentsMargins(0, 0, 0, 0);
        labelULlat = new QLabel(horizontalLayoutWidget_9);
        labelULlat->setObjectName(QString::fromUtf8("labelULlat"));
        labelULlat->setFont(font2);

        hLayoutUL->addWidget(labelULlat);

        Latitude = new QLineEdit(horizontalLayoutWidget_9);
        Latitude->setObjectName(QString::fromUtf8("Latitude"));
        Latitude->setMinimumSize(QSize(100, 0));
        Latitude->setAcceptDrops(false);

        hLayoutUL->addWidget(Latitude);

        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutUL->addItem(horizontalSpacer_9);

        labelULlon = new QLabel(horizontalLayoutWidget_9);
        labelULlon->setObjectName(QString::fromUtf8("labelULlon"));
        labelULlon->setFont(font2);

        hLayoutUL->addWidget(labelULlon);

        Longitude = new QLineEdit(horizontalLayoutWidget_9);
        Longitude->setObjectName(QString::fromUtf8("Longitude"));
        Longitude->setMinimumSize(QSize(100, 0));
        Longitude->setAcceptDrops(false);

        hLayoutUL->addWidget(Longitude);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutUL->addItem(horizontalSpacer_10);

        tabWidget->addTab(tabRasterInfo, QString());
        tabProjectionInfo = new QWidget();
        tabProjectionInfo->setObjectName(QString::fromUtf8("tabProjectionInfo"));
        stackedWidget = new QStackedWidget(tabProjectionInfo);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 591, 321));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        tabWidget->addTab(tabProjectionInfo, QString());
        Advanced->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(Advanced);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 21));
        menuBar->setFont(font);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        Advanced->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
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

        retranslateUi(Advanced);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Advanced);
    } // setupUi

    void retranslateUi(QMainWindow *Advanced)
    {
        Advanced->setWindowTitle(QApplication::translate("Advanced", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("Advanced", "Open", 0, QApplication::UnicodeUTF8));
        actionSave_Reprojection->setText(QApplication::translate("Advanced", "Save Reprojection", 0, QApplication::UnicodeUTF8));
        actionSelection_Screen->setText(QApplication::translate("Advanced", "Selection Screen", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("Advanced", "Exit", 0, QApplication::UnicodeUTF8));
        actionLoad_Projection_Info->setText(QApplication::translate("Advanced", "Load Projection Info", 0, QApplication::UnicodeUTF8));
        actionSave_Projection_Info->setText(QApplication::translate("Advanced", "Save Projection Info", 0, QApplication::UnicodeUTF8));
        actionToggle_Preview->setText(QApplication::translate("Advanced", "Toggle Preview", 0, QApplication::UnicodeUTF8));
        actionEdit_Author->setText(QApplication::translate("Advanced", "Edit Author Info", 0, QApplication::UnicodeUTF8));
        actionUser_Guide->setText(QApplication::translate("Advanced", "User Guide", 0, QApplication::UnicodeUTF8));
        actionAbout_dRasterBlaster->setText(QApplication::translate("Advanced", "About dRasterBlaster", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("Advanced", "About Qt", 0, QApplication::UnicodeUTF8));
        ReprojectionInformation->setText(QApplication::translate("Advanced", "Reprojection Information", 0, QApplication::UnicodeUTF8));
        editInputParams->setText(QApplication::translate("Advanced", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        labelStatus->setText(QApplication::translate("Advanced", "Status/Error Info", 0, QApplication::UnicodeUTF8));
        labelFileName->setText(QApplication::translate("Advanced", "File Name:", 0, QApplication::UnicodeUTF8));
        fileName->setText(QApplication::translate("Advanced", "veg_geographic_1deg.img", 0, QApplication::UnicodeUTF8));
        labelRows->setText(QApplication::translate("Advanced", "Rows", 0, QApplication::UnicodeUTF8));
        labelCols->setText(QApplication::translate("Advanced", "Columns", 0, QApplication::UnicodeUTF8));
        labelPixelSize->setText(QApplication::translate("Advanced", "Pixel Size", 0, QApplication::UnicodeUTF8));
        pixelUnits->clear();
        pixelUnits->insertItems(0, QStringList()
         << QApplication::translate("Advanced", "Arcsecond(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Advanced", "Arcminute(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Advanced", "Degree(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Advanced", "Meter(s)", 0, QApplication::UnicodeUTF8)
        );
        labelPixelType->setText(QApplication::translate("Advanced", "Pixel Type", 0, QApplication::UnicodeUTF8));
        pixelType->clear();
        pixelType->insertItems(0, QStringList()
         << QApplication::translate("Advanced", "Signed 8-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Advanced", "Unsigned 8-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Advanced", "Signed 16-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Advanced", "Unsigned 16-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Advanced", "Signed 32-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Advanced", "Unsigned 32-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Advanced", "Signed 32-Bit IEEE Float", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Advanced", "Signed 64-Bit IEEE Float", 0, QApplication::UnicodeUTF8)
        );
        labelFillValue->setText(QApplication::translate("Advanced", "Fill Value", 0, QApplication::UnicodeUTF8));
        fillEnable->setText(QString());
        labelNoDataValue->setText(QApplication::translate("Advanced", "No Data Value", 0, QApplication::UnicodeUTF8));
        noDataValueEnable->setText(QString());
        labelSheroid->setText(QApplication::translate("Advanced", "Sheroid", 0, QApplication::UnicodeUTF8));
        sheroidSelector->clear();
        sheroidSelector->insertItems(0, QStringList()
         << QApplication::translate("Advanced", "Sphere of Radius 6,370,997 meters", 0, QApplication::UnicodeUTF8)
        );
        labelULlat->setText(QApplication::translate("Advanced", "UL Latitude", 0, QApplication::UnicodeUTF8));
        labelULlon->setText(QApplication::translate("Advanced", "UL Longitude", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabRasterInfo), QApplication::translate("Advanced", "Raster Info", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabProjectionInfo), QApplication::translate("Advanced", "Projection Info", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("Advanced", "File", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("Advanced", "Options", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("Advanced", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Advanced: public Ui_Advanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCED_H
