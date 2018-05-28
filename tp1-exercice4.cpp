/*
Il est interdit de fumer sur les lieux de travail dans une entreprise de Montr�al. 
Chaque employ� fumeur prend en moyenne cinq minutes par jour de son temps de travail 
pour fumer � l�ext�rieur. Les employ�s fumeurs sont pay�s en moyenne 17 dollars de 
l�heure.

�crivez un programme qui permet de calculer le nombre d�heures de travail perdues par 
les 50 employ�s fumeurs et le co�t correspondant : par jour, par semaine, par mois et 
par ann�e.

Le programme doit afficher � l��cran les r�sultats sous la forme d�un tableau.
*/

#include<iostream>
using namespace std;

//Valeurs constantes
const int minutesPerdues = 5;
const int nbrEmployesFumeurs = 50;
const float salaireMoyen = 17;

main(){
    //Valeur totale des pertes, mise � jour au cours du traitement
    float total = 0;

    //Calcule et affiche les pertes pour chaque p�riode
    cout << "Periode\t\t|Perte" << endl;
    cout << "--------------------------" << endl;
    cout << "Jour:\t\t|" << (total = salaireMoyen / 60 * minutesPerdues * nbrEmployesFumeurs) << "$" << endl;
    cout << "Semaine:\t|" << (total *= 7) << "$" << endl;
    cout << "Mois:\t\t|" << (total *= 4) << "$" << endl;
    cout << "Annee:\t\t|" << (total *= 12) << "$" << endl;

    return 0;
}
