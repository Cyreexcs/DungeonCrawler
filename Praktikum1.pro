TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        character.cpp \
        floor.cpp \
        main.cpp \
        portal.cpp \
        tile.cpp \
        wall.cpp

HEADERS += \
    character.h \
    floor.h \
    portal.h \
    tile.h \
    wall.h
