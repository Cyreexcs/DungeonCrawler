//
// Created by 49157 on 02/11/2022.
//

#include "DungeonCrawler.h"
#include "TerminalUI.h"
#include "character.h"

DungeonCrawler::DungeonCrawler() {
    Display = new TerminalUI();
    CurrentLevel = new Level(6,6); //changed in the level too or use standard constructor (no param) and go back to set values
    TerminalUI* _Display = dynamic_cast<TerminalUI*>(Display); //display has a different type as an attribute
    int movingDirection;
    foo(_Display, movingDirection); //refactoring
}

void DungeonCrawler::foo(const TerminalUI *_Display, int movingDirection) {
    do {
        Display->draw(CurrentLevel);
        movingDirection = _Display->getInput();
        if (movingDirection != 0)
            turn(movingDirection);
        if (movingDirection==0){
            cout << "Program Has ended " << endl;
        }
    } while (movingDirection != 0);
}

void DungeonCrawler::turn(int movingDirection) {

    character* Player = CurrentLevel->GetPlayer("X");
    Tile* FromTile = Player->getCurrenTile();
    int TileRow = FromTile->getRow();
    int TileCol = FromTile->getColumn();
    switch (movingDirection) {
        case 1:
            TileRow--;
            TileCol++;
            break;
        case 2:
            TileCol++;
            break;
        case 3:
            TileCol++;
            TileRow++;
            break;
        case 4:
            TileRow--;
            break;
        case 5:
            break;
        case 6:
            TileRow++;
            break;
        case 7:
            TileCol--;
            TileRow--;
            break;
        case 8:
            TileCol--;
            break;
        case 9:
            TileCol--;
            TileRow++;
            break;
    }
        Tile* DestinationTile = CurrentLevel->getTile(TileRow,TileCol);
        FromTile->moveTo(DestinationTile,Player);
}
