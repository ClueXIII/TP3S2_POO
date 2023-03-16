#include <iostream>
#include "col_entier.h"
using namespace std;

int main(){
cout << "-------------------------------------1-------------------------------------" << endl;
        col_entier A(5); //creation d'une collection d'entier de taille 5
cout << "-------------------------------------2-------------------------------------" << endl;
        A.add_entier(5); //ajout de l'entier 5
        A.add_entier(4); //ajout de l'entier 4
        A.add_entier(9); //ajout de l'entier 9
        A.add_entier(85); //ajout de l'entier 85
        A.add_entier(74); //ajout de l'entier 74
        A.add_entier(120); //ajout de l'entier 120 impossible car la taille de la collection et de 5
cout << "-------------------------------------3-------------------------------------" << endl;
        A.afficher_col(); //affichage de la collection
cout << "-------------------------------------4-------------------------------------" << endl;
        col_entier B(A); //creation d'une collection B par copie de A
        B.afficher_col(); //affichage de la collection B pour vérifier si elle est la même que la A
cout << "-------------------------------------5/a-------------------------------------" << endl;
        
    return 0;
};