/*
Écrivez un programme qui affiche à l’écran tous les carrés inférieurs ou égaux à 1000
*/

#include <iostream>
using namespace std;

//Constante représentant la valeur maximale des carrés
const int maximum = 1000;

main(){

    //Le numéro d'itération est multiplié par lui même et affiché
    //jusqu'à ce que le carré dépasse le valeur maximale de 1000
    for (int i = 0; i*i <= maximum; i++)
        cout << "Carre de " << i << " = " << i*i << endl;

    return 0;
}
