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

bool col_entier::inserer(int pos_val) {
    int val = this->T[pos_val]; // on stock la valeur a comprarer avec les n-1 val dans une variable temp
    for (int i = pos_val; i > 0; i--) { //on parcours le tableau de la position de la val a inserer jusqu'a la premiere case
        if (this->T[i - 1] > val) { //si la val de la case precedente est superieur a la val a inserer
            this->T[i] = this->T[i - 1]; //on decale la val de la case precedente dans la case actuelle
        } else { //sinon on insere la val a la position actuelle
            this->T[i] = val;
            return true; //on retourne true pour indiquer que l'insertion a bien ete effectuee
        }
    }
    //si on arrive ici c'est que la val a inserer est la plus petite du tableau
    this ->T[0] = val; //on insere donc la val a la premiere case
    return true; //on retourne true pour indiquer que l'insertion a bien ete effectuee
}
