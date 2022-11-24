//
// Created by 49157 on 24/11/2022.
//

#include "Switch.h"
#include "Switch.h"


Switch::Switch(int row, int col): Tile("?", row,col) , Active() {
}

Tile *Switch::onEnter(Tile *fromTile, character *Who) {
    Activate();
    return this;
}

void Switch::detach(Passive *P_Element) {
    if(PosIfPassiveExists(P_Element) != -1 ){
        int Pos=PosIfPassiveExists(P_Element);
        PassiveObjects.erase(PassiveObjects.begin()+Pos);
    } else{
        cout << "Element Doesn't Even Exist, We Can't Detach Anything" << endl;
    }
}

void Switch::attach(Passive *P_Element) {
    if(PosIfPassiveExists(P_Element)==-1){
        PassiveObjects.push_back(P_Element);
    } else{
        cout << "Element Already Exists in The Passive Objects List" << endl;
    }
}

Tile *Switch::onLeave(Tile *destTile, character *Who) {
    return this;
}

