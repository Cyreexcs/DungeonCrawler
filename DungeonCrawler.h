//
// Created by 49157 on 02/11/2022.
//

#ifndef PRAKTIKUM1C_DUNGEONCRAWLER_H
#define PRAKTIKUM1C_DUNGEONCRAWLER_H

#include "AbstractUI.h"

#include "Level.h"
#include "TerminalUI.h"
#include <iostream>
using namespace std;
class DungeonCrawler {
    AbstractUI* Display;
    Level* CurrentLevel;
public:
    DungeonCrawler();
    void turn(int movingDirection);
    void foo(const TerminalUI *_Display, int movingDirection); //refactored method (do-while)
};


#endif //PRAKTIKUM1C_DUNGEONCRAWLER_H
