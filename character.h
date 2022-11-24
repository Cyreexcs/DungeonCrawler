#ifndef CHARACTER_H
#define CHARACTER_H

class Tile;
using namespace std;
#include <iostream>
class character
{
protected:
    string CharacterTexture;
    Tile* CurrenTile = nullptr;
public:
    Tile *getCurrenTile() ;
    character(string Texture_);
    string &getTexture();
    void setCurrenTile(Tile *currenTile);


};

#endif // CHARACTER_H
