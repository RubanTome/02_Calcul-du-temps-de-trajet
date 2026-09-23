/* ---------------------------
Laboratoire : 02
Auteur(s) : Rúben Tomé
Date : 23.09.2026
But : Calcul du temps de trajet
Remarque(s) : Les variables sont toutes en double car les vitesse ainsi que les distances peuvent être des nombres à virgules
--------------------------- */
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main () {
    // Variable avec les données indiquées dans l'exercice
    const double dx = 3.0;
    const double dy = 10.0;
    const double s1 = 5.0;
    const double s2 = 2.0;
    double L1 = 6.0;
    // Demande à l'utilisateur de rentrer la distance L1
    cout << "Entrez la distance L1 : ";
    cin >> L1;
    // Calcul de L2 selon L1 avec pythagore
    const double L2 = sqrt(pow(dx,2) + pow((dy-L1),2));
    // Calcul des temps de parcours temps = distance/vitesse
    const double t1 = L1/s1;
    const double t2 = L2/s2;
    const double t_tot = t1 + t2;
    // Affichage du résultat
    cout << "Temps de parcours = " << t_tot << " heure(s)" << endl;
}