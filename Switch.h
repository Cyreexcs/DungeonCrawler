//
// Created by 49157 on 24/11/2022.
//

#ifndef PRAKTIKUM1C_SWITCH_H
#define PRAKTIKUM1C_SWITCH_H
#include "tile.h"
#include "Active.h"
#include "Passive.h"

class Switch: public Tile, public Active{
public:
    Switch(int row, int col);
    Tile* onEnter(Tile* fromTile, character *Who) override;
    void attach(Passive* P_Element);
    void detach(Passive* P_Element);
    Tile* onLeave(Tile* destTile, character* Who) override;


};


#endif //PRAKTIKUM1C_SWITCH_H
