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
    wizard.cpp \
    projections.cpp

HEADERS  += selection.h \
    advanced.h \
    wizard.h \
    projections.h


FORMS    += selection.ui \
    advanced.ui \
    wizard.ui

RESOURCES += \
    resources.qrc

RC_FILE += \
    icon.rc

#win32:LIBS += D:/cygwin/home/mstramel/drasterblaster/lib/libgctp.lib
#win32:LIBS += D:/cygwin/home/mstramel/drasterblaster/lib/librasterblaster.lib


#INCLUDEPATH = D:/cygwin/home/mstramel/drasterblaster/include/
#INCLUDEPATH += C:/Qt-Shared/Desktop/Qt/4.7.4/mingw/include/other/

#QMAKE_CXXFLAGS += -DHAVE_TR1_SHARED_PTR -DHAVE_SINCOS
