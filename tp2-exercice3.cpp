/*
�crivez un programme capable de trouver une lettre donn�e � l�int�rieur d�un mot 
de plus de 10 caract�res, entr� par l�utilisateur. Le programme doit indiquer la 
ou les positions successives du caract�re et afficher le ou les caract�res trouv�s 
en majuscules
*/

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

//Nombre minimum et maximum de caract�res dans le mot
const int nbrMinCar = 11;
const int nbrMaxCar = 101;

main(){
    string mot;
    char aChercher;
    int pos;

    //L'utilisateur doit entrer le mot ainsi que le caract�re � rechercher
    cout << "Veuillez entrer un mot de plus de " << nbrMinCar << " caracteres: ";
    cin >> mot;

    cout << "Veuillez entrer un caractere a chercher dans le mot:";
    cin >> aChercher;
    cout << endl;

    pos = mot.find(aChercher); // Trouve la premi�re occurence de la lettre
    if (pos != -1){   //V�rifie que le caract�re est pr�sent dans le mot
        cout << "La lettre " << aChercher << " apparait aux positions: ";
        while (pos != -1){  //S'ex�cute jusqu'� ce que la fin du fichier soit atteinte
            cout << " " << pos;
            mot[pos] = toupper(mot[pos]);   //�change le caract�re � cette position par sa majuscule
            pos = mot.find(aChercher, pos+1);   //Trouve la prochaine occurence du caract�re
            }
        cout << endl;
        cout << "Resultat: " << mot << endl;
        }
    else
        cout << "Le caractere n'a pas ete trouve!" << endl; //Affiche ce message si le caract�re n'est pas pr�sent

    return 0;
}
