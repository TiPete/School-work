/*
Écrivez un programme qui calcule l’exponentielle de 20 valeurs aléatoires. 
Le programme doit afficher à l’écran les nombres par ordre ascendant.
*/

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<math.h>
using namespace std;

//Nombre de chiffres à traiter
const int nbChiffres = 20;

void initialiserTableau(double (&tableau)[nbChiffres]);
void afficherTableau(double (&tableau)[nbChiffres]);
void trierTableau(double (&tableau)[nbChiffres]);
void traiterTableau(double (&tableau)[nbChiffres]);

main(){
    double tableau[nbChiffres];     //Crée le tableau de données

    initialiserTableau(tableau);

    cout << "Tableau original: " << endl;
    afficherTableau(tableau);

    trierTableau(tableau);
    traiterTableau(tableau);

    cout << "Tableau traite:" << endl;
    afficherTableau(tableau);
}

//Remplit le tableau de valeurs aléatoires entre 1 et 100
void initialiserTableau(double (& tableau)[nbChiffres]){
    for (int i = 0; i < nbChiffres; i ++)
        tableau[i] = rand() % 100 + 1;
}

//Affiche le tableau dans son état actuel
void afficherTableau(double (& tableau)[nbChiffres]){
    for (int i = 0; i < nbChiffres; i ++)
        cout << tableau[i] << " ";
    cout << endl;
}

//Trie le tableau en ordre croissant avec bubble sort
void trierTableau(double (& tableau)[nbChiffres]){
    double tmp;
    for(int i =0;i < nbChiffres-1;i++)
        for(int j=0; j< nbChiffres-1; j++)
            if(tableau[j]> tableau[j+1]){
                tmp = tableau[j];
                tableau[j]= tableau[j+1];
                tableau [j+1]= tmp;
            }
 }

 //Remplace chaque valeur du tableau par son exponentielle
 void traiterTableau(double (&tableau)[nbChiffres]){
     for (int i = 0; i < nbChiffres; i++)
        tableau[i] = exp(tableau[i]);
 }
