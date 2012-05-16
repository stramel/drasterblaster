/********************************************************************************
** Form generated from reading UI file 'wizard.ui'
**
** Created: Fri May 11 11:44:49 2012
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
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
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
    QLabel *label_5;
    QLabel *labelDetails;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelFile;
    QPushButton *btnBrowse;
    QFrame *line;
    QListWidget *listPages;
    QWidget *EditInput;
    QFrame *Heading_2;
    QLabel *labelPageTitle_2;
    QLabel *labelPageDesc_2;
    QLabel *label_6;
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
    QWidget *EditInputProj;
    QFrame *Heading_7;
    QLabel *labelPageTitle_7;
    QLabel *labelPageDesc_7;
    QLabel *label_15;
    QListWidget *listPages_7;
    QFrame *line_7;
    QStackedWidget *projectionInfo;
    QWidget *page;
    QWidget *page_2;
    QLabel *label_16;
    QWidget *SelectOutputOptions;
    QFrame *line_3;
    QListWidget *listPages_3;
    QFrame *Heading_3;
    QLabel *labelPageTitle_3;
    QLabel *labelPageDesc_3;
    QLabel *label_7;
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
    QWidget *horizontalLayoutWidget_12;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelFile_2;
    QPushButton *btnBrowse_2;
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QLabel *label_17;
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
        labelPageTitle->setGeometry(QRect(80, 10, 171, 20));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        labelPageTitle->setFont(font3);
        labelPageDesc = new QLabel(Heading);
        labelPageDesc->setObjectName(QString::fromUtf8("labelPageDesc"));
        labelPageDesc->setGeometry(QRect(100, 30, 301, 21));
        labelPageDesc->setFont(font);
        labelPageDesc->setWordWrap(true);
        label_5 = new QLabel(Heading);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 10, 46, 41));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Images/tools-wizard256.png")));
        label_5->setScaledContents(true);
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
"QListWidget::item:selected, QListWidget::item:selected:active{\n"
"	background-color: rgba(71, 175, 255, 128);\n"
"	border: 1px solid rgba(71, 175, 255, 128);\n"
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
        EditInput = new QWidget();
        EditInput->setObjectName(QString::fromUtf8("EditInput"));
        Heading_2 = new QFrame(EditInput);
        Heading_2->setObjectName(QString::fromUtf8("Heading_2"));
        Heading_2->setGeometry(QRect(-1, -1, 642, 61));
        Heading_2->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        Heading_2->setFrameShape(QFrame::Box);
        Heading_2->setFrameShadow(QFrame::Plain);
        labelPageTitle_2 = new QLabel(Heading_2);
        labelPageTitle_2->setObjectName(QString::fromUtf8("labelPageTitle_2"));
        labelPageTitle_2->setGeometry(QRect(80, 10, 171, 20));
        labelPageTitle_2->setFont(font3);
        labelPageDesc_2 = new QLabel(Heading_2);
        labelPageDesc_2->setObjectName(QString::fromUtf8("labelPageDesc_2"));
        labelPageDesc_2->setGeometry(QRect(100, 30, 471, 21));
        labelPageDesc_2->setFont(font);
        labelPageDesc_2->setWordWrap(true);
        label_6 = new QLabel(Heading_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 10, 46, 41));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Images/tools-wizard256.png")));
        label_6->setScaledContents(true);
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

        stackedWidget->addWidget(EditInput);
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
        projectionInfo = new QStackedWidget(EditInputProj);
        projectionInfo->setObjectName(QString::fromUtf8("projectionInfo"));
        projectionInfo->setGeometry(QRect(170, 110, 461, 301));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        projectionInfo->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        projectionInfo->addWidget(page_2);
        label_16 = new QLabel(EditInputProj);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(180, 70, 441, 41));
        label_16->setFont(font);
        label_16->setWordWrap(true);
        stackedWidget->addWidget(EditInputProj);
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
        stackedWidget->addWidget(SelectOutputOptions);
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
        stackedWidget->addWidget(PreviewOutput);
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
        groupBox_2->setGeometry(QRect(180, 150, 431, 61));
        groupBox_2->setFont(font);
        horizontalLayoutWidget_12 = new QWidget(groupBox_2);
        horizontalLayoutWidget_12->setObjectName(QString::fromUtf8("horizontalLayoutWidget_12"));
        horizontalLayoutWidget_12->setGeometry(QRect(10, 20, 411, 31));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_12);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        labelFile_2 = new QLabel(horizontalLayoutWidget_12);
        labelFile_2->setObjectName(QString::fromUtf8("labelFile_2"));
        labelFile_2->setFont(font);

        horizontalLayout_11->addWidget(labelFile_2);

        btnBrowse_2 = new QPushButton(horizontalLayoutWidget_12);
        btnBrowse_2->setObjectName(QString::fromUtf8("btnBrowse_2"));
        btnBrowse_2->setMaximumSize(QSize(100, 16777215));
        btnBrowse_2->setFont(font);

        horizontalLayout_11->addWidget(btnBrowse_2);

        progressBar = new QProgressBar(ReprojectSave);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(190, 380, 401, 21));
        progressBar->setValue(24);
        pushButton = new QPushButton(ReprojectSave);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 250, 121, 31));
        pushButton->setFont(font3);
        label_17 = new QLabel(ReprojectSave);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(180, 290, 431, 71));
        label_17->setFont(font);
        label_18 = new QLabel(ReprojectSave);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(180, 70, 431, 71));
        stackedWidget->addWidget(ReprojectSave);
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

        stackedWidget->addWidget(Finish);
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
        listPages->setCurrentRow(3);
        listPages_2->setCurrentRow(4);
        pixelUnits->setCurrentIndex(1);
        pixelType->setCurrentIndex(7);
        listPages_7->setCurrentRow(4);
        listPages_3->setCurrentRow(5);
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
        label_2->setText(QApplication::translate("Wizard", "Welcome to         Raster Wizard", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Wizard", "This will guide you to reprojecting a raster.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Wizard", "Click next, to Continue...", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        labelPageTitle->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        labelPageDesc->setText(QApplication::translate("Wizard", "Select the raster to open", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
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

        labelPageTitle_2->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        labelPageDesc_2->setText(QApplication::translate("Wizard", "Review the current input parameters and change anything that may need changed", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());

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
         << QApplication::translate("Wizard", "Sphere of Radius 6,370,997 meters", 0, QApplication::UnicodeUTF8)
        );
        label_14->setText(QApplication::translate("Wizard", "Pixel Size", 0, QApplication::UnicodeUTF8));
        pixelUnits->clear();
        pixelUnits->insertItems(0, QStringList()
         << QApplication::translate("Wizard", "Arcsecond(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Arcminute(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Degree(s)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Meter(s)", 0, QApplication::UnicodeUTF8)
        );
        labelPixelType_2->setText(QApplication::translate("Wizard", "Pixel Type", 0, QApplication::UnicodeUTF8));
        pixelType->clear();
        pixelType->insertItems(0, QStringList()
         << QApplication::translate("Wizard", "Signed 8-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Unsigned 8-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Signed 16-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Unsigned 16-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Signed 32-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Unsigned 32-Bit Integer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Signed 32-Bit IEEE Float", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wizard", "Signed 64-Bit IEEE Float", 0, QApplication::UnicodeUTF8)
        );
        labelULlat_2->setText(QApplication::translate("Wizard", "UL Latitude", 0, QApplication::UnicodeUTF8));
        labelULlat_3->setText(QApplication::translate("Wizard", "UL Longitude", 0, QApplication::UnicodeUTF8));
        labelFillValue_2->setText(QApplication::translate("Wizard", "Fill Value", 0, QApplication::UnicodeUTF8));
        fillEnable->setText(QString());
        labelNoDataValue_2->setText(QApplication::translate("Wizard", "No Data Value", 0, QApplication::UnicodeUTF8));
        noDataValueEnable->setText(QString());
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

        label_16->setText(QApplication::translate("Wizard", "Many of these inputs will not need changed. If you are unsure, either hover over an item for more details or click 'Next' to continue through the Wizard.", 0, QApplication::UnicodeUTF8));

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
        labelPageTitle_4->setText(QApplication::translate("Wizard", "Preview Output", 0, QApplication::UnicodeUTF8));
        labelPageDesc_4->setText(QApplication::translate("Wizard", "Below will show a preview output based on the options selected in previous pages", 0, QApplication::UnicodeUTF8));
        label_8->setText(QString());

        const bool __sortingEnabled4 = listPages_4->isSortingEnabled();
        listPages_4->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem28 = listPages_4->item(2);
        ___qlistwidgetitem28->setText(QApplication::translate("Wizard", "Welcome", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem29 = listPages_4->item(3);
        ___qlistwidgetitem29->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem30 = listPages_4->item(4);
        ___qlistwidgetitem30->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem31 = listPages_4->item(5);
        ___qlistwidgetitem31->setText(QApplication::translate("Wizard", "Select Output Options", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem32 = listPages_4->item(6);
        ___qlistwidgetitem32->setText(QApplication::translate("Wizard", "Preview Output", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem33 = listPages_4->item(7);
        ___qlistwidgetitem33->setText(QApplication::translate("Wizard", "Reproject and Save", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem34 = listPages_4->item(8);
        ___qlistwidgetitem34->setText(QApplication::translate("Wizard", "Finish", 0, QApplication::UnicodeUTF8));
        listPages_4->setSortingEnabled(__sortingEnabled4);

        labelPageTitle_5->setText(QApplication::translate("Wizard", "Reproject and Save", 0, QApplication::UnicodeUTF8));
        labelPageDesc_5->setText(QApplication::translate("Wizard", "Assuming the preview was alright, select a place to save the reprojection", 0, QApplication::UnicodeUTF8));
        label_9->setText(QString());

        const bool __sortingEnabled5 = listPages_5->isSortingEnabled();
        listPages_5->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem35 = listPages_5->item(2);
        ___qlistwidgetitem35->setText(QApplication::translate("Wizard", "Welcome", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem36 = listPages_5->item(3);
        ___qlistwidgetitem36->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem37 = listPages_5->item(4);
        ___qlistwidgetitem37->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem38 = listPages_5->item(5);
        ___qlistwidgetitem38->setText(QApplication::translate("Wizard", "Select Output Options", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem39 = listPages_5->item(6);
        ___qlistwidgetitem39->setText(QApplication::translate("Wizard", "Preview Output", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem40 = listPages_5->item(7);
        ___qlistwidgetitem40->setText(QApplication::translate("Wizard", "Reproject and Save", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem41 = listPages_5->item(8);
        ___qlistwidgetitem41->setText(QApplication::translate("Wizard", "Finish", 0, QApplication::UnicodeUTF8));
        listPages_5->setSortingEnabled(__sortingEnabled5);

        groupBox_2->setTitle(QApplication::translate("Wizard", "Select Place to Save", 0, QApplication::UnicodeUTF8));
        labelFile_2->setText(QApplication::translate("Wizard", "TextLabel", 0, QApplication::UnicodeUTF8));
        btnBrowse_2->setText(QApplication::translate("Wizard", "Browse...", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Wizard", "Reproject", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Wizard", "This may take a while depending on the size of raster selected originally", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Wizard", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelPageTitle_6->setText(QApplication::translate("Wizard", "Finished", 0, QApplication::UnicodeUTF8));
        labelPageDesc_6->setText(QApplication::translate("Wizard", "Raster has been successfully reprojected", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());

        const bool __sortingEnabled6 = listPages_6->isSortingEnabled();
        listPages_6->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem42 = listPages_6->item(2);
        ___qlistwidgetitem42->setText(QApplication::translate("Wizard", "Welcome", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem43 = listPages_6->item(3);
        ___qlistwidgetitem43->setText(QApplication::translate("Wizard", "Open Raster", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem44 = listPages_6->item(4);
        ___qlistwidgetitem44->setText(QApplication::translate("Wizard", "Edit Input Parameters", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem45 = listPages_6->item(5);
        ___qlistwidgetitem45->setText(QApplication::translate("Wizard", "Select Output Options", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem46 = listPages_6->item(6);
        ___qlistwidgetitem46->setText(QApplication::translate("Wizard", "Preview Output", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem47 = listPages_6->item(7);
        ___qlistwidgetitem47->setText(QApplication::translate("Wizard", "Reproject and Save", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem48 = listPages_6->item(8);
        ___qlistwidgetitem48->setText(QApplication::translate("Wizard", "Finish", 0, QApplication::UnicodeUTF8));
        listPages_6->setSortingEnabled(__sortingEnabled6);

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
