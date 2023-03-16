#include "col_entier.h"
#include <iostream>
using namespace std;

col_entier::col_entier(int taille) {
    int *Tab = new int[taille];
    this->T = Tab;
    this->nbe = 0;
    this->taille = taille;
    cout << " -- collection d'entier de taille " << this->taille <<" construite avec succees ! -- " << endl;
}

void col_entier::add_entier(int value) {
    if (this->nbe < this->taille) {
        this->T[this->nbe] = value;
        cout << " -- ajout de l'entier " << this->T[this->nbe] << " avec succees ! -- " << endl;
        this->nbe++;
    } else {
        cout << " -- collection d'entier pleine ! Ajout impossible de l'entier " << value <<" -- " << endl;
    }
}

void col_entier::afficher_col() {
    cout << "[ ";
    for (int i = 0; i < this->nbe; i++) {
        cout << this->T[i] << " ";
    }
    cout << "]" << endl;
}

col_entier::col_entier(const col_entier &col) {
    this->T = col.T;
    this->nbe = col.nbe;
    this->taille = col.taille;
}
