récupérer les données d'entrée (dx, dy, s1, s2, L1) en demandant les bonne unités (km, km/h etc...)<br>
dx <- input utilisateur <br>
dy <- input utilisateur<br>
s1 <- input utilisateur<br>
s2 <- input utilisateur <br>
L1 <- input utilisateur<br>
L2 <- racine carré (dx au carré + dy au carré)<br>
t1 <- L1 / s1<br>
t2 <- L2 / s2<br>
t_tot <- t1 + t2<br>

Affichage t_tot (si l'utilisateur donne les données en km et km/h le résultat est directement en heure)