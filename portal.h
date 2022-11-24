#ifndef PORTAL_H
#define PORTAL_H

#include "tile.h"
using namespace std;
#include <iostream>

class Portal:public Tile
{
private:
    Tile* Destination;
public:
    Portal(const int row_, const int column_, Tile* Destination);
    Tile* onEnter(Tile* fromTile, character* Who) override;
    Tile* onLeave(Tile* destTile, character* Who) override;
};

#endif // PORTAL_H
