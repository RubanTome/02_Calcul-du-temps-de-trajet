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
    /*
     * Bonus : Calucl du L1 qui permet de récupérer l'objet le plus rapidement possible
     *
     * On établit une fonction qui calcul le temps total
     * T(L1) = L1/s1 + L2/s2
     *
     * On remplace L2 avec pythagore
     * <=> T(L1) = L1/s1 + sqrt(dx^2 + (dy-L1)^2) / s2
     *
     * On remplace dx,dy,s1,s2 par les données de l'exercice
     * <=> T(L1) = L1/5 + sqrt(9 + (10-L1)^2) / 2
     *
     * On dérive la fonction par rapport à L1 simplifier
     * T'(L1) = 1/5 + (L1-10)/2*sqrt(9+(10-L1)^2)
     *
     * Trouver quand T'(L1) = 0 résoudre l'équation
     * L1 = 10-(6/sqrt(21))
     * En faisant un tableau de signe de T'(L1) on remarque que ce L1 est le minimum de la fonction donc que L1 le plus optimal.
     */
    const double L1 = 10.0 - (6.0/sqrt(21.0));

    // Calcul de L2 selon L1 avec pythagore
    const double L2 = sqrt(pow(dx,2) + pow((dy-L1),2));

    // Calcul des temps de parcours temps = distance/vitesse
    const double t1 = L1/s1;
    const double t2 = L2/s2;
    const double tempsTotal = t1 + t2;

    // Affichage du résultat
    cout << "Temps de parcours = " << tempsTotal << " heure(s)" << endl;

    // Return success
    return 0;
}