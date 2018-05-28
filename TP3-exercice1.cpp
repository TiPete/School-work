/*
�crivez un programme avec une classe, dont les membres incluent un nom, un sexe 
(M ou F), un �ge et un num�ro de t�l�phone, que vous d�sirez afficher � l��cran 
comme suit :
Nom : Jacques Rivard 
Sexe : M 
�ge : 40 
T�l�phone : 555-1212
*/

#include<iostream>
using namespace std;

//Classe repr�sentant une personne
class Personne
{
private:
    string prenom, nom, telephone;
    char sexe;
    int age;
public:
    Personne(){prenom = ""; nom = ""; telephone = ""; sexe = 'a'; age = 0;}
    ~Personne() {}
    void init(string, string, char, int, string);
    void affiche(void);
};

//Fonction permettant de peupler les informations d'une personne
void Personne::init(string p, string n, char s, int a, string t)
{
    prenom = p;
    nom = n;
    sexe= s;
    age = a;
    telephone = t;
}

//Fonction qui affiche les informations d'une personne
void Personne::affiche(void)
{
    cout << "Nom : " << prenom << ' ' << nom << endl;
    cout << "Sexe : " << sexe << endl;
    cout << "Age : " << age << endl;
    cout << "Telephone : " << telephone << endl << endl;
}

main(){
    //Cr�er les personnes
    Personne p;
    Personne e;

    //Entre les donn�es des personnes
    p.init("Pierre", "Sylvain", 'M', 42, "514-297-6391");
    e.init("Erica", "Mitchell", 'F', 37, "514-271-6391");

    //Affiche les informations
    p.affiche();
    e.affiche();

    return 0;
}
