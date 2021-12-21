QT       += core gui
QT += serialport
QT += network widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    arduinocreatewind.cpp \
    createinstaller.cpp \
    ide.cpp \
    main.cpp \
    main_wind.cpp \
    texteditor.cpp

HEADERS += \
    Arduino_Connect.h \
    FuturLog.h \
    about.h \
    arduinocreatewind.h \
    createinstaller.h \
    ide.h \
    main_wind.h \
    texteditor.h

FORMS += \
    about.ui \
    arduinocreatewind.ui \
    createinstaller.ui \
    ide.ui \
    main_wind.ui \
    texteditor.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    CreativityCreator.png
