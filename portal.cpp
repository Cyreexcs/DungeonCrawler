#include "portal.h"
#include "character.h"
Portal::Portal(const int row_, const int column_,Tile* Destination):Tile("0", row_, column_)
{
    this ->Destination=Destination;
}

Tile *Portal::onEnter(Tile *fromTile, character *Who)
{
    return Destination;
}


Tile *Portal::onLeave(Tile *destTile, character *Who) {
    return this;
}
