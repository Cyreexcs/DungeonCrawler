#ifndef TILE_H
#define TILE_H

#include <iostream>
using namespace std;

class character;

class Tile
{
protected:
    string texture;
public:
    void setTexture(const string &texture);

protected:
    character* characterptr = nullptr;
    const int row;
    const int column;

public:
    explicit Tile(string texture_, const int row_, const int column_);
    void setCharacterptr(character *characterptr1);
    //void setCharacter(character *character);
    int getRow() const;
    int getColumn() const;
    bool hasCharacter(); // Not really needed
    string &getTexture();
    bool moveTo(Tile* DestTile, character* Who); //movement of who
    virtual Tile* onEnter(Tile* fromTile, character* Who)=0;
    virtual Tile* onLeave(Tile* destTile, character* Who)=0; //all have the same return type "this"
    virtual ~Tile(); //to delete instances of the derived classes IF needed
                     //delete derived class objects using pointers of base class (avoiding memory leaks too)

};

#endif // TILE_H
