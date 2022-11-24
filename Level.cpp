//
// Created by 49157 on 01/11/2022.
//
#include "Level.h"
#include "Tile.h"
#include "wall.h"
#include "floor.h"
#include "Pit.h"
#include "Door.h"
#include "Switch.h"
#include "Npc.h"

Level::Level(int row,int col) {
    this -> row = row;
    this -> col = col;
    for (int i=0; i<6; i++){
        for(int j=0;j<6;j++){
            if(j==0 or j==SpielWelt.size()-1 or i==0 or i== SpielWelt.at(i).size()-1){
                SpielWelt.at(i).at(j) = new Wall(j,i);
            }
            else {
                SpielWelt.at(i).at(j)=new Floor(j,i);
            }
        }
    }
    PlaceNpc();
    AddRamp();
    AddDoorAndSwitch();
    Characters.push_back(new character("X"));
    placeCharacter(Characters.at(0),2,2);
    addPairOnPortal(3,1,1,3);
}

void Level::PlaceNpc() {
    CreateNPC();
    SpielWelt.at(4).at(4)->setCharacterptr(Npcs.at(0));
    SpielWelt.at(4).at(1)->setCharacterptr(Npcs.at(1));
}

void Level::CreateNPC() {
    Npc* FirstNPC=new Npc();
    Npc* SecondNPC=new Npc();
    Npcs.insert(Npcs.end(), {FirstNPC, SecondNPC});
}

void Level::placeCharacter(character *c, int row, int col) { //TODO: verify if we have a wall in that position
    SpielWelt.at(col).at(row)->setCharacterptr(c);
    c->setCurrenTile(SpielWelt.at(col).at(row));
}

void Level::AddDoorAndSwitch() {
    SpielWelt.at(3).at(3)= nullptr;
    SpielWelt.at(3).at(3)= new Door(3, 3);
    SpielWelt.at(3).at(2)= nullptr;
    SpielWelt.at(3).at(2)=new Switch(2, 3);
    dynamic_cast<Switch*>(SpielWelt.at(3).at(2))->attach(dynamic_cast<Door*>(SpielWelt.at(3).at(3)));
}

void Level::AddRamp() {
    SpielWelt.at(1).at(2)= nullptr;
    SpielWelt.at(1).at(2)= new Ramp(2, 1);
    SpielWelt.at(1).at(1)= nullptr;
    SpielWelt.at(1).at(1)=new Pit(1, 1);
    SpielWelt.at(2).at(1)= nullptr;
    SpielWelt.at(2).at(1)=new Pit(1, 2);
}


Tile *Level::getTile(int row, int col) {
    return SpielWelt[col][row];
}

void Level::addPairOnPortal(int pRow, int pCol, int dRow, int dCol) {

    delete SpielWelt.at(dCol).at(dRow);
    SpielWelt.at(dCol).at(dRow)= nullptr;
    SpielWelt.at(dCol).at(dRow) = new Portal(dRow,dCol,SpielWelt.at(pCol).at(pRow));
    delete SpielWelt.at(pCol).at(pRow);
    SpielWelt.at(pCol).at(pRow)= nullptr;
    SpielWelt.at(pCol).at(pRow) = new Portal(pRow,pCol,SpielWelt.at(dCol).at(dRow));
}

character *Level::GetPlayer(const string texture) const {
    for(auto character:Characters){
        if (character->getTexture()==texture){
            return character;
        }
    }
    return nullptr;
}

Level::~Level() {
    for(int i=0; i<row; i++){
        for(int j=0; j<col;j++){
            delete SpielWelt[i][j];
        }
    }
}








