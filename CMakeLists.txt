cmake_minimum_required(VERSION 3.23)
project(Praktikum1c)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Praktikum1c
        character.cpp
        character.h
        floor.cpp
        floor.h
        main.cpp
        portal.cpp
        portal.h
        tile.cpp
        tile.h
        wall.cpp
        wall.h Level.cpp
        Level.h
        AbstractUI.cpp
        AbstractUI.h
        DungeonCrawler.cpp
        DungeonCrawler.h TerminalUI.cpp TerminalUI.h Active.cpp Active.h Passive.cpp Passive.h Pit.cpp Pit.h Switch.cpp Switch.h Door.cpp Door.h Ramp.cpp Ramp.h Npc.cpp Npc.h)
