#ifndef WALL_H
#define WALL_H

#include "tile.h"
using namespace std;
#include <iostream>
#include "character.h"
class Wall:public Tile
{
public:
    Wall(const int row_, const int column_);
    Tile* onEnter(Tile* fromTile, character* Who) override;
    Tile* onLeave(Tile* destTile, character* Who) override;
};

#endif // WALL_H
