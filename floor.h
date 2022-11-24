#ifndef FLOOR_H
#define FLOOR_H

#include "tile.h"
using namespace std;
#include <iostream>
#include "character.h"

class Floor:public Tile
{
public:
    Floor(const int row_, const int column_);
    Tile* onEnter(Tile* fromTile, character *Who) override;
    Tile* onLeave(Tile* destTile, character* Who) override;

};

#endif // FLOOR_H
