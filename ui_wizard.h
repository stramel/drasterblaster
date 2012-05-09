/********************************************************************************
** Form generated from reading UI file 'wizard.ui'
**
** Created: Wed May 9 13:40:46 2012
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
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QFrame *frame;
    QLabel *label;
    QWidget *OpenRaster;
    QFrame *Heading;
    QLabel *labelPageTitle;
    QLabel *labelPageDesc;
    QLabel *labelDetails;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelFile;
    QPushButton *btnBrowse;
    QFrame *line;
    QListWidget *listPages;
    QWidget *page;
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
        verticalLayoutWidget = new QWidget(WelcomeScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 10, 381, 401));
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
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 30, 261, 381));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/tools-wizard256.png")));
        stackedWidget->addWidget(WelcomeScreen);
        frame->raise();
        verticalLayoutWidget->raise();
        OpenRaster = new QWidget();
        OpenRaster->setObjectName(QString::fromUtf8("OpenRaster"));
        Heading = new QFrame(OpenRaster);
        Heading->setObjectName(QString::fromUtf8("Heading"));
        Heading->setGeometry(QRect(-1, -1, 642, 61));
        Heading->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        Heading->setFrameShape(QFrame::Box);
        Heading->setFrameShadow(QFrame::Plain);
        labelPageTitle = new QLabel(Heading);
        labelPageTitle->setObjectName(QString::fromUtf8("labelPageTitle"));
        labelPageTitle->setGeometry(QRect(20, 10, 171, 20));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        labelPageTitle->setFont(font3);
        labelPageDesc = new QLabel(Heading);
        labelPageDesc->setObjectName(QString::fromUtf8("labelPageDesc"));
        labelPageDesc->setGeometry(QRect(40, 30, 301, 21));
        labelPageDesc->setFont(font);
        labelPageDesc->setWordWrap(true);
        labelDetails = new QLabel(OpenRaster);
        labelDetails->setObjectName(QString::fromUtf8("labelDetails"));
        labelDetails->setGeometry(QRect(200, 80, 411, 71));
        labelDetails->setFont(font);
        labelDetails->setWordWrap(true);
        groupBox = new QGroupBox(OpenRaster);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(190, 200, 421, 61));
        groupBox->setFont(font);
        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 20, 401, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelFile = new QLabel(horizontalLayoutWidget_2);
        labelFile->setObjectName(QString::fromUtf8("labelFile"));
        labelFile->setFont(font);

        horizontalLayout_2->addWidget(labelFile);

        btnBrowse = new QPushButton(horizontalLayoutWidget_2);
        btnBrowse->setObjectName(QString::fromUtf8("btnBrowse"));
        btnBrowse->setMaximumSize(QSize(100, 16777215));
        btnBrowse->setFont(font);

        horizontalLayout_2->addWidget(btnBrowse);

        line = new QFrame(OpenRaster);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(150, 70, 20, 341));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        listPages = new QListWidget(OpenRaster);
        new QListWidgetItem(listPages);
        new QListWidgetItem(listPages);
        new QListWidgetItem(listPages);
        new QListWidgetItem(listPages);
        new QListWidgetItem(listPages);
        new QListWidgetItem(listPages);
        new QListWidgetItem(listPages);
        new QListWidgetItem(listPages);
        new QListWidgetItem(listPages);
        new QListWidgetItem(listPages);
        listPages->setObjectName(QString::fromUtf8("listPages"));
        listPages->setGeometry(QRect(10, 70, 151, 341));
        listPages->setFont(font);
        listPages->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QListWidget::item:selected:active {\n"
"	background-color: #0000ff;\n"
"}\n"
""));
        listPages->setFrameShape(QFrame::NoFrame);
        listPages->setFrameShadow(QFrame::Plain);
        listPages->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listPages->setAutoScroll(false);
        listPages->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listPages->setProperty("showDropIndicator", QVariant(false));
        listPages->setAlternatingRowColors(false);
        listPages->setSelectionBehavior(QAbstractItemView::SelectRows);
        listPages->setSpacing(6);
        listPages->setUniformItemSizes(true);
        listPages->setSelectionRectVisible(true);
        stackedWidget->addWidget(OpenRaster);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
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

        stackedWidget->setCurrentIndex(1);
        listPages->setCurrentRow(-1);


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
        label_2->setText(QApplication::translate("Wizard", "Welcome to         Raster Wizard", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Wizard", "This will guide you to reprojecting a raster.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Wizard", "Click next, to Continue...", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        labelPageTitle->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        labelPageDesc->setText(QApplication::translate("Wizard", "Select the raster to open", 0, QApplication::UnicodeUTF8));
        labelDetails->setText(QApplication::translate("Wizard", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Wizard", "Select File", 0, QApplication::UnicodeUTF8));
        labelFile->setText(QApplication::translate("Wizard", "TextLabel", 0, QApplication::UnicodeUTF8));
        btnBrowse->setText(QApplication::translate("Wizard", "Browse...", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listPages->isSortingEnabled();
        listPages->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listPages->item(2);
        ___qlistwidgetitem->setText(QApplication::translate("Wizard", "Welcome", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listPages->item(3);
        ___qlistwidgetitem1->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listPages->item(4);
        ___qlistwidgetitem2->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = listPages->item(5);
        ___qlistwidgetitem3->setText(QApplication::translate("Wizard", "Select Output Options", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = listPages->item(6);
        ___qlistwidgetitem4->setText(QApplication::translate("Wizard", "Preview Output", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = listPages->item(7);
        ___qlistwidgetitem5->setText(QApplication::translate("Wizard", "Reproject and Save", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem6 = listPages->item(8);
        ___qlistwidgetitem6->setText(QApplication::translate("Wizard", "Finish", 0, QApplication::UnicodeUTF8));
        listPages->setSortingEnabled(__sortingEnabled);

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
