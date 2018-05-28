/*
�crivez un programme qui affiche � l��cran la table de multiplication du chiffre entr� par l�utilisateur. 
Ce dernier ne doit pas pouvoir entrer un nombre sup�rieur ou �gal � 11. Le chiffre entr� par l�utilisateur 
va �tre multipli� par les nombres 1 � 10.
*/

#include<iostream>
using namespace std;

main()
{
    int nombre = 0;

    //L'utilisateur entre un chiffre de 1 � 10
    while (nombre < 1 || nombre > 10){
        cout << "Veuillez entrer un nombre de 1 a 10: ";
        cin >> nombre;
    }

    cout << endl;

    //� chaque it�ration, le chiffre est mutilipl� pas le num�ro de l'it�ration
    for (int i = 1; i <= 12; i++)
        cout << nombre << " X " << i << " = " << nombre*i << endl;

    return 0;
}
