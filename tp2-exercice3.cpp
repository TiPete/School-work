/*
Écrivez un programme capable de trouver une lettre donnée à l’intérieur d’un mot 
de plus de 10 caractères, entré par l’utilisateur. Le programme doit indiquer la 
ou les positions successives du caractère et afficher le ou les caractères trouvés 
en majuscules
*/

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

//Nombre minimum et maximum de caractères dans le mot
const int nbrMinCar = 11;
const int nbrMaxCar = 101;

main(){
    string mot;
    char aChercher;
    int pos;

    //L'utilisateur doit entrer le mot ainsi que le caractère à rechercher
    cout << "Veuillez entrer un mot de plus de " << nbrMinCar << " caracteres: ";
    cin >> mot;

    cout << "Veuillez entrer un caractere a chercher dans le mot:";
    cin >> aChercher;
    cout << endl;

    pos = mot.find(aChercher); // Trouve la première occurence de la lettre
    if (pos != -1){   //Vérifie que le caractère est présent dans le mot
        cout << "La lettre " << aChercher << " apparait aux positions: ";
        while (pos != -1){  //S'exécute jusqu'à ce que la fin du fichier soit atteinte
            cout << " " << pos;
            mot[pos] = toupper(mot[pos]);   //Échange le caractère à cette position par sa majuscule
            pos = mot.find(aChercher, pos+1);   //Trouve la prochaine occurence du caractère
            }
        cout << endl;
        cout << "Resultat: " << mot << endl;
        }
    else
        cout << "Le caractere n'a pas ete trouve!" << endl; //Affiche ce message si le caractère n'est pas présent

    return 0;
}
