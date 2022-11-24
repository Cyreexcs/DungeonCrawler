#include "tile.h"
#include "character.h"

int Tile::getRow() const
{
    return row;
}

int Tile::getColumn() const
{
    return column;
}

bool Tile::hasCharacter()
{
    if(characterptr != nullptr){
        return true;
    } else {
        return false;
    }
}

string &Tile::getTexture()
{
    if(characterptr== nullptr){
        return texture;
    } else{
        return characterptr->getTexture() ;}
}


Tile *Tile::onLeave(Tile *destTile, character *Who)
{
    return this;
}

Tile::Tile(string texture_, const int row_, const int column_):texture(texture_),row(row_),column(column_)
{
}

//void Tile::setCharacter(character *character) {
  //  characterptr = character;
//}

Tile::~Tile() {
}

void Tile::setCharacterptr(character *characterptr1){
    characterptr = characterptr1;
}

void Tile::setTexture(const string &texture) {
    Tile::texture = texture;
}

bool Tile::moveTo(Tile *DestTile, character *Who) {
    if (this->onLeave(DestTile, Who) != nullptr) {
        if (DestTile->onEnter(this, Who) != nullptr) {
            this->setCharacterptr(nullptr);
            Who->setCurrenTile(DestTile->onEnter(this, Who));
            DestTile->onEnter(this, Who)->setCharacterptr(Who);
            return true;
        }
    }
    return false;
}







