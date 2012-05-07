/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri May 4 13:23:26 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave_Reprojection;
    QAction *actionRaster_Wizard;
    QAction *actionExit;
    QAction *actionEdit_Author;
    QAction *actionUser_Guide;
    QAction *actionAbout_dRasterBlaster;
    QAction *actionAbout_Qt;
    QAction *actionSave_Projection_Info;
    QAction *actionLoad_Projection_Info;
    QAction *actionToggle_Preview;
    QWidget *Content;
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
    QWidget *tabProjectionInfo;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *hLayoutStatus;
    QLabel *labelStatus;
    QSpacerItem *horizontalSpacer_5;
    QProgressBar *progressBar;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *hLayoutTitle;
    QLabel *ReprojectionInformation;
    QSpacerItem *horizontalSpacer;
    QCheckBox *editInputParams;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuOptions;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(510, 328);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave_Reprojection = new QAction(MainWindow);
        actionSave_Reprojection->setObjectName(QString::fromUtf8("actionSave_Reprojection"));
        actionRaster_Wizard = new QAction(MainWindow);
        actionRaster_Wizard->setObjectName(QString::fromUtf8("actionRaster_Wizard"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionEdit_Author = new QAction(MainWindow);
        actionEdit_Author->setObjectName(QString::fromUtf8("actionEdit_Author"));
        actionUser_Guide = new QAction(MainWindow);
        actionUser_Guide->setObjectName(QString::fromUtf8("actionUser_Guide"));
        actionAbout_dRasterBlaster = new QAction(MainWindow);
        actionAbout_dRasterBlaster->setObjectName(QString::fromUtf8("actionAbout_dRasterBlaster"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionSave_Projection_Info = new QAction(MainWindow);
        actionSave_Projection_Info->setObjectName(QString::fromUtf8("actionSave_Projection_Info"));
        actionLoad_Projection_Info = new QAction(MainWindow);
        actionLoad_Projection_Info->setObjectName(QString::fromUtf8("actionLoad_Projection_Info"));
        actionToggle_Preview = new QAction(MainWindow);
        actionToggle_Preview->setObjectName(QString::fromUtf8("actionToggle_Preview"));
        Content = new QWidget(MainWindow);
        Content->setObjectName(QString::fromUtf8("Content"));
        tabWidget = new QTabWidget(Content);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 40, 491, 241));
        tabRasterInfo = new QWidget();
        tabRasterInfo->setObjectName(QString::fromUtf8("tabRasterInfo"));
        horizontalLayoutWidget_2 = new QWidget(tabRasterInfo);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 471, 31));
        hLayoutFile = new QHBoxLayout(horizontalLayoutWidget_2);
        hLayoutFile->setSpacing(6);
        hLayoutFile->setContentsMargins(11, 11, 11, 11);
        hLayoutFile->setObjectName(QString::fromUtf8("hLayoutFile"));
        hLayoutFile->setContentsMargins(0, 0, 0, 0);
        labelFileName = new QLabel(horizontalLayoutWidget_2);
        labelFileName->setObjectName(QString::fromUtf8("labelFileName"));
        labelFileName->setMaximumSize(QSize(70, 16777215));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        labelFileName->setFont(font);

        hLayoutFile->addWidget(labelFileName);

        fileName = new QLabel(horizontalLayoutWidget_2);
        fileName->setObjectName(QString::fromUtf8("fileName"));
        QFont font1;
        font1.setPointSize(10);
        fileName->setFont(font1);

        hLayoutFile->addWidget(fileName);

        horizontalLayoutWidget_3 = new QWidget(tabRasterInfo);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 50, 471, 31));
        hLayoutRowCol = new QHBoxLayout(horizontalLayoutWidget_3);
        hLayoutRowCol->setSpacing(6);
        hLayoutRowCol->setContentsMargins(11, 11, 11, 11);
        hLayoutRowCol->setObjectName(QString::fromUtf8("hLayoutRowCol"));
        hLayoutRowCol->setContentsMargins(0, 0, 0, 0);
        labelRows = new QLabel(horizontalLayoutWidget_3);
        labelRows->setObjectName(QString::fromUtf8("labelRows"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
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
        horizontalLayoutWidget_4->setGeometry(QRect(10, 110, 471, 31));
        hLayoutPixels = new QHBoxLayout(horizontalLayoutWidget_4);
        hLayoutPixels->setSpacing(6);
        hLayoutPixels->setContentsMargins(11, 11, 11, 11);
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
        horizontalLayoutWidget_5->setGeometry(QRect(10, 140, 471, 31));
        hLayoutFill = new QHBoxLayout(horizontalLayoutWidget_5);
        hLayoutFill->setSpacing(6);
        hLayoutFill->setContentsMargins(11, 11, 11, 11);
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
        horizontalLayoutWidget_6->setGeometry(QRect(10, 170, 471, 31));
        hLayoutNoData = new QHBoxLayout(horizontalLayoutWidget_6);
        hLayoutNoData->setSpacing(6);
        hLayoutNoData->setContentsMargins(11, 11, 11, 11);
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
        horizontalLayoutWidget_8->setGeometry(QRect(10, 80, 471, 31));
        hLayoutSheroid = new QHBoxLayout(horizontalLayoutWidget_8);
        hLayoutSheroid->setSpacing(6);
        hLayoutSheroid->setContentsMargins(11, 11, 11, 11);
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

        tabWidget->addTab(tabRasterInfo, QString());
        tabProjectionInfo = new QWidget();
        tabProjectionInfo->setObjectName(QString::fromUtf8("tabProjectionInfo"));
        tabWidget->addTab(tabProjectionInfo, QString());
        horizontalLayoutWidget_7 = new QWidget(Content);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(20, 280, 471, 31));
        hLayoutStatus = new QHBoxLayout(horizontalLayoutWidget_7);
        hLayoutStatus->setSpacing(6);
        hLayoutStatus->setContentsMargins(11, 11, 11, 11);
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

        horizontalLayoutWidget = new QWidget(Content);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 0, 471, 31));
        hLayoutTitle = new QHBoxLayout(horizontalLayoutWidget);
        hLayoutTitle->setSpacing(6);
        hLayoutTitle->setContentsMargins(11, 11, 11, 11);
        hLayoutTitle->setObjectName(QString::fromUtf8("hLayoutTitle"));
        hLayoutTitle->setContentsMargins(0, 0, 0, 0);
        ReprojectionInformation = new QLabel(horizontalLayoutWidget);
        ReprojectionInformation->setObjectName(QString::fromUtf8("ReprojectionInformation"));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        ReprojectionInformation->setFont(font3);

        hLayoutTitle->addWidget(ReprojectionInformation);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutTitle->addItem(horizontalSpacer);

        editInputParams = new QCheckBox(horizontalLayoutWidget);
        editInputParams->setObjectName(QString::fromUtf8("editInputParams"));
        editInputParams->setFont(font2);

        hLayoutTitle->addWidget(editInputParams);

        MainWindow->setCentralWidget(Content);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 510, 18));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_Reprojection);
        menuFile->addSeparator();
        menuFile->addAction(actionRaster_Wizard);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionEdit_Author);
        menuHelp->addAction(actionUser_Guide);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_dRasterBlaster);
        menuHelp->addAction(actionAbout_Qt);
        menuOptions->addAction(actionLoad_Projection_Info);
        menuOptions->addAction(actionSave_Projection_Info);
        menuOptions->addSeparator();
        menuOptions->addAction(actionToggle_Preview);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "dRasterBlaster (v .1)", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionSave_Reprojection->setText(QApplication::translate("MainWindow", "Save Reprojection", 0, QApplication::UnicodeUTF8));
        actionRaster_Wizard->setText(QApplication::translate("MainWindow", "Raster Wizard", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionEdit_Author->setText(QApplication::translate("MainWindow", "Edit Author", 0, QApplication::UnicodeUTF8));
        actionUser_Guide->setText(QApplication::translate("MainWindow", "User Guide", 0, QApplication::UnicodeUTF8));
        actionAbout_dRasterBlaster->setText(QApplication::translate("MainWindow", "About dRasterBlaster", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", 0, QApplication::UnicodeUTF8));
        actionSave_Projection_Info->setText(QApplication::translate("MainWindow", "Save Projection Info", 0, QApplication::UnicodeUTF8));
        actionLoad_Projection_Info->setText(QApplication::translate("MainWindow", "Load Projection Info", 0, QApplication::UnicodeUTF8));
        actionToggle_Preview->setText(QApplication::translate("MainWindow", "Toggle Preview", 0, QApplication::UnicodeUTF8));
        labelFileName->setText(QApplication::translate("MainWindow", "File Name:", 0, QApplication::UnicodeUTF8));
        fileName->setText(QApplication::translate("MainWindow", "veg_geographic_1deg.img", 0, QApplication::UnicodeUTF8));
        labelRows->setText(QApplication::translate("MainWindow", "Rows", 0, QApplication::UnicodeUTF8));
        labelCols->setText(QApplication::translate("MainWindow", "Columns", 0, QApplication::UnicodeUTF8));
        labelPixelSize->setText(QApplication::translate("MainWindow", "Pixel Size", 0, QApplication::UnicodeUTF8));
        pixelUnits->clear();
        pixelUnits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Arcsecond(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Arcminute(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Degree(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Meter(s)", 0, QApplication::UnicodeUTF8)
        );
        labelPixelType->setText(QApplication::translate("MainWindow", "Pixel Type", 0, QApplication::UnicodeUTF8));
        pixelType->clear();
        pixelType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Signed 8-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Unsigned 8-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Signed 16-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Unsigned 16-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Signed 32-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Unsigned 32-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Signed 32-Bit IEEE Float", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Signed 64-Bit IEEE Float", 0, QApplication::UnicodeUTF8)
        );
        labelFillValue->setText(QApplication::translate("MainWindow", "Fill Value", 0, QApplication::UnicodeUTF8));
        fillEnable->setText(QString());
        labelNoDataValue->setText(QApplication::translate("MainWindow", "No Data Value", 0, QApplication::UnicodeUTF8));
        noDataValueEnable->setText(QString());
        labelSheroid->setText(QApplication::translate("MainWindow", "Sheroid", 0, QApplication::UnicodeUTF8));
        sheroidSelector->clear();
        sheroidSelector->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Sphere of Radius 6,370,997 meters", 0, QApplication::UnicodeUTF8)
        );
        tabWidget->setTabText(tabWidget->indexOf(tabRasterInfo), QApplication::translate("MainWindow", "Raster Info", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabProjectionInfo), QApplication::translate("MainWindow", "Projection Info", 0, QApplication::UnicodeUTF8));
        labelStatus->setText(QApplication::translate("MainWindow", "Status/Error Info", 0, QApplication::UnicodeUTF8));
        ReprojectionInformation->setText(QApplication::translate("MainWindow", "Reprojection Information", 0, QApplication::UnicodeUTF8));
        editInputParams->setText(QApplication::translate("MainWindow", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
