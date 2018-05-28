/*
Écrivez un programme qui permet d’additionner deux matrices de 10 lignes 
et de 10 colonnes, dont les éléments sont tous des entiers.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//Grandeur de chaque tableau
const int grandeur = 10;

//Fonction permettant d'afficher les tableaux
void afficherTableau(int[grandeur][grandeur]);

main(){

    int tableau1[grandeur][grandeur];
    int tableau2[grandeur][grandeur];
    int sommeTableaux[grandeur][grandeur];

    //Les deux tableaux sont remplis de valeurs aléatoires puis les
    //tableaux sont additionnés
    for (int i = 0; i < grandeur; i++){
        for (int j = 0; j < grandeur; j++){
            tableau1[i][j] = (rand()%10);
            tableau2[i][j] = (rand()%10);
            sommeTableaux[i][j] = tableau1[i][j] + tableau2[i][j];
        }
    }

    //Affiche les tableaux individuels et ensuite la somme des deux
    cout << "Tableau 1 :" << endl;
    afficherTableau(tableau1);

    cout << "Tableau 2 :" << endl;
    afficherTableau(tableau2);

    cout << "Tableau 1 + Tableau 2 :" << endl;
    afficherTableau(sommeTableaux);

    return 0;
}

void afficherTableau(int tableau[grandeur][grandeur]){
    for (int i =0; i < grandeur; i++){          //Boucles imbriquées qui affichent
        for (int j = 0; j < grandeur; j++){     //10 lignes de 10 chiffres
            cout << tableau[i][j] << "\t";      //
        }
        cout << endl;
    }
    cout << endl;
}


