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
    projections.cpp \
    prasterblaster/src/resampler.cpp \
    prasterblaster/src/reprojector.cpp \
    prasterblaster/src/rasterchunk.cpp \
    prasterblaster/src/quadtree.cpp \
    prasterblaster/src/projectedraster.cpp \
    prasterblaster/src/gctp_cpp/wagnervii.cpp \
    prasterblaster/src/gctp_cpp/wagneriv.cpp \
    prasterblaster/src/gctp_cpp/vandergrinten.cpp \
    prasterblaster/src/gctp_cpp/utm.cpp \
    prasterblaster/src/gctp_cpp/util.cpp \
    prasterblaster/src/gctp_cpp/transversemercator.cpp \
    prasterblaster/src/gctp_cpp/transformer.cpp \
    prasterblaster/src/gctp_cpp/stereo.cpp \
    prasterblaster/src/gctp_cpp/spaceobmerc.cpp \
    prasterblaster/src/gctp_cpp/sinusoidal.cpp \
    prasterblaster/src/gctp_cpp/robinson.cpp \
    prasterblaster/src/gctp_cpp/projection.cpp \
    prasterblaster/src/gctp_cpp/polyconic.cpp \
    prasterblaster/src/gctp_cpp/polarstereo.cpp \
    prasterblaster/src/gctp_cpp/orthographic.cpp \
    prasterblaster/src/gctp_cpp/oblatedeqarea.cpp \
    prasterblaster/src/gctp_cpp/Mollweide.cpp \
    prasterblaster/src/gctp_cpp/miller.cpp \
    prasterblaster/src/gctp_cpp/mercator.cpp \
    prasterblaster/src/gctp_cpp/lambertcc.cpp \
    prasterblaster/src/gctp_cpp/lambertazimuth.cpp \
    prasterblaster/src/gctp_cpp/intmollweide.cpp \
    prasterblaster/src/gctp_cpp/hotinobmerc.cpp \
    prasterblaster/src/gctp_cpp/hammer.cpp \
    prasterblaster/src/gctp_cpp/goodeh.cpp \
    prasterblaster/src/gctp_cpp/gnomonic.cpp \
    prasterblaster/src/gctp_cpp/genvertnsp.cpp \
    prasterblaster/src/gctp_cpp/equirectangular.cpp \
    prasterblaster/src/gctp_cpp/equidistantc.cpp \
    prasterblaster/src/gctp_cpp/cproj.cpp \
    prasterblaster/src/gctp_cpp/coordinate.cpp \
    prasterblaster/src/gctp_cpp/constants.cpp \
    prasterblaster/src/gctp_cpp/azequidistant.cpp \
    prasterblaster/src/gctp_cpp/albersConEqArea.cpp \
    prasterblaster/src/gctp_cpp/alaskaconformal.cpp \
    new_wizard2.cpp

HEADERS  += selection.h \
    advanced.h \
    projections.h \
    prasterblaster/src/sharedptr.hh \
    prasterblaster/src/resampler.hh \
    prasterblaster/src/reprojector.hh \
    prasterblaster/src/rasterchunk.hh \
    prasterblaster/src/quadtree.hh \
    prasterblaster/src/projectedraster.hh \
    prasterblaster/src/gctp_cpp/wagnervii.h \
    prasterblaster/src/gctp_cpp/wagneriv.h \
    prasterblaster/src/gctp_cpp/vandergrinten.h \
    prasterblaster/src/gctp_cpp/utm.h \
    prasterblaster/src/gctp_cpp/util.h \
    prasterblaster/src/gctp_cpp/transversemercator.h \
    prasterblaster/src/gctp_cpp/transformer.h \
    prasterblaster/src/gctp_cpp/stereo.h \
    prasterblaster/src/gctp_cpp/spaceobmerc.h \
    prasterblaster/src/gctp_cpp/sinusoidal.h \
    prasterblaster/src/gctp_cpp/robinson.h \
    prasterblaster/src/gctp_cpp/projection.h \
    prasterblaster/src/gctp_cpp/polyconic.h \
    prasterblaster/src/gctp_cpp/polarstereo.h \
    prasterblaster/src/gctp_cpp/orthographic.h \
    prasterblaster/src/gctp_cpp/oblatedeqarea.h \
    prasterblaster/src/gctp_cpp/mollweide.h \
    prasterblaster/src/gctp_cpp/miller.h \
    prasterblaster/src/gctp_cpp/mercator.h \
    prasterblaster/src/gctp_cpp/lambertcc.h \
    prasterblaster/src/gctp_cpp/lambertazimuth.h \
    prasterblaster/src/gctp_cpp/intmollweide.h \
    prasterblaster/src/gctp_cpp/hotinobmerc.h \
    prasterblaster/src/gctp_cpp/hammer.h \
    prasterblaster/src/gctp_cpp/goodeh.h \
    prasterblaster/src/gctp_cpp/gnomonic.h \
    prasterblaster/src/gctp_cpp/genvertnsp.h \
    prasterblaster/src/gctp_cpp/equirectangular.h \
    prasterblaster/src/gctp_cpp/equidistantc.h \
    prasterblaster/src/gctp_cpp/cproj.h \
    prasterblaster/src/gctp_cpp/coordinate.h \
    prasterblaster/src/gctp_cpp/constants.h \
    prasterblaster/src/gctp_cpp/azequidistant.h \
    prasterblaster/src/gctp_cpp/albersConEqArea.h \
    prasterblaster/src/gctp_cpp/alaskaconformal.h \
    new_wizard.h


FORMS    += selection.ui \
    advanced.ui \
    new_wizard2.ui

RESOURCES += \
    resources.qrc

RC_FILE += \
    icon.rc

INCLUDEPATH += prasterblaster/src/
INCLUDEPATH += prasterblaster/src/gctp_cpp/
INCLUDEPATH += /home/mstramel/include/
LIBS += /home/mstramel/lib/libgdal.a

QMAKE_CXXFLAGS += -DHAVE_TR1_SHARED_PTR -DHAVE_SINCOS
