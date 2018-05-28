/*
Écrivez un programme qui effectue la conversion en euro d’une somme exprimée en dollars 
canadiens selon trois taux de change différents : 1,35, 1,40 et 1,60.

Le programme doit afficher les résultats à l’écran sous la forme d’un tableau.
*/

#include<iostream>
using namespace std;

//Taux de change
const static float taux1 = 1.35;
const static float taux2 = 1.40;
const static float taux3 = 1.60;

main()
{
    float montant;

    //L'utilisateur entre le montant à convertir
    cout << "Veuillez entrer le montant d'argent Canadien a convertir en Euros: ";
    cin  >> montant;

    cout << "\n\n";

    //Affiche les montants ajustés
    cout << "$CA\tEuro1\tEuro2\tEuro3" << endl;
    cout << "---------------------------------" << endl;
    cout << "|" << montant << "\t|" << montant*taux1 << "\t|" << montant*taux2 << "\t|" << montant*taux3 << "\t|" << endl;
    cout << "---------------------------------" << endl;

    return 0;
}
