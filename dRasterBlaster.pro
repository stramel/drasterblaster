#-------------------------------------------------
#
# Project created by QtCreator 2012-05-07T15:23:24
#
#-------------------------------------------------

QT       += core gui

TARGET = dRasterBlaster
TEMPLATE = app


SOURCES += main.cpp\
        selection.cpp \
    advanced.cpp \
    wizard.cpp

HEADERS  += selection.h \
    advanced.h \
    wizard.h

FORMS    += selection.ui \
    advanced.ui \
    wizard.ui

RESOURCES += \
    resources.qrc

RC_FILE += \
    icon.rc
