/********************************************************************************
** Form generated from reading UI file 'selection.ui'
**
** Created: Mon May 7 16:20:39 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTION_H
#define UI_SELECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Selection
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
    QPushButton *btnRasterWizard;
    QPushButton *btnAdvanced;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOptions;
    QMenu *menuHelp;

    void setupUi(QMainWindow *Selection)
    {
        if (Selection->objectName().isEmpty())
            Selection->setObjectName(QString::fromUtf8("Selection"));
        Selection->resize(640, 480);
        actionOpen = new QAction(Selection);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QFont font;
        font.setPointSize(10);
        actionOpen->setFont(font);
        actionSave_Reprojection = new QAction(Selection);
        actionSave_Reprojection->setObjectName(QString::fromUtf8("actionSave_Reprojection"));
        actionSave_Reprojection->setFont(font);
        actionSelection_Screen = new QAction(Selection);
        actionSelection_Screen->setObjectName(QString::fromUtf8("actionSelection_Screen"));
        actionSelection_Screen->setFont(font);
        actionExit = new QAction(Selection);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setFont(font);
        actionLoad_Projection_Info = new QAction(Selection);
        actionLoad_Projection_Info->setObjectName(QString::fromUtf8("actionLoad_Projection_Info"));
        actionLoad_Projection_Info->setFont(font);
        actionSave_Projection_Info = new QAction(Selection);
        actionSave_Projection_Info->setObjectName(QString::fromUtf8("actionSave_Projection_Info"));
        actionSave_Projection_Info->setFont(font);
        actionToggle_Preview = new QAction(Selection);
        actionToggle_Preview->setObjectName(QString::fromUtf8("actionToggle_Preview"));
        actionToggle_Preview->setFont(font);
        actionEdit_Author = new QAction(Selection);
        actionEdit_Author->setObjectName(QString::fromUtf8("actionEdit_Author"));
        actionEdit_Author->setFont(font);
        actionUser_Guide = new QAction(Selection);
        actionUser_Guide->setObjectName(QString::fromUtf8("actionUser_Guide"));
        actionUser_Guide->setFont(font);
        actionAbout_dRasterBlaster = new QAction(Selection);
        actionAbout_dRasterBlaster->setObjectName(QString::fromUtf8("actionAbout_dRasterBlaster"));
        actionAbout_dRasterBlaster->setFont(font);
        actionAbout_Qt = new QAction(Selection);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionAbout_Qt->setFont(font);
        centralWidget = new QWidget(Selection);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btnRasterWizard = new QPushButton(centralWidget);
        btnRasterWizard->setObjectName(QString::fromUtf8("btnRasterWizard"));
        btnRasterWizard->setGeometry(QRect(10, 10, 621, 351));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        btnRasterWizard->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/wizard.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRasterWizard->setIcon(icon);
        btnRasterWizard->setIconSize(QSize(128, 128));
        btnAdvanced = new QPushButton(centralWidget);
        btnAdvanced->setObjectName(QString::fromUtf8("btnAdvanced"));
        btnAdvanced->setGeometry(QRect(10, 370, 621, 81));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        btnAdvanced->setFont(font2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/advanced.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdvanced->setIcon(icon1);
        btnAdvanced->setIconSize(QSize(64, 64));
        Selection->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Selection);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 21));
        menuBar->setFont(font);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        Selection->setMenuBar(menuBar);

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

        retranslateUi(Selection);

        QMetaObject::connectSlotsByName(Selection);
    } // setupUi

    void retranslateUi(QMainWindow *Selection)
    {
        Selection->setWindowTitle(QApplication::translate("Selection", "Selection", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("Selection", "Open", 0, QApplication::UnicodeUTF8));
        actionSave_Reprojection->setText(QApplication::translate("Selection", "Save Reprojection", 0, QApplication::UnicodeUTF8));
        actionSelection_Screen->setText(QApplication::translate("Selection", "Selection Screen", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("Selection", "Exit", 0, QApplication::UnicodeUTF8));
        actionLoad_Projection_Info->setText(QApplication::translate("Selection", "Load Projection Info", 0, QApplication::UnicodeUTF8));
        actionSave_Projection_Info->setText(QApplication::translate("Selection", "Save Projection Info", 0, QApplication::UnicodeUTF8));
        actionToggle_Preview->setText(QApplication::translate("Selection", "Toggle Preview", 0, QApplication::UnicodeUTF8));
        actionEdit_Author->setText(QApplication::translate("Selection", "Edit Author Info", 0, QApplication::UnicodeUTF8));
        actionUser_Guide->setText(QApplication::translate("Selection", "User Guide", 0, QApplication::UnicodeUTF8));
        actionAbout_dRasterBlaster->setText(QApplication::translate("Selection", "About dRasterBlaster", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("Selection", "About Qt", 0, QApplication::UnicodeUTF8));
        btnRasterWizard->setText(QApplication::translate("Selection", "Raster Wizard", 0, QApplication::UnicodeUTF8));
        btnAdvanced->setText(QApplication::translate("Selection", "Advanced", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("Selection", "File", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("Selection", "Options", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("Selection", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Selection: public Ui_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTION_H