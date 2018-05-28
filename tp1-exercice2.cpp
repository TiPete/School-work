/*
Écrivez un programme qui affiche à l’écran la table de multiplication du chiffre entré par l’utilisateur. 
Ce dernier ne doit pas pouvoir entrer un nombre supérieur ou égal à 11. Le chiffre entré par l’utilisateur 
va être multiplié par les nombres 1 à 10.
*/

#include<iostream>
using namespace std;

main()
{
    int nombre = 0;

    //L'utilisateur entre un chiffre de 1 à 10
    while (nombre < 1 || nombre > 10){
        cout << "Veuillez entrer un nombre de 1 a 10: ";
        cin >> nombre;
    }

    cout << endl;

    //À chaque itération, le chiffre est mutiliplé pas le numéro de l'itération
    for (int i = 1; i <= 12; i++)
        cout << nombre << " X " << i << " = " << nombre*i << endl;

    return 0;
}
