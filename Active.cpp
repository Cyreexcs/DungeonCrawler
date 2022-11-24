//
// Created by 49157 on 24/11/2022.
//

#include "Active.h"
#include "Passive.h"
Active::Active() {
}

void Active::attach(Passive *P_Element) {
    if(PosIfPassiveExists(P_Element)==-1){
        PassiveObjects.push_back(P_Element);
    } else{
        cout << "Element Already Exists in The Passive Objects List" << endl;
    }
}

void Active::detach(Passive *P_Element) {
    if(PosIfPassiveExists(P_Element) != -1 ){
        int Pos=PosIfPassiveExists(P_Element);
        PassiveObjects.erase(PassiveObjects.begin()+Pos);
    } else{
        cout << "Element Doesn't Even Exist, We Can't Detach Anything" << endl;
    }
}

int Active::PosIfPassiveExists( Passive* P_Element) {
    for(int i=0; i<PassiveObjects.size(); i++){
        if((PassiveObjects[i])==P_Element){
            return i;
        }
    }
    return -1; //we can't go with pos numbers cuz one of them can be the pos of our element (confusion)
}

void Active::Activate() {
    for(auto i:PassiveObjects){
        i->notify(this);
    }
}
