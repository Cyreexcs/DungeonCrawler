//
// Created by 49157 on 24/11/2022.
//

#ifndef PRAKTIKUM1C_PIT_H
#define PRAKTIKUM1C_PIT_H

#include "tile.h"
#include "Ramp.h"

class Pit: public Tile{

public:
    Pit(int row, int col);
     Tile * onEnter(Tile *fromTile, character *Who) override;
     Tile * onLeave(Tile *destTile, character *Who) override; //here we need it because it's not 2this" anymore

};


#endif //PRAKTIKUM1C_PIT_H
