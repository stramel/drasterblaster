/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Apr 23 14:37:44 2012
**      by: Qt User Interface Compiler version 4.7.4
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
    QAction *actionSave_Raster;
    QAction *actionRaster_Wizard;
    QAction *actionExit;
    QAction *actionEdit_Author;
    QAction *actionUser_Guide;
    QAction *actionAbout_dRasterBlaster;
    QAction *actionAbout_Qt;
    QAction *actionSave_Parameters;
    QAction *actionLoad_Parameters;
    QAction *actionToggle_Previews;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_11;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_7;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QCheckBox *checkBox;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_3;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_5;
    QSpacerItem *horizontalSpacer_4;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QComboBox *comboBox_3;
    QSpacerItem *horizontalSpacer_6;
    QWidget *tab_2;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_5;
    QProgressBar *progressBar;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_3;
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
        actionSave_Raster = new QAction(MainWindow);
        actionSave_Raster->setObjectName(QString::fromUtf8("actionSave_Raster"));
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
        actionSave_Parameters = new QAction(MainWindow);
        actionSave_Parameters->setObjectName(QString::fromUtf8("actionSave_Parameters"));
        actionLoad_Parameters = new QAction(MainWindow);
        actionLoad_Parameters->setObjectName(QString::fromUtf8("actionLoad_Parameters"));
        actionToggle_Previews = new QAction(MainWindow);
        actionToggle_Previews->setObjectName(QString::fromUtf8("actionToggle_Previews"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 40, 491, 241));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayoutWidget_2 = new QWidget(tab);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 471, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(70, 16777215));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        label_11 = new QLabel(horizontalLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font1;
        font1.setPointSize(10);
        label_11->setFont(font1);

        horizontalLayout_2->addWidget(label_11);

        horizontalLayoutWidget_3 = new QWidget(tab);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 50, 471, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);

        horizontalLayout_3->addWidget(label_3);

        lineEdit = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_4 = new QLabel(horizontalLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        horizontalLayout_3->addWidget(label_4);

        lineEdit_2 = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(lineEdit_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        horizontalLayoutWidget_4 = new QWidget(tab);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 110, 471, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        horizontalLayout_4->addWidget(label_5);

        lineEdit_3 = new QLineEdit(horizontalLayoutWidget_4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(75, 0));
        lineEdit_3->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_4->addWidget(lineEdit_3);

        comboBox = new QComboBox(horizontalLayoutWidget_4);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(90, 0));
        comboBox->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_4->addWidget(comboBox);

        horizontalSpacer_8 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        label_6 = new QLabel(horizontalLayoutWidget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        horizontalLayout_4->addWidget(label_6);

        comboBox_2 = new QComboBox(horizontalLayoutWidget_4);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(150, 0));
        comboBox_2->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_4->addWidget(comboBox_2);

        horizontalLayoutWidget_5 = new QWidget(tab);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 140, 471, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(0, 0));
        label_7->setFont(font2);

        horizontalLayout_5->addWidget(label_7);

        checkBox = new QCheckBox(horizontalLayoutWidget_5);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_5->addWidget(checkBox);

        lineEdit_4 = new QLineEdit(horizontalLayoutWidget_5);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(100, 0));

        horizontalLayout_5->addWidget(lineEdit_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        horizontalLayoutWidget_6 = new QWidget(tab);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 170, 471, 31));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(horizontalLayoutWidget_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 0));
        label_8->setFont(font2);

        horizontalLayout_6->addWidget(label_8);

        checkBox_2 = new QCheckBox(horizontalLayoutWidget_6);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_6->addWidget(checkBox_2);

        lineEdit_5 = new QLineEdit(horizontalLayoutWidget_6);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(100, 0));

        horizontalLayout_6->addWidget(lineEdit_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        horizontalLayoutWidget_8 = new QWidget(tab);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(10, 80, 471, 31));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(horizontalLayoutWidget_8);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);

        horizontalLayout_8->addWidget(label_10);

        comboBox_3 = new QComboBox(horizontalLayoutWidget_8);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(200, 0));

        horizontalLayout_8->addWidget(comboBox_3);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        horizontalLayoutWidget_7 = new QWidget(centralWidget);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(20, 280, 471, 31));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(horizontalLayoutWidget_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_7->addWidget(label_9);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        progressBar = new QProgressBar(horizontalLayoutWidget_7);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMinimumSize(QSize(200, 0));
        progressBar->setMaximumSize(QSize(200, 16777215));
        progressBar->setValue(0);

        horizontalLayout_7->addWidget(progressBar);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 0, 471, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBox_3 = new QCheckBox(horizontalLayoutWidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setFont(font2);

        horizontalLayout->addWidget(checkBox_3);

        MainWindow->setCentralWidget(centralWidget);
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
        menuFile->addAction(actionSave_Raster);
        menuFile->addSeparator();
        menuFile->addAction(actionRaster_Wizard);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionEdit_Author);
        menuHelp->addAction(actionUser_Guide);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_dRasterBlaster);
        menuHelp->addAction(actionAbout_Qt);
        menuOptions->addAction(actionLoad_Parameters);
        menuOptions->addAction(actionSave_Parameters);
        menuOptions->addSeparator();
        menuOptions->addAction(actionToggle_Previews);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "dRasterBlaster (v .1)", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionSave_Raster->setText(QApplication::translate("MainWindow", "Save Reprojection", 0, QApplication::UnicodeUTF8));
        actionRaster_Wizard->setText(QApplication::translate("MainWindow", "Raster Wizard", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionEdit_Author->setText(QApplication::translate("MainWindow", "Edit Author", 0, QApplication::UnicodeUTF8));
        actionUser_Guide->setText(QApplication::translate("MainWindow", "User Guide", 0, QApplication::UnicodeUTF8));
        actionAbout_dRasterBlaster->setText(QApplication::translate("MainWindow", "About dRasterBlaster", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", 0, QApplication::UnicodeUTF8));
        actionSave_Parameters->setText(QApplication::translate("MainWindow", "Save Projection Info", 0, QApplication::UnicodeUTF8));
        actionLoad_Parameters->setText(QApplication::translate("MainWindow", "Load Projection Info", 0, QApplication::UnicodeUTF8));
        actionToggle_Previews->setText(QApplication::translate("MainWindow", "Toggle Preview", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "File Name:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "veg_geographic_1deg.img", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Rows", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Columns", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Pixel Size", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Arcsecond(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Arcminute(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Degree(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Meter(s)", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("MainWindow", "Pixel Type", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Signed 8-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Unsigned 8-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Signed 16-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Unsigned 16-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Signed 32-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Unsigned 32-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Signed 32-Bit IEEE Float", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Signed 64-Bit IEEE Float", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("MainWindow", "Fill Value", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "No Data Value", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "Sheroid", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Sphere of Radius 6,370,997 meters", 0, QApplication::UnicodeUTF8)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Raster Info", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Projection Info", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Status/Error Info", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Reprojection Information", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("MainWindow", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
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
