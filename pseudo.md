déclaration des variables des données indinquées dans l'énoncé en (km,km/h)<br>
dx <- 3.0 <br>
dy <- 10.0<br>
s1 <- 5.0<br>
s2 <- 2.0 <br>
Bonus trouver L1 optimal : calcul expliquer dans le code<br>
L1 <- 10.0-(6.0/sqrt(21.0))<br>
L2 <- sqrt(dx^2 + (dy-L1)^2)<br>
t1 <- L1 / s1<br>
t2 <- L2 / s2<br>
tempsTotal <- t1 + t2<br>

Affichage tempsTotal (si l'utilisateur donne les données en km et km/h le résultat est directement en heure)