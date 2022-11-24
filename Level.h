//
// Created by 49157 on 01/11/2022.
//

#ifndef PRAKTIKUM1C_LEVEL_H
#define PRAKTIKUM1C_LEVEL_H

using namespace std;
#include "vector"
#include <iostream>
#include "Tile.h"
#include "character.h"
#include "portal.h"
#include "array"
#include "Npc.h"
class Level {
private:
    int row, col;
    //TODO: change the default attributes 5,5 to Row,Col Given by user in input
    std::array<array<Tile*,6>,6>SpielWelt;
    vector<character*>Characters; //transform this into character in the dungeon crawloer
    vector<character*>Npcs;
public:
    Level(int row, int col);
    Tile *getTile(int row, int col);
    // Tile *getTile(int row, int col) const;
    void placeCharacter(character* c, int row, int col);
    void addPairOnPortal(int pRow, int pCol, int dRaw, int dCol);
    character* GetPlayer(const string texture) const;
    void AddRamp();
    ~Level();
    void AddDoorAndSwitch();

    void PlaceNpc();

    void CreateNPC();
};


#endif //PRAKTIKUM1C_LEVEL_H
