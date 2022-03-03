//TD6.E5 ~[��]~[Fonction Void]
// Exercice 5
//  Un carr� magique d�ordre impair est une matrice carr�e de dimension n x n (avec n impair), tel que la somme des lignes, des
// colonnes et des 2 diagonales soient les m�mes.
// Voici une des m�thodes de construction d�un carr� magique d�ordre impair, appel�e m�thode siamoise :
// 1. on place 1 dans la case du milieu de la 1 �re ligne
// 2. pour placer les nombre suivants (2,3,4, etc), on d�cale d�une case vers la droite puis d�une case vers le haut
// � si on sort du carr�, on repart du cot� oppos� comme si le carr� �tait enroul� comme un tore
// � si la prochaine case est occup�e, on d�cale d�une case vers le bas � partir de la position courante
// On va construire des carr�s magiques d�ordre impair de taille maximum 20 (tableaux de 20x20 entiers)
// 1. construire le carr� magique d�ordre 3 puis d�ordre 5 � la main en utilisant la m�thode siamoise.
// 2. �crire la fonction saisirEntierImpair
// � elle attend un param�tres n, de type entier
// � elle demande la saisie d�un nombre entier impair dans l�intervalle [3; 20]; en cas d�erreur, on redemande la saisie.
// 3. �crire la fonction initialiserCarre
// � elle attend 2 param�tres : cm de type tableau de 20x20 entiers et n de type entier impair
// � elle initialise � 0 toutes les cases du tableau cm d�ordre impair n.
// 4. �crire la fonction calculerPosition
// � elle attend 4 param�tres : 2 entiers lig et col (ligne et colonne de la position du dernier nombre plac�), cm de type
// tableau de 20x20 entiers et n de type entier impair
// � elle calcule la position du prochain nombre � placer dans le carr� magique.
// 5. �crire la fonction construireCarre
// � elle attend 2 param�tres : cm de type tableau de 20x20 entiers et n de type entier impair
// � elle construit le carr� magique en utilisant la fonction calculerPosition
// 6. �crire la fonction afficherCarre
// � elle attend 2 param�tres : cm de type tableau de 20x20 entiers et n de type entier impair
// � elle affiche le carr� magique sous forme matricielle
// 7. �crire la fonction verifierCarre
// � elle attend 2 param�tres : cm de type tableau de 20x20 entiers et n de type entier impair
// � elle affiche la somme de la 1�re ligne, puis v�rifie que les sommes des lignes, colonnes et diagonales ont la m�me valeur
// (sinon affiche la somme calcul�e)
// 8. �crire un programme qui demande � l�utilisateur de saisir un entier impair x ne d�passant pas la taille maxi (ici 20), initialise
// un carr� magique cm � 0, remplit le carr� magique d�ordre impair selon la m�thode siamoise, l�affiche sous la forme matricielle
// puis le v�rifie.
// Carre magique d�ordre 3
// 8 1 6
// 3 5 7
// 4 9 2
// Carre magique d�ordre 5
// 17 24 1 8 15
// 23 5 7 14 16
// 4 6 13 20 22
// 10 12 19 21 3
// 11 18 25 2 9
// Carre magique d�ordre 11
// 68 81 94 107 120 1 14 27 40 53 66
// 80 93 106 119 11 13 26 39 52 65 67
// 92 105 118 10 12 25 38 51 64 77 79
// 104 117 9 22 24 37 50 63 76 78 91
// 116 8 21 23 36 49 62 75 88 90 103
// 7 20 33 35 48 61 74 87 89 102 115
// 19 32 34 47 60 73 86 99 101 114 6
// 31 44 46 59 72 85 98 100 113 5 18
// 43 45 58 71 84 97 110 112 4 17 30
// 55 57 70 83 96 109 111 3 16 29 42
// 56 69 82 95 108 121 2 15 28 41 54

