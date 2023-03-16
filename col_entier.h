#ifndef TP3S2_POO_COL_ENTIER_H
#define TP3S2_POO_COL_ENTIER_H


class col_entier {
    int *T;
    int nbe; // le nombre d’éléments à un instant donné
    int taille ; // le nombre d’emplacements disponibles à l’instant t=0
public :
    col_entier(int taille);
    col_entier(const col_entier &col);
    void add_entier(int value);
    void afficher_col();
    bool inserer(int pos);
    void trierI();
};

#endif
