récupérer les données d'entrée (dx, dy, s1, s2, L1) en demandant les bonne unités (km, km/h etc...)
dx <- input utilisateur
dy <- input utilisateur
s1 <- input utilisateur
s2 <- input utilisateur 
L1 <- input utilisateur
L2 <- racine carré (dx au carré + dy au carré)
t1 <- L1 / s1
t2 <- L2 / s2
t_tot <- t1 + t2

Affichage t_tot (si l'utilisateur donne les données en km et km/h le résultat est directement en heure)