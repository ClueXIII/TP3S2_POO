#include "col_entier.h"
#include <iostream>
using namespace std;

col_entier::col_entier(int taille) {
    int *T = new int[taille];
    this->T = T;
    this->nbe = 0;
    this->taille = taille;
    cout << " -- collection d'entier construite avec succees ! -- " << endl;
}

add_entier(int value) {
    if (this->nbe < this->taille) {
        this->T[this->nbe] = value;
        this->nbe++;
        cout << " -- ajout de l'entier " << value << " avec succees ! -- " << endl;
    } else {
        cout << " -- collection d'entier pleine ! Ajout impossible -- " << endl;
    }
}
