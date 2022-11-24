//
// Created by 49157 on 14/11/2022.
//

#ifndef PRAKTIKUM1C_TERMINALUI_H
#define PRAKTIKUM1C_TERMINALUI_H
using namespace std;
#include "iostream"
#include "AbstractUI.h"

class TerminalUI: public AbstractUI {
     int Input;
public:
    int getInput() const;
    TerminalUI();
    void draw(Level* newLevel);


};


#endif //PRAKTIKUM1C_TERMINALUI_H
