#include "wall.h"

Wall::Wall(const int row_, const int column_):Tile("#", row_, column_)
{
}

Tile *Wall::onEnter(Tile *fromTile, character *Who)
{
    return nullptr;
}

Tile *Wall::onLeave(Tile *destTile, character *Who) {
    return this;
}

