/*
Étant donné que les figures géométriques Carré et Cube sont dessinées à partir de 
points, écrivez un programme qui définit les classes Point, Carré et Cube.
Procédez de deux façons :
– en utilisant l’héritage;
– en utilisant la composition.
*/

#include<iostream>
using namespace std;

//Classe Point qui contient les données relatives aux coins des figures
class Point{
public:
    Point() {abscisse = 0; ordonnee = 0; cote = 0;}  //Constructeur qui initialise les points a 0
    ~Point() {}
    void DefinirPoint(int, int);        //2 dimensions, utilise pour les carres
    void DefinirPoint(int, int, int);   //3 dimensions, utilise pour les cubes
    void AfficherPointCarre();
    void AfficherPointCube();
private:
    int abscisse; //Axe des X
    int ordonnee; //Axe des y
    int cote;     //Axe des Z

};

//Classe qui contient et manipule les paramètres des points représentant
//les coins d'un carré
class Carre{
public:
    Carre(){}
    ~Carre(){}
    void CreerCarre();
    void AfficherCarre();
private:
    Point coins[4];
};

//Classe qui contient et manipule les paramètres des points représentant
//les coins d'un carré
class Cube{
public:
    Cube(){}
    ~Cube(){}
    void CreerCube();
    void AfficherCube();
private:
    Point coins[8];
};

//Fonction qui permet de sauvegarder les coordonnées d'un point d'un carré
void Point::DefinirPoint(int x, int y){
    abscisse = x;
    ordonnee = y;
}

//Fonction qui permet de sauvegarder les coordonnées d'un point d'un cube
void Point::DefinirPoint(int x, int y, int z){
    abscisse = x;
    ordonnee = y;
    cote = z;
}

//Fonction permettant d'afficher les coordonées d'un point d'un carré
void Point::AfficherPointCarre(){
    cout << '(' << abscisse << ',' << ordonnee << ") ";
}

//Fonction permettant d'afficher les coordonées d'un point d'un cube
void Point::AfficherPointCube(){
    cout << '(' << abscisse << ',' << ordonnee << ',' << cote << ") ";
}

//Fonction qui reçoit et entre les coordonnées d'un carré
void Carre::CreerCarre(){
    int x, y, esp;

    cout << "Quelle est l'abscisse (axe x) du coin superieur gauche? > ";
    cin >> x;
    cout << "Quelle est l'ordonnee (axe y) du coin superieur gauche? > ";
    cin >> y;
    cout << "Quel est la longueur des cotes du carre? > ";
    cin >> esp;
    cout << endl;

    coins[0].DefinirPoint(x, y);
    coins[1].DefinirPoint(x + esp, y);
    coins[2].DefinirPoint(x, y - esp);
    coins[3].DefinirPoint(x + esp, y - esp);
}

//Fonction qui affiche les coordonnées des points composant un carré
void Carre::AfficherCarre(){
    cout << "Les coordonnes des points du carre sont:" << endl;
    for (int i = 0; i < 4; i++)
        coins[i].AfficherPointCarre();
    cout << endl << endl;
}

//Fonction qui reçoit et entre les coordonnées d'un cube
void Cube::CreerCube(){
    int x, y, z, esp;

    cout << "Quelle est l'abscisse (axe x) du coin superieur gauche? > ";
    cin >> x;
    cout << "Quelle est l'ordonnee (axe y) du coin superieur gauche? > ";
    cin >> y;
    cout << "Quelle est la cote (axe z) du coin superieur gauche? > ";
    cin >> z;
    cout << "Quel est la longueur des cotes du carre? > ";
    cin >> esp;
    cout << endl;

    coins[0].DefinirPoint(x, y, z);
    coins[1].DefinirPoint(x + esp, y, z);
    coins[2].DefinirPoint(x, y - esp, z);
    coins[3].DefinirPoint(x + esp, y - esp, z);
    coins[4].DefinirPoint(x, y, z - esp);
    coins[5].DefinirPoint(x + esp, y, z - esp);
    coins[6].DefinirPoint(x, y - esp, z - esp);
    coins[7].DefinirPoint(x + esp, y - esp, z - esp);
}

//Fonction qui affiche les coordonnées des points composant un c
void Cube::AfficherCube(){
    cout << "Les coordonnes des points du cube sont:" << endl;
    for (int i = 0; i < 8; i++)
        coins[i].AfficherPointCube();
    cout << endl << endl;
}

main(){
    Carre ca;           //Crée un carré
    ca.CreerCarre();    //Entre les corrodonées du carré
    ca.AfficherCarre();  //Affiche oordonnées du carré

    Cube cu;            //Crée un cube
    cu.CreerCube();     //Entre les corrodonées du cube
    cu.AfficherCube();  ////Affiche oordonnées du cube

    return 0;
}
