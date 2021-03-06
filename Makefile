#############################################################################
# Makefile for building: dRasterBlaster
# Generated by qmake (2.01a) (Qt 4.8.1) on: Fri Jul 13 14:08:19 2012
# Project:  dRasterBlaster.pro
# Template: app
# Command: /usr/bin/qmake -o Makefile dRasterBlaster.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -DHAVE_TR1_SHARED_PTR -DHAVE_SINCOS -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -Iprasterblaster/src -Iprasterblaster/src/gctp_cpp -I../../include -I. -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu /home/mstramel/lib/libgdal.a -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		selection.cpp \
		advanced.cpp \
		wizard.cpp \
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
		prasterblaster/src/gctp_cpp/alaskaconformal.cpp moc_selection.cpp \
		moc_advanced.cpp \
		moc_wizard.cpp \
		moc_projections.cpp \
		qrc_resources.cpp
OBJECTS       = main.o \
		selection.o \
		advanced.o \
		wizard.o \
		projections.o \
		resampler.o \
		reprojector.o \
		rasterchunk.o \
		quadtree.o \
		projectedraster.o \
		wagnervii.o \
		wagneriv.o \
		vandergrinten.o \
		utm.o \
		util.o \
		transversemercator.o \
		transformer.o \
		stereo.o \
		spaceobmerc.o \
		sinusoidal.o \
		robinson.o \
		projection.o \
		polyconic.o \
		polarstereo.o \
		orthographic.o \
		oblatedeqarea.o \
		Mollweide.o \
		miller.o \
		mercator.o \
		lambertcc.o \
		lambertazimuth.o \
		intmollweide.o \
		hotinobmerc.o \
		hammer.o \
		goodeh.o \
		gnomonic.o \
		genvertnsp.o \
		equirectangular.o \
		equidistantc.o \
		cproj.o \
		coordinate.o \
		constants.o \
		azequidistant.o \
		albersConEqArea.o \
		alaskaconformal.o \
		moc_selection.o \
		moc_advanced.o \
		moc_wizard.o \
		moc_projections.o \
		qrc_resources.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		dRasterBlaster.pro
QMAKE_TARGET  = dRasterBlaster
DESTDIR       = 
TARGET        = dRasterBlaster

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_selection.h ui_advanced.h ui_wizard.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: dRasterBlaster.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile dRasterBlaster.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile dRasterBlaster.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/dRasterBlaster1.0.0 || $(MKDIR) .tmp/dRasterBlaster1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/dRasterBlaster1.0.0/ && $(COPY_FILE) --parents selection.h advanced.h wizard.h projections.h prasterblaster/src/sharedptr.hh prasterblaster/src/resampler.hh prasterblaster/src/reprojector.hh prasterblaster/src/rasterchunk.hh prasterblaster/src/quadtree.hh prasterblaster/src/projectedraster.hh prasterblaster/src/gctp_cpp/wagnervii.h prasterblaster/src/gctp_cpp/wagneriv.h prasterblaster/src/gctp_cpp/vandergrinten.h prasterblaster/src/gctp_cpp/utm.h prasterblaster/src/gctp_cpp/util.h prasterblaster/src/gctp_cpp/transversemercator.h prasterblaster/src/gctp_cpp/transformer.h prasterblaster/src/gctp_cpp/stereo.h prasterblaster/src/gctp_cpp/spaceobmerc.h prasterblaster/src/gctp_cpp/sinusoidal.h prasterblaster/src/gctp_cpp/robinson.h prasterblaster/src/gctp_cpp/projection.h prasterblaster/src/gctp_cpp/polyconic.h prasterblaster/src/gctp_cpp/polarstereo.h prasterblaster/src/gctp_cpp/orthographic.h prasterblaster/src/gctp_cpp/oblatedeqarea.h prasterblaster/src/gctp_cpp/mollweide.h prasterblaster/src/gctp_cpp/miller.h prasterblaster/src/gctp_cpp/mercator.h prasterblaster/src/gctp_cpp/lambertcc.h prasterblaster/src/gctp_cpp/lambertazimuth.h prasterblaster/src/gctp_cpp/intmollweide.h prasterblaster/src/gctp_cpp/hotinobmerc.h prasterblaster/src/gctp_cpp/hammer.h prasterblaster/src/gctp_cpp/goodeh.h prasterblaster/src/gctp_cpp/gnomonic.h prasterblaster/src/gctp_cpp/genvertnsp.h prasterblaster/src/gctp_cpp/equirectangular.h prasterblaster/src/gctp_cpp/equidistantc.h prasterblaster/src/gctp_cpp/cproj.h prasterblaster/src/gctp_cpp/coordinate.h prasterblaster/src/gctp_cpp/constants.h prasterblaster/src/gctp_cpp/azequidistant.h prasterblaster/src/gctp_cpp/albersConEqArea.h prasterblaster/src/gctp_cpp/alaskaconformal.h .tmp/dRasterBlaster1.0.0/ && $(COPY_FILE) --parents resources.qrc .tmp/dRasterBlaster1.0.0/ && $(COPY_FILE) --parents main.cpp selection.cpp advanced.cpp wizard.cpp projections.cpp prasterblaster/src/resampler.cpp prasterblaster/src/reprojector.cpp prasterblaster/src/rasterchunk.cpp prasterblaster/src/quadtree.cpp prasterblaster/src/projectedraster.cpp prasterblaster/src/gctp_cpp/wagnervii.cpp prasterblaster/src/gctp_cpp/wagneriv.cpp prasterblaster/src/gctp_cpp/vandergrinten.cpp prasterblaster/src/gctp_cpp/utm.cpp prasterblaster/src/gctp_cpp/util.cpp prasterblaster/src/gctp_cpp/transversemercator.cpp prasterblaster/src/gctp_cpp/transformer.cpp prasterblaster/src/gctp_cpp/stereo.cpp prasterblaster/src/gctp_cpp/spaceobmerc.cpp prasterblaster/src/gctp_cpp/sinusoidal.cpp prasterblaster/src/gctp_cpp/robinson.cpp prasterblaster/src/gctp_cpp/projection.cpp prasterblaster/src/gctp_cpp/polyconic.cpp prasterblaster/src/gctp_cpp/polarstereo.cpp prasterblaster/src/gctp_cpp/orthographic.cpp prasterblaster/src/gctp_cpp/oblatedeqarea.cpp prasterblaster/src/gctp_cpp/Mollweide.cpp prasterblaster/src/gctp_cpp/miller.cpp prasterblaster/src/gctp_cpp/mercator.cpp prasterblaster/src/gctp_cpp/lambertcc.cpp prasterblaster/src/gctp_cpp/lambertazimuth.cpp prasterblaster/src/gctp_cpp/intmollweide.cpp prasterblaster/src/gctp_cpp/hotinobmerc.cpp prasterblaster/src/gctp_cpp/hammer.cpp prasterblaster/src/gctp_cpp/goodeh.cpp prasterblaster/src/gctp_cpp/gnomonic.cpp prasterblaster/src/gctp_cpp/genvertnsp.cpp prasterblaster/src/gctp_cpp/equirectangular.cpp prasterblaster/src/gctp_cpp/equidistantc.cpp prasterblaster/src/gctp_cpp/cproj.cpp prasterblaster/src/gctp_cpp/coordinate.cpp prasterblaster/src/gctp_cpp/constants.cpp prasterblaster/src/gctp_cpp/azequidistant.cpp prasterblaster/src/gctp_cpp/albersConEqArea.cpp prasterblaster/src/gctp_cpp/alaskaconformal.cpp .tmp/dRasterBlaster1.0.0/ && $(COPY_FILE) --parents selection.ui advanced.ui wizard.ui .tmp/dRasterBlaster1.0.0/ && (cd `dirname .tmp/dRasterBlaster1.0.0` && $(TAR) dRasterBlaster1.0.0.tar dRasterBlaster1.0.0 && $(COMPRESS) dRasterBlaster1.0.0.tar) && $(MOVE) `dirname .tmp/dRasterBlaster1.0.0`/dRasterBlaster1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/dRasterBlaster1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_selection.cpp moc_advanced.cpp moc_wizard.cpp moc_projections.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_selection.cpp moc_advanced.cpp moc_wizard.cpp moc_projections.cpp
moc_selection.cpp: selection.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) selection.h -o moc_selection.cpp

moc_advanced.cpp: advanced.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) advanced.h -o moc_advanced.cpp

moc_wizard.cpp: projections.h \
		wizard.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) wizard.h -o moc_wizard.cpp

moc_projections.cpp: projections.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) projections.h -o moc_projections.cpp

compiler_rcc_make_all: qrc_resources.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_resources.cpp
qrc_resources.cpp: resources.qrc \
		Images/svn-update.png \
		Images/icon_16x16x32.png \
		Images/configure-2.png \
		Images/document-save-516.png \
		Images/view-preview.png \
		Images/svn-commit.png \
		Images/document-open-516.png \
		Images/dialog-cancel-3.png \
		Images/documentation.png \
		Images/advanced.png \
		Images/qt-logo.png \
		Images/dialog-apply.png \
		Images/mail-mark-task.png \
		Images/document-close-316.png \
		Images/tools-wizard256.png \
		Images/system-search-4.png
	/usr/bin/rcc -name resources resources.qrc -o qrc_resources.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_selection.h ui_advanced.h ui_wizard.h
compiler_uic_clean:
	-$(DEL_FILE) ui_selection.h ui_advanced.h ui_wizard.h
ui_selection.h: selection.ui
	/usr/bin/uic-qt4 selection.ui -o ui_selection.h

ui_advanced.h: advanced.ui
	/usr/bin/uic-qt4 advanced.ui -o ui_advanced.h

ui_wizard.h: wizard.ui
	/usr/bin/uic-qt4 wizard.ui -o ui_wizard.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

main.o: main.cpp selection.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

selection.o: selection.cpp selection.h \
		wizard.h \
		projections.h \
		advanced.h \
		ui_selection.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o selection.o selection.cpp

advanced.o: advanced.cpp advanced.h \
		selection.h \
		ui_advanced.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o advanced.o advanced.cpp

wizard.o: wizard.cpp wizard.h \
		projections.h \
		selection.h \
		ui_wizard.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o wizard.o wizard.cpp

projections.o: projections.cpp projections.h \
		ui_advanced.h \
		wizard.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o projections.o projections.cpp

resampler.o: prasterblaster/src/resampler.cpp prasterblaster/src/resampler.hh \
		prasterblaster/src/rasterchunk.hh \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h \
		prasterblaster/src/gctp_cpp/coordinate.h \
		prasterblaster/src/sharedptr.hh
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o resampler.o prasterblaster/src/resampler.cpp

reprojector.o: prasterblaster/src/reprojector.cpp prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h \
		prasterblaster/src/gctp_cpp/transformer.h \
		prasterblaster/src/gctp_cpp/coordinate.h \
		prasterblaster/src/reprojector.hh \
		prasterblaster/src/projectedraster.hh \
		prasterblaster/src/rasterchunk.hh \
		prasterblaster/src/sharedptr.hh \
		prasterblaster/src/resampler.hh \
		prasterblaster/src/quadtree.hh
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o reprojector.o prasterblaster/src/reprojector.cpp

rasterchunk.o: prasterblaster/src/rasterchunk.cpp prasterblaster/src/rasterchunk.hh \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h \
		prasterblaster/src/gctp_cpp/coordinate.h \
		prasterblaster/src/sharedptr.hh
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o rasterchunk.o prasterblaster/src/rasterchunk.cpp

quadtree.o: prasterblaster/src/quadtree.cpp prasterblaster/src/quadtree.hh \
		prasterblaster/src/projectedraster.hh \
		prasterblaster/src/gctp_cpp/coordinate.h \
		prasterblaster/src/gctp_cpp/constants.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/transformer.h \
		prasterblaster/src/rasterchunk.hh \
		prasterblaster/src/sharedptr.hh
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o quadtree.o prasterblaster/src/quadtree.cpp

projectedraster.o: prasterblaster/src/projectedraster.cpp prasterblaster/src/gctp_cpp/transformer.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h \
		prasterblaster/src/gctp_cpp/coordinate.h \
		prasterblaster/src/gctp_cpp/mercator.h \
		prasterblaster/src/gctp_cpp/utm.h \
		prasterblaster/src/reprojector.hh \
		prasterblaster/src/projectedraster.hh \
		prasterblaster/src/rasterchunk.hh \
		prasterblaster/src/sharedptr.hh \
		prasterblaster/src/resampler.hh
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o projectedraster.o prasterblaster/src/projectedraster.cpp

wagnervii.o: prasterblaster/src/gctp_cpp/wagnervii.cpp prasterblaster/src/gctp_cpp/wagnervii.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o wagnervii.o prasterblaster/src/gctp_cpp/wagnervii.cpp

wagneriv.o: prasterblaster/src/gctp_cpp/wagneriv.cpp prasterblaster/src/gctp_cpp/wagneriv.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o wagneriv.o prasterblaster/src/gctp_cpp/wagneriv.cpp

vandergrinten.o: prasterblaster/src/gctp_cpp/vandergrinten.cpp prasterblaster/src/gctp_cpp/vandergrinten.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o vandergrinten.o prasterblaster/src/gctp_cpp/vandergrinten.cpp

utm.o: prasterblaster/src/gctp_cpp/utm.cpp prasterblaster/src/gctp_cpp/utm.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o utm.o prasterblaster/src/gctp_cpp/utm.cpp

util.o: prasterblaster/src/gctp_cpp/util.cpp prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o util.o prasterblaster/src/gctp_cpp/util.cpp

transversemercator.o: prasterblaster/src/gctp_cpp/transversemercator.cpp prasterblaster/src/gctp_cpp/transversemercator.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o transversemercator.o prasterblaster/src/gctp_cpp/transversemercator.cpp

transformer.o: prasterblaster/src/gctp_cpp/transformer.cpp prasterblaster/src/gctp_cpp/transformer.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h \
		prasterblaster/src/gctp_cpp/coordinate.h \
		prasterblaster/src/gctp_cpp/albersConEqArea.h \
		prasterblaster/src/gctp_cpp/lambertcc.h \
		prasterblaster/src/gctp_cpp/mercator.h \
		prasterblaster/src/gctp_cpp/polyconic.h \
		prasterblaster/src/gctp_cpp/equidistantc.h \
		prasterblaster/src/gctp_cpp/sinusoidal.h \
		prasterblaster/src/gctp_cpp/equirectangular.h \
		prasterblaster/src/gctp_cpp/mollweide.h \
		prasterblaster/src/gctp_cpp/intmollweide.h \
		prasterblaster/src/gctp_cpp/transversemercator.h \
		prasterblaster/src/gctp_cpp/miller.h \
		prasterblaster/src/gctp_cpp/polarstereo.h \
		prasterblaster/src/gctp_cpp/oblatedeqarea.h \
		prasterblaster/src/gctp_cpp/azequidistant.h \
		prasterblaster/src/gctp_cpp/genvertnsp.h \
		prasterblaster/src/gctp_cpp/gnomonic.h \
		prasterblaster/src/gctp_cpp/goodeh.h \
		prasterblaster/src/gctp_cpp/orthographic.h \
		prasterblaster/src/gctp_cpp/vandergrinten.h \
		prasterblaster/src/gctp_cpp/robinson.h \
		prasterblaster/src/gctp_cpp/hammer.h \
		prasterblaster/src/gctp_cpp/wagneriv.h \
		prasterblaster/src/gctp_cpp/wagnervii.h \
		prasterblaster/src/gctp_cpp/utm.h \
		prasterblaster/src/gctp_cpp/lambertazimuth.h \
		prasterblaster/src/gctp_cpp/spaceobmerc.h \
		prasterblaster/src/gctp_cpp/alaskaconformal.h \
		prasterblaster/src/gctp_cpp/hotinobmerc.h \
		prasterblaster/src/gctp_cpp/stereo.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o transformer.o prasterblaster/src/gctp_cpp/transformer.cpp

stereo.o: prasterblaster/src/gctp_cpp/stereo.cpp prasterblaster/src/gctp_cpp/stereo.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o stereo.o prasterblaster/src/gctp_cpp/stereo.cpp

spaceobmerc.o: prasterblaster/src/gctp_cpp/spaceobmerc.cpp prasterblaster/src/gctp_cpp/spaceobmerc.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o spaceobmerc.o prasterblaster/src/gctp_cpp/spaceobmerc.cpp

sinusoidal.o: prasterblaster/src/gctp_cpp/sinusoidal.cpp prasterblaster/src/gctp_cpp/sinusoidal.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o sinusoidal.o prasterblaster/src/gctp_cpp/sinusoidal.cpp

robinson.o: prasterblaster/src/gctp_cpp/robinson.cpp prasterblaster/src/gctp_cpp/robinson.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o robinson.o prasterblaster/src/gctp_cpp/robinson.cpp

projection.o: prasterblaster/src/gctp_cpp/projection.cpp prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h \
		prasterblaster/src/gctp_cpp/transformer.h \
		prasterblaster/src/gctp_cpp/coordinate.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o projection.o prasterblaster/src/gctp_cpp/projection.cpp

polyconic.o: prasterblaster/src/gctp_cpp/polyconic.cpp prasterblaster/src/gctp_cpp/polyconic.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o polyconic.o prasterblaster/src/gctp_cpp/polyconic.cpp

polarstereo.o: prasterblaster/src/gctp_cpp/polarstereo.cpp prasterblaster/src/gctp_cpp/polarstereo.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o polarstereo.o prasterblaster/src/gctp_cpp/polarstereo.cpp

orthographic.o: prasterblaster/src/gctp_cpp/orthographic.cpp prasterblaster/src/gctp_cpp/orthographic.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o orthographic.o prasterblaster/src/gctp_cpp/orthographic.cpp

oblatedeqarea.o: prasterblaster/src/gctp_cpp/oblatedeqarea.cpp prasterblaster/src/gctp_cpp/oblatedeqarea.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o oblatedeqarea.o prasterblaster/src/gctp_cpp/oblatedeqarea.cpp

Mollweide.o: prasterblaster/src/gctp_cpp/Mollweide.cpp prasterblaster/src/gctp_cpp/mollweide.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Mollweide.o prasterblaster/src/gctp_cpp/Mollweide.cpp

miller.o: prasterblaster/src/gctp_cpp/miller.cpp prasterblaster/src/gctp_cpp/miller.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o miller.o prasterblaster/src/gctp_cpp/miller.cpp

mercator.o: prasterblaster/src/gctp_cpp/mercator.cpp prasterblaster/src/gctp_cpp/mercator.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mercator.o prasterblaster/src/gctp_cpp/mercator.cpp

lambertcc.o: prasterblaster/src/gctp_cpp/lambertcc.cpp prasterblaster/src/gctp_cpp/lambertcc.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o lambertcc.o prasterblaster/src/gctp_cpp/lambertcc.cpp

lambertazimuth.o: prasterblaster/src/gctp_cpp/lambertazimuth.cpp prasterblaster/src/gctp_cpp/lambertazimuth.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o lambertazimuth.o prasterblaster/src/gctp_cpp/lambertazimuth.cpp

intmollweide.o: prasterblaster/src/gctp_cpp/intmollweide.cpp prasterblaster/src/gctp_cpp/intmollweide.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o intmollweide.o prasterblaster/src/gctp_cpp/intmollweide.cpp

hotinobmerc.o: prasterblaster/src/gctp_cpp/hotinobmerc.cpp prasterblaster/src/gctp_cpp/hotinobmerc.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o hotinobmerc.o prasterblaster/src/gctp_cpp/hotinobmerc.cpp

hammer.o: prasterblaster/src/gctp_cpp/hammer.cpp prasterblaster/src/gctp_cpp/hammer.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o hammer.o prasterblaster/src/gctp_cpp/hammer.cpp

goodeh.o: prasterblaster/src/gctp_cpp/goodeh.cpp prasterblaster/src/gctp_cpp/goodeh.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o goodeh.o prasterblaster/src/gctp_cpp/goodeh.cpp

gnomonic.o: prasterblaster/src/gctp_cpp/gnomonic.cpp prasterblaster/src/gctp_cpp/gnomonic.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o gnomonic.o prasterblaster/src/gctp_cpp/gnomonic.cpp

genvertnsp.o: prasterblaster/src/gctp_cpp/genvertnsp.cpp prasterblaster/src/gctp_cpp/genvertnsp.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o genvertnsp.o prasterblaster/src/gctp_cpp/genvertnsp.cpp

equirectangular.o: prasterblaster/src/gctp_cpp/equirectangular.cpp prasterblaster/src/gctp_cpp/equirectangular.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o equirectangular.o prasterblaster/src/gctp_cpp/equirectangular.cpp

equidistantc.o: prasterblaster/src/gctp_cpp/equidistantc.cpp prasterblaster/src/gctp_cpp/equidistantc.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o equidistantc.o prasterblaster/src/gctp_cpp/equidistantc.cpp

cproj.o: prasterblaster/src/gctp_cpp/cproj.cpp prasterblaster/src/gctp_cpp/cproj.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cproj.o prasterblaster/src/gctp_cpp/cproj.cpp

coordinate.o: prasterblaster/src/gctp_cpp/coordinate.cpp prasterblaster/src/gctp_cpp/coordinate.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o coordinate.o prasterblaster/src/gctp_cpp/coordinate.cpp

constants.o: prasterblaster/src/gctp_cpp/constants.cpp prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o constants.o prasterblaster/src/gctp_cpp/constants.cpp

azequidistant.o: prasterblaster/src/gctp_cpp/azequidistant.cpp prasterblaster/src/gctp_cpp/azequidistant.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o azequidistant.o prasterblaster/src/gctp_cpp/azequidistant.cpp

albersConEqArea.o: prasterblaster/src/gctp_cpp/albersConEqArea.cpp prasterblaster/src/gctp_cpp/albersConEqArea.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o albersConEqArea.o prasterblaster/src/gctp_cpp/albersConEqArea.cpp

alaskaconformal.o: prasterblaster/src/gctp_cpp/alaskaconformal.cpp prasterblaster/src/gctp_cpp/alaskaconformal.h \
		prasterblaster/src/gctp_cpp/projection.h \
		prasterblaster/src/gctp_cpp/util.h \
		prasterblaster/src/gctp_cpp/constants.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o alaskaconformal.o prasterblaster/src/gctp_cpp/alaskaconformal.cpp

moc_selection.o: moc_selection.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_selection.o moc_selection.cpp

moc_advanced.o: moc_advanced.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_advanced.o moc_advanced.cpp

moc_wizard.o: moc_wizard.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_wizard.o moc_wizard.cpp

moc_projections.o: moc_projections.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_projections.o moc_projections.cpp

qrc_resources.o: qrc_resources.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_resources.o qrc_resources.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

