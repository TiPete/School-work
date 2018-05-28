/*
Écrivez un programme qui utilise le mot clé THIS dans la gestion d’une liste 
chaînée de 20 objets de même nature.
*/

#include<iostream>
#include<cstdlib>
using namespace std;

const int nbElements = 20;  //Nombre d'éléments chaînés

//Classe représentant la valeur de chaque noeud
class Produit{
private:
    int ID;
    int annee;
public:
    Produit(){ID = 0; annee = 0;}
    ~Produit(){}
    void InsererValeur(int, int);
    void AfficherValeur();
};

//Structure représentant chaque noeud individuel
struct Noeud{
    Noeud *suiv;
    Produit valeur;
};

//Fonction permettant de modifier la valeur du noeud
void Produit::InsererValeur(int i, int a){
    ID = i;
    annee = a;

}

//Fonciton permettant d'afficher les données de la valeur
void Produit::AfficherValeur(){
    cout << " ID :" << ID << " Annee: " << annee << endl;
}

main(){
    Noeud *debut;       //Pointeur vers le premier noeud, représentant le début de la chaîne
                        //Cette valeur ne doit âs çetre modifiée ou la chaîne sera perdue
    Noeud *position;    //Crée un pointeur qui représente la position présente dans la chaîne

    debut = new Noeud;  //Crée le premier noeud
    position = debut;   //Pointe 'debut' sur le premier noeud


    //Assigne des données aléatoires à la valeur de chaque noeud
    for (int i = 0; i < nbElements; i++){
        position->suiv = new Noeud;
        position->valeur.InsererValeur((rand()%100) + 1, (rand()%100) + 1918);
        position = position->suiv;
        }

    position = debut;   //Retourne le pointeur debut au premier noeud de la chaîne

    //Affiche la valeur de chaque noeud
    for (int i = 0; i < nbElements; i++){
        position->valeur.AfficherValeur();
        position = position->suiv;
    }

    return 0;

}
