QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bullet.cpp \
    element.cpp \
    enemy.cpp \
    game.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    settings.cpp \
    tower.cpp \
    unit.cpp \
    worker.cpp

HEADERS += \
    bullet.h \
    element.h \
    enemy.h \
    game.h \
    mainwindow.h \
    player.h \
    settings.h \
    tower.h \
    unit.h \
    worker.h

FORMS += \
    mainwindow.ui \
    settings.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    music.qrc
