#-------------------------------------------------
#
# Project created by QtCreator 2017-04-07T13:42:19
#
#-------------------------------------------------

QT += core multimedia widgets gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gui
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS AJAMac

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

QMAKE_LIBFLAGS += -lajantv2 #TODO - Figure out why/if this is needed

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    ntv2qtpreview.h

NTV2_SDK_PATH = /Users/markmniece/Projects/Votis/ntv2sdkmac_13.0.0.11

LIBS += $$NTV2_SDK_PATH/lib

INCLUDEPATH += $$NTV2_SDK_PATH/ajalibraries/ajantv2/includes\
               $$NTV2_SDK_PATH/ajalibraries/ajantv2/src/mac\
               $$NTV2_SDK_PATH/ajalibraries/

FORMS    += mainwindow.ui
