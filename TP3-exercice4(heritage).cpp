/*
Étant donné que les figures géométriques Carré et Cube sont dessinées à partir de 
points, écrivez un programme qui définit les classes Point, Carré et Cube.
Procédez de deux façons :
– en utilisant l’héritage;
– en utilisant la composition.
*/

#include<iostream>
using namespace std;

//Classe contenant les coordonnées des points formant les figures
class Point {
public:
    Point() {abscisse = 0; ordonnee = 0; cote = 0;}  //Constructeur qui initialise les points a 0
    ~Point() {}
    //2 dimensions, utilise pour les carres:
    void DefinirPoint(int x, int y) {abscisse = x; ordonnee = y;}
    //3 dimensions, utilise pour les cubes:
    void DefinirPoint(int x, int y, int z) {abscisse = x; ordonnee = y; cote = z;}
    void AfficherPointCarre() {cout << '(' << abscisse << ',' << ordonnee << ") ";}
    void AfficherPointCube(){cout << '(' << abscisse << ',' << ordonnee << ',' << cote << ") ";}
protected:
    int abscisse; //Axe des X
    int ordonnee; //Axe des y
    int cote;     //Axe des Z
};

//La classe classe accré comprend les points composant un carré.
//Elle hérite de la classe Point et est amie de Cube pour rendre accessible les fonctions de Point
class Carre : public Point {
    friend class Cube;
public:
    Carre(){}
    ~Carre(){}
    void CreerCarre();
    void AfficherCarre();
protected:
    Point coins[4];     //Chaque carre est represente par 4 coins
};

//La classe Cube est composé de deux carrés (face avant et face arrière)
//Elle hérite de la classe Carré
class Cube : public Carre {
public:
    Cube(){}
    ~Cube(){}
    void CreerCube();
    void AfficherCube();
protected:
    Carre faces[2];     //Chaque cube est represente par deux faces (carre)
};

//Fonction permettant de créer un nouveau Carre
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
    coins[1].DefinirPoint(x, y + esp);
    coins[2].DefinirPoint(x - esp, y);
    coins[3].DefinirPoint(x - esp, y + esp);
}

//Fonction permettant d'afficher les coordonnées des points d'un carré
void Carre::AfficherCarre(){
        cout << "Les coordonnes des points du carre sont:" << endl;
    for (int i = 0; i < 4; i++){
        coins[i].AfficherPointCarre();
    }
    cout << endl << endl;
}

//Fonction permettant de créer un nouveau cube
void Cube::CreerCube(){
    int x, y, z, esp;

    cout << "Quelle est l'abscisse (axe x) du coin superieur gauche avant? > ";
    cin >> x;
    cout << "Quelle est l'ordonnee (axe y) du coin superieur gauche avant? > ";
    cin >> y;
    cout << "Quelles est la cote (axe z) coin superieur gauche avant? > ";
    cin >> z;
    cout << "Quel est la longueur des cotes du carre? > ";
    cin >> esp;
    cout << endl;

    faces[0].coins[0].DefinirPoint(x, y, z);
    faces[0].coins[1].DefinirPoint(x, y + esp, z);
    faces[0].coins[2].DefinirPoint(x - esp, y, z);
    faces[0].coins[3].DefinirPoint(x - esp, y + esp, z);
    faces[1].coins[0].DefinirPoint(x, y, z - esp);
    faces[1].coins[1].DefinirPoint(x, y, z - esp);
    faces[1].coins[2].DefinirPoint(x, y, z - esp);
    faces[1].coins[3].DefinirPoint(x, y, z - esp);
}

//Fonction permettant d'afficher les coordonnées des points d'un cube
void Cube::AfficherCube(){
    cout << "Les coordones du cube sont:" << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 4; j ++ )
            faces[i].coins[j].AfficherPointCube();
    cout << endl << endl;
}

main(){
    //Crée et affiche un noueau carré
    Carre ca;
    ca.CreerCarre();
    ca.AfficherCarre();

    //Crée et affiche un nouveau cube
    Cube cu;
    cu.CreerCube();
    cu.AfficherCube();

return 0;
}
