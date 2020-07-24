QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# CONFIG += c++11
QMAKE_CXXFLAGS += -std=c++0x

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    c_monitor.cpp \
    camera.cpp \
    dialog_login.cpp \
    frame_camera.cpp \
    frame_photolist.cpp \
    frame_resistance.cpp \
    frame_resistanceplot.cpp \
    main.cpp \
    mainwindow.cpp \
    monitor.cpp \
    r_monitor.cpp

HEADERS += \
    c_monitor.h \
    camera.h \
    dialog_login.h \
    frame_camera.h \
    frame_photolist.h \
    frame_resistance.h \
    frame_resistanceplot.h \
    mainwindow.h \
    monitor.h \
    r_monitor.h

FORMS += \
    dialog_login.ui \
    frame_camera.ui \
    frame_photolist.ui \
    frame_resistance.ui \
    frame_resistanceplot.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


LIBS += \
#    /home/louding/software/paho_linux/libpaho-mqtt3a.so \
#    /home/louding/software/paho_linux/libpaho-mqtt3as.so \
#    /home/louding/software/paho_linux/libpaho-mqtt3c.so \
#    /home/louding/software/paho_linux/libpaho-mqtt3cs.so
# \
#    /home/louding/software/paho_arm/libpaho-mqtt3a.so \
#    /home/louding/software/paho_arm/libpaho-mqtt3as.so \
#    /home/louding/software/paho_arm/libpaho-mqtt3c.so \
#    /home/louding/software/paho_arm/libpaho-mqtt3cs.so \
#    /home/louding/software/openssl_arm/lib/libssl.so \
#    /home/louding/software/openssl_arm/lib/libcrypto.so

INCLUDEPATH += /home/louding/software/paho.mqtt.c-1.3.2-arm/src \
    /home/louding/software/openssl_arm/include
