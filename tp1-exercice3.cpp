/*
�crivez un programme qui affiche � l��cran tous les carr�s inf�rieurs ou �gaux � 1000
*/

#include <iostream>
using namespace std;

//Constante repr�sentant la valeur maximale des carr�s
const int maximum = 1000;

main(){

    //Le num�ro d'it�ration est multipli� par lui m�me et affich�
    //jusqu'� ce que le carr� d�passe le valeur maximale de 1000
    for (int i = 0; i*i <= maximum; i++)
        cout << "Carre de " << i << " = " << i*i << endl;

    return 0;
}
