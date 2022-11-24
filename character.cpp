#include "character.h"
#include "tile.h"

character::character(string Texture_):CharacterTexture(Texture_){
}

void character::setCurrenTile(Tile *currenTile) {
    this -> CurrenTile = currenTile;
}

Tile *character::getCurrenTile() {
    return CurrenTile;
}

string &character::getTexture()  {
    return CharacterTexture;
}


