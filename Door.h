//
// Created by 49157 on 24/11/2022.
//

#ifndef PRAKTIKUM1C_DOOR_H
#define PRAKTIKUM1C_DOOR_H

#include "tile.h"
#include "Passive.h"
#include "floor.h"

class Door:public Tile, public Passive{
    bool Open = false;
public:
    void setOpen(bool open);
    Door(int row, int col);
    bool isOpen() const;
    Tile* onEnter(Tile* fromTile, character* Who); //returns nullptr like a wall if closed and will return this if open
    void notify(Active* source) override;
    Tile* onLeave(Tile* destTile, character* Who) override;


};


#endif //PRAKTIKUM1C_DOOR_H
