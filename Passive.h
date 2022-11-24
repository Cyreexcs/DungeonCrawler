//
// Created by 49157 on 24/11/2022.
//

#ifndef PRAKTIKUM1C_PASSIVE_H
#define PRAKTIKUM1C_PASSIVE_H


class Active;

class Passive {
public:
    virtual void notify(Active* source)=0;


};


#endif //PRAKTIKUM1C_PASSIVE_H
