/********************************************************************************
** Form generated from reading UI file 'wizard.ui'
**
** Created: Tue May 8 10:18:30 2012
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
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
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
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnBack;
    QPushButton *btnCancel;
    QPushButton *btnNext;
    QStackedWidget *stackedWidget;
    QWidget *WelcomeScreen;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QFrame *frame;
    QWidget *page_2;
    QFrame *frame_2;
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
        actionSave_Reprojection = new QAction(Wizard);
        actionSave_Reprojection->setObjectName(QString::fromUtf8("actionSave_Reprojection"));
        actionSelection_Screen = new QAction(Wizard);
        actionSelection_Screen->setObjectName(QString::fromUtf8("actionSelection_Screen"));
        actionExit = new QAction(Wizard);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionLoad_Projection_Info = new QAction(Wizard);
        actionLoad_Projection_Info->setObjectName(QString::fromUtf8("actionLoad_Projection_Info"));
        actionSave_Projection_Info = new QAction(Wizard);
        actionSave_Projection_Info->setObjectName(QString::fromUtf8("actionSave_Projection_Info"));
        actionToggle_Preview = new QAction(Wizard);
        actionToggle_Preview->setObjectName(QString::fromUtf8("actionToggle_Preview"));
        actionEdit_Author = new QAction(Wizard);
        actionEdit_Author->setObjectName(QString::fromUtf8("actionEdit_Author"));
        actionUser_Guide = new QAction(Wizard);
        actionUser_Guide->setObjectName(QString::fromUtf8("actionUser_Guide"));
        actionAbout_dRasterBlaster = new QAction(Wizard);
        actionAbout_dRasterBlaster->setObjectName(QString::fromUtf8("actionAbout_dRasterBlaster"));
        actionAbout_Qt = new QAction(Wizard);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(Wizard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 419, 631, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnBack = new QPushButton(horizontalLayoutWidget);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setEnabled(false);
        QFont font;
        font.setPointSize(10);
        btnBack->setFont(font);

        horizontalLayout->addWidget(btnBack);

        btnCancel = new QPushButton(horizontalLayoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setFont(font);

        horizontalLayout->addWidget(btnCancel);

        btnNext = new QPushButton(horizontalLayoutWidget);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setFont(font);

        horizontalLayout->addWidget(btnNext);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-1, -1, 642, 421));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->setFrameShape(QFrame::Box);
        WelcomeScreen = new QWidget();
        WelcomeScreen->setObjectName(QString::fromUtf8("WelcomeScreen"));
        label = new QLabel(WelcomeScreen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 131, 401));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/wizard.png")));
        verticalLayoutWidget = new QWidget(WelcomeScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(220, 10, 421, 401));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(32);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(14);
        label_3->setFont(font2);
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        frame = new QFrame(WelcomeScreen);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 641, 421));
        frame->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        stackedWidget->addWidget(WelcomeScreen);
        frame->raise();
        label->raise();
        verticalLayoutWidget->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        frame_2 = new QFrame(page_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(-1, -1, 642, 51));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Plain);
        stackedWidget->addWidget(page_2);
        Wizard->setCentralWidget(centralwidget);
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

        stackedWidget->setCurrentIndex(0);


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
        label->setText(QString());
        label_2->setText(QApplication::translate("Wizard", "Welcome to         Raster Wizard", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Wizard", "This will guide you to reprojecting a raster.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Wizard", "Click next, to Continue...", 0, QApplication::UnicodeUTF8));
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
