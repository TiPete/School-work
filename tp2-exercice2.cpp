/*
Écrivez un programme qui trie un tableau contenant 200 valeurs aléatoires. 
Le programme doit afficher à l’écran les nombres par ordre ascendant et par 
ordre descendant.
*/

#include<iostream>
#include<iomanip>
#include <cstdlib>
using namespace std;

//Grandeur dutableau de données
const int grandeur = 200;

void initialiserTableau(int (&)[grandeur]);
void trierTableau(int (&)[grandeur]);
void afficherTableau(int (&)[grandeur]);
void afficherTableauInverse(int (&)[grandeur]);

main(){
    int tableau[grandeur];

    initialiserTableau(tableau);

    cout << "Tableau original: " << endl;
    afficherTableau(tableau);
    cout << endl;

    trierTableau(tableau);

    cout << "Tableau Trie: " << endl;
    afficherTableau(tableau);
    cout << endl;

    cout << "Tableau inverse:" << endl;
    afficherTableauInverse(tableau);
    cout << endl;

    return 0;
}

//Trie le tableau avec le bubble sort
void trierTableau(int (& tableau)[grandeur]){
    int tmp;

    for(int i =0;i < grandeur-1;i++)
        for(int j=0; j< grandeur-1; j++)
            if(tableau[j]> tableau[j+1]){
                tmp = tableau[j];
                tableau[j]= tableau[j+1];
                tableau [j+1]= tmp;
            }
}

 //Remplit le tableau avec des valeurs aléatoires
void initialiserTableau(int (& tableau)[grandeur]){
    for (int i = 0; i < grandeur; i++){
        tableau[i] = rand();
    }
}

//Affiche le tableau dans son état présent
void afficherTableau(int (& tableau)[grandeur]){
    for (int i = 0; i < grandeur; i++){
        cout << tableau[i] << " ";
    }
    cout << endl;
}

//Affiche le tableau en inversant l'ordre
void afficherTableauInverse(int (& tableau)[grandeur]){
        for (int i = 0; i < grandeur; i++){
        cout << tableau[grandeur - i - 1] << " ";
    }
    cout << endl;
}
