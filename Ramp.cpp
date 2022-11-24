//
// Created by 49157 on 24/11/2022.
//

#include "Ramp.h"
#include "character.h"
Ramp::Ramp(int row, int col): Tile(">", row, col) {

}

Tile *Ramp::onEnter(Tile *destTile, character *Who) {
    return this;
}

Tile *Ramp::onLeave(Tile *destTile, character *Who) {
    return this;
}

