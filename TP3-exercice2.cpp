/*
Une compagnie d’autobus vient d’acheter un ordinateur pour son nouveau système de 
réservations informatisé. Cette compagnie possède deux autobus; ces autobus 
transportent 2000 passagers par année vers New York. Le voyage aller et retour est 
de trois jours.

Écrivez un programme qui attribue des sièges aux passagers lors d’un voyage, en 
tenant compte que chaque autobus transporte soit des fumeurs, soit des non-fumeurs.
Le programme doit afficher le menu suivant :
– Appuyez sur 1 pour non-fumeurs.
– Appuyez sur 2 pour fumeurs.
Si la réponse est 1, le programme attribue un siège dans un autobus de non-fumeurs 
(1 à 40). Dans le cas contraire, il attribue un siège dans un autobus de fumeurs 
(1 à 40). De plus, le programme devrait afficher à l’écran un document de voyage qui 
indique si le passager est dans un autobus de fumeurs ou de non-fumeurs et combien 
de passagers il y a dans l’autobus
*/

#include<iostream>
using namespace std;

const int nbMaxPassagers = 40;  //Nombre maximum de passagers pas autobus

void AfficheDocument(bool, int);

//Classe qui représente chaque autobus
class Autobus
{
private:
    int nbPassagers;
public:
    Autobus() {nbPassagers = 0;}    //Initilialise le nombre de passageras a zero
    ~Autobus(){}
    void addPassager(void);
    int getNbPassagers(void);
};

//Classe représentant la "flotte" d'autobus
class Flotte
{
private:
    Autobus fumeur;
    Autobus nonFumeur;
public:
    void addPassager(bool);
    int getNbPassagers(bool);
};


//Fonction qui ajoute une passager à l'autobus
void Autobus::addPassager(void)
{
    nbPassagers++;
}

//Fonction qui retourne le nombre de passagers dans l'autobus
int Autobus::getNbPassagers(void)
{
    return nbPassagers;
}

//Fonction qui permet d'ajouter un passager à l'Autobus désigné
//true = fumeur, false = non fumeur
void Flotte::addPassager(bool f)
{
    if (f)
        fumeur.addPassager();
    else
        nonFumeur.addPassager();
}

//Fonction qui retourne le nombre de passagers dans l'Autobus désigné
//true = fumeur, false = non fumeur
int Flotte::getNbPassagers(bool f)
{
    if (f)
        return fumeur.getNbPassagers();
    else
        return nonFumeur.getNbPassagers();
}

main(){
    int choix = -1; //Sert à entrer le choix di client
    Flotte flotte;  //Initialise la flotte

    while (choix != 3)  //La boucle arrête lorsquele client choisit l'option 3
    {
        cout << "-Appuyez sur 1 pour non-fumeurs." << endl << "-Appuyez sur 2 pour fumeurs." << endl << "-Appuyez sur 3 pour terminer." << endl << '>';
        cin >> choix;

        switch(choix)
        {
        case 1:
            if (flotte.getNbPassagers(false) < nbMaxPassagers)
            {
                flotte.addPassager(false);
                AfficheDocument(false, flotte.getNbPassagers(false));
            }
            else
            {
                cout << endl << "Desole, cet autobus est plein, vous pouvez prendre un autobus fumeur ou le prochain autobus dans trois jours. Merci" << endl << endl;
            }
            break;
        case 2 :
            if (flotte.getNbPassagers(true) < nbMaxPassagers)
            {
                flotte.addPassager(true);
                AfficheDocument(true, flotte.getNbPassagers(true));
            }
            else
            {
                cout << "Desole, cet autobus est plein, vous pouvez prendre un autobus non fumeur ou le prochain autobus dans trois jours. Merci" << endl;
            }
            break;
        }
    }
    return 0;
}


//Fonction qui affiche la confirmation de réservation
void AfficheDocument(bool f, int nb)
{
    cout << endl << "--------------------------------------------------------------------------------------" << endl;
    cout << "Passage confirme pour autobus ";
    if (f)
        cout << "fumeur ";
    else
        cout << "non fumeur ";
    cout << "contenant presentement ";
    if (nb > 1)
        cout << nb <<" passagers ";
    else
        cout << nb <<" passager ";
    cout << "sur " << nbMaxPassagers << "." << endl << "Merci de voyager avec nous." << endl;
    cout << "--------------------------------------------------------------------------------------" << endl << endl;
}
