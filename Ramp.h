//
// Created by 49157 on 24/11/2022.
//

#ifndef PRAKTIKUM1C_RAMP_H
#define PRAKTIKUM1C_RAMP_H

#include "tile.h"

class Ramp: public Tile{
public:
    Ramp(int row, int col);
     Tile * onEnter(Tile *destTile, character *Who) override; //we don't need on leave because it already returns this for all object and I put it as a virtual method and not pure
     Tile* onLeave(Tile* destTile, character* Who) override;

};


#endif //PRAKTIKUM1C_RAMP_H
