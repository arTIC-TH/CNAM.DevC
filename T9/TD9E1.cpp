//TD1.E1
//Ecrire un programme qui détermine si une phrase est un pangramme ou non. Un pangramme est une phrase qui contient
//au moins tous les caractères de l’alphabet de A à Z. Voici les différentes étapes pour parvenir à ce programme :
// 1.	Ecrire une fonction saisirPhrase à un paramètre p de type string qui demande à l’utilisateur de saisir une phrase
//et la stocke dans le paramètre p. On utilisera la fonction getline(cin, variable) pour saisir une phrase avec des espaces.

//2.	Ecrire une fonction mettreEnMajuscule à un paramètre p de type string qui retourne p en majuscule. On utilisera la fonction toupper(caractere) qui retourne un caractère en majuscule. 
//Rappel une phrase (type string) est un tableau de caractères

//Exemple : char c =’a’ ; c=toupper(c) ; cout<<c ? A

//3.	Ecrire une fonction remplirTableauFrequence  à 2 paramètres p de type string représentant une phrase et f un tableau de taille 25 représentant un tableau de fréquences. Cette fonction initialisant le tableau f à 0 puis va stocker dans le tableau le nombre d‘occurrences des caractères de la phrase  p     
//Exemple :
//string p= "Bonjour monsieur" ;

//0	1	0	0	1	0	0	0	1	1	0	0	1	2	3	0	0	2	1	0	2	0	0	0	0	0
      
/*4.	Ecrire une fonction estPangramme à un paramètre p de type string qui retourne vrai (true) si la phrase p est un pangramme sinon faux (false).
string p="Bonjour monsieur" ;
if (estPantagramme(p))
cout<< "est un pangramme" ;
else
cout<< "pas un pangramme" ;

5.	Ecrire un programme principal manipulant ces différentes fonctions
voici des pangrammes :
Portez ce vieux whisky au juge blond qui fume
Joyeux, ivre, fatigué, le nez qui pique, Clown Hary skie dans l’ombre 
Hier, au zoo, j'ai vu dix guépards, cinq zébus, un yak et le wapiti fumer
Monsieur Jack, vous dactylographiez bien mieux que Wolf
*/
