#-------------------------------------------------
#
# Project created by QtCreator 2012-04-23T12:26:26
#
#-------------------------------------------------

QT       += core gui

TARGET = dRasterBlaster
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    src/driver.cpp \
    src/resampler.cpp \
    src/reprojector.cpp \
    src/rasterchunk.cpp \
    src/projectedraster.cpp \
    src/main.cpp

HEADERS  += mainwindow.h \
    src/resampler.hh \
    src/reprojector.hh \
    src/rasterchunk.hh \
    src/projectedraster.hh \
    src/driver.hh \
    src/sharedptr.hh

FORMS    += mainwindow.ui

