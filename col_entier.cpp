#include "col_entier.h"
#include <iostream>
using namespace std;

col_entier::col_entier(int taille) {
    int *T = new int[taille];
    this->T = T;
    this->nbe = 0;
    this->taille = taille;
}
