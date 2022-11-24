//
// Created by 49157 on 24/11/2022.
//

#ifndef PRAKTIKUM1C_ACTIVE_H
#define PRAKTIKUM1C_ACTIVE_H
#include "vector"
using namespace std;
#include "iostream"
class Passive;
//This class triggers actions so it does smth which will later appear in the passive class
class Active {
protected:
    vector<Passive*>PassiveObjects;
public:
    Active();
    virtual void attach(Passive* P_Element)=0;
    virtual void detach(Passive* P_Element)=0;
    int PosIfPassiveExists(Passive* P_Element);
    virtual void Activate();

};


#endif //PRAKTIKUM1C_ACTIVE_H
