QT       += core gui
QT += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduinocreatewind.cpp \
    createinstaller.cpp \
    ide.cpp \
    main.cpp \
    main_wind.cpp

HEADERS += \
    Arduino_Connect.h \
    arduinocreatewind.h \
    createinstaller.h \
    ide.h \
    main_wind.h

FORMS += \
    arduinocreatewind.ui \
    createinstaller.ui \
    ide.ui \
    main_wind.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    CreativityCreator.png
