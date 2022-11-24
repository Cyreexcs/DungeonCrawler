//
// Created by 49157 on 14/11/2022.
//

#include "TerminalUI.h"

void TerminalUI::draw(Level* newLevel  ) {
    for(int i=0;i<6;i++){
        for(int j= 0; j<6; j++){
            cout << newLevel->getTile(j,i)->getTexture() << " " ;
        }
        cout << endl;
    }
    cout << "7:Left Up         8:UP              9:Right Up " << endl;
    cout << "4:Left            5:Don't Move      6:Right " << endl;
    cout << "1:Left Down       2: Down           3: Right Down " << endl;
    cout << "What's The Input " << endl;
    cin >> Input;


}

TerminalUI::TerminalUI() {
}
int TerminalUI::getInput() const {
    return Input;
}
