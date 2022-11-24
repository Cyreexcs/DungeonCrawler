//
// Created by 49157 on 24/11/2022.
//

#include "Door.h"

Door::Door(int row, int col): Tile("D",row,col) {

}

bool Door::isOpen() const {
    return Open;
}

Tile *Door::onEnter(Tile *fromTile, character *Who) {
    if(Open== true){
        return this;
    } else{
        return nullptr;}
}

void Door::notify(Active *source) {
    Open= true;
    this->setTexture("/");
}

void Door::setOpen(bool open) {
    Open = open;
}

Tile *Door::onLeave(Tile *destTile, character *Who) {
    if(Open== true){
        return this;
    }else{
    return nullptr;}
}


