#include "floor.h"

Floor::Floor(const int row_, const int column_):Tile(".", row_, column_)
{
}

Tile *Floor::onEnter(Tile *fromTile, character *Who)
{
    return this;
}


Tile *Floor::onLeave(Tile *destTile, character *Who) {
    return this;
}
