//
// Created by 49157 on 02/11/2022.
//

#ifndef PRAKTIKUM1C_ABSTRACTUI_H
#define PRAKTIKUM1C_ABSTRACTUI_H

#include "Level.h"
class AbstractUI {
public:
    AbstractUI();
    virtual void draw(Level* newLevel)= 0;

};


#endif //PRAKTIKUM1C_ABSTRACTUI_H
