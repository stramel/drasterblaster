/********************************************************************************
** Form generated from reading UI file 'selection.ui'
**
** Created: Mon May 7 09:37:52 2012
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
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Selection
{
public:
    QPushButton *btnWizard;
    QPushButton *btnAdvanced;

    void setupUi(QDialog *Selection)
    {
        if (Selection->objectName().isEmpty())
            Selection->setObjectName(QString::fromUtf8("Selection"));
        Selection->resize(510, 328);
        Selection->setStyleSheet(QString::fromUtf8("background-color:#eee;"));
        btnWizard = new QPushButton(Selection);
        btnWizard->setObjectName(QString::fromUtf8("btnWizard"));
        btnWizard->setGeometry(QRect(10, 10, 491, 241));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        btnWizard->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/games-solve (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWizard->setIcon(icon);
        btnWizard->setIconSize(QSize(128, 128));
        btnWizard->setAutoRepeatInterval(100);
        btnWizard->setAutoDefault(true);
        btnWizard->setFlat(false);
        btnAdvanced = new QPushButton(Selection);
        btnAdvanced->setObjectName(QString::fromUtf8("btnAdvanced"));
        btnAdvanced->setGeometry(QRect(10, 260, 491, 61));
        QFont font1;
        font1.setPointSize(14);
        btnAdvanced->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/preferences-other.png"), QSize(), QIcon::Normal, QIcon::On);
        btnAdvanced->setIcon(icon1);
        btnAdvanced->setIconSize(QSize(48, 48));

        retranslateUi(Selection);

        QMetaObject::connectSlotsByName(Selection);
    } // setupUi

    void retranslateUi(QDialog *Selection)
    {
        Selection->setWindowTitle(QApplication::translate("Selection", "Dialog", 0, QApplication::UnicodeUTF8));
        btnWizard->setText(QApplication::translate("Selection", "Raster Wizard", 0, QApplication::UnicodeUTF8));
        btnAdvanced->setText(QApplication::translate("Selection", "Advanced", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Selection: public Ui_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTION_H
