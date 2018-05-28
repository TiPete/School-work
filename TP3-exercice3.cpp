/*
�crivez un programme qui utilise le mot cl� THIS dans la gestion d�une liste 
cha�n�e de 20 objets de m�me nature.
*/

#include<iostream>
#include<cstdlib>
using namespace std;

const int nbElements = 20;  //Nombre d'�l�ments cha�n�s

//Classe repr�sentant la valeur de chaque noeud
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

//Structure repr�sentant chaque noeud individuel
struct Noeud{
    Noeud *suiv;
    Produit valeur;
};

//Fonction permettant de modifier la valeur du noeud
void Produit::InsererValeur(int i, int a){
    ID = i;
    annee = a;

}

//Fonciton permettant d'afficher les donn�es de la valeur
void Produit::AfficherValeur(){
    cout << " ID :" << ID << " Annee: " << annee << endl;
}

main(){
    Noeud *debut;       //Pointeur vers le premier noeud, repr�sentant le d�but de la cha�ne
                        //Cette valeur ne doit �s �etre modifi�e ou la cha�ne sera perdue
    Noeud *position;    //Cr�e un pointeur qui repr�sente la position pr�sente dans la cha�ne

    debut = new Noeud;  //Cr�e le premier noeud
    position = debut;   //Pointe 'debut' sur le premier noeud


    //Assigne des donn�es al�atoires � la valeur de chaque noeud
    for (int i = 0; i < nbElements; i++){
        position->suiv = new Noeud;
        position->valeur.InsererValeur((rand()%100) + 1, (rand()%100) + 1918);
        position = position->suiv;
        }

    position = debut;   //Retourne le pointeur debut au premier noeud de la cha�ne

    //Affiche la valeur de chaque noeud
    for (int i = 0; i < nbElements; i++){
        position->valeur.AfficherValeur();
        position = position->suiv;
    }

    return 0;

}
