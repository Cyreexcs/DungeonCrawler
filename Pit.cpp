//
// Created by 49157 on 24/11/2022.
//

#include "Pit.h"
#include "character.h"

Tile *Pit::onEnter(Tile *fromTile, character *Who) {
    return this;
}

Pit::Pit(int row, int col): Tile("_", row, col) {
}

Tile *Pit::onLeave(Tile *destTile, character *Who) {
    if (destTile->getTexture()=="_" or destTile->getTexture()==">" ) {
        return this; //(dynamic_cast<Ramp*>(destTile) != nullptr) || (dynamic_cast<Pit*>(destTile) != nullptr)
    } else {
        return nullptr;
    }

}






