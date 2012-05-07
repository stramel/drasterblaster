/********************************************************************************
** Form generated from reading UI file 'wizard.ui'
**
** Created: Fri May 4 13:40:57 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZARD_H
#define UI_WIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Wizard
{
public:
    QFrame *mainFrame;
    QLabel *imgWizard;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelWelcome;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelDetails;
    QSpacerItem *verticalSpacer;
    QLabel *labelContinue;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnBack;
    QPushButton *btnCancel;
    QPushButton *btnNext;

    void setupUi(QDialog *Wizard)
    {
        if (Wizard->objectName().isEmpty())
            Wizard->setObjectName(QString::fromUtf8("Wizard"));
        Wizard->resize(510, 328);
        mainFrame = new QFrame(Wizard);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        mainFrame->setEnabled(true);
        mainFrame->setGeometry(QRect(-1, -1, 511, 281));
        mainFrame->setStyleSheet(QString::fromUtf8("background-color: #fff;"));
        mainFrame->setFrameShape(QFrame::Panel);
        mainFrame->setFrameShadow(QFrame::Plain);
        imgWizard = new QLabel(mainFrame);
        imgWizard->setObjectName(QString::fromUtf8("imgWizard"));
        imgWizard->setGeometry(QRect(10, 0, 141, 281));
        imgWizard->setPixmap(QPixmap(QString::fromUtf8(":/Images/games-solve (1).png")));
        verticalLayoutWidget = new QWidget(mainFrame);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(160, -1, 351, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        labelWelcome = new QLabel(verticalLayoutWidget);
        labelWelcome->setObjectName(QString::fromUtf8("labelWelcome"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        labelWelcome->setFont(font);
        labelWelcome->setWordWrap(true);

        verticalLayout->addWidget(labelWelcome);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_3);

        labelDetails = new QLabel(verticalLayoutWidget);
        labelDetails->setObjectName(QString::fromUtf8("labelDetails"));
        labelDetails->setWordWrap(true);

        verticalLayout->addWidget(labelDetails);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        labelContinue = new QLabel(verticalLayoutWidget);
        labelContinue->setObjectName(QString::fromUtf8("labelContinue"));

        verticalLayout->addWidget(labelContinue);

        horizontalLayoutWidget = new QWidget(Wizard);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 280, 501, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnBack = new QPushButton(horizontalLayoutWidget);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setEnabled(false);

        horizontalLayout->addWidget(btnBack);

        btnCancel = new QPushButton(horizontalLayoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);

        btnNext = new QPushButton(horizontalLayoutWidget);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));

        horizontalLayout->addWidget(btnNext);


        retranslateUi(Wizard);

        QMetaObject::connectSlotsByName(Wizard);
    } // setupUi

    void retranslateUi(QDialog *Wizard)
    {
        Wizard->setWindowTitle(QApplication::translate("Wizard", "Dialog", 0, QApplication::UnicodeUTF8));
        imgWizard->setText(QString());
        labelWelcome->setText(QApplication::translate("Wizard", "Welcome to the Raster Wizard", 0, QApplication::UnicodeUTF8));
        labelDetails->setText(QApplication::translate("Wizard", "This wizard will guide you through reprojecting any raster easily allowing you to change any aspect of the original raster", 0, QApplication::UnicodeUTF8));
        labelContinue->setText(QApplication::translate("Wizard", "To continue, click Next", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("Wizard", "< Back", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("Wizard", "Cancel", 0, QApplication::UnicodeUTF8));
        btnNext->setText(QApplication::translate("Wizard", "Next >", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Wizard: public Ui_Wizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARD_H
