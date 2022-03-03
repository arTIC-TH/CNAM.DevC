//TD1.E1
//Ecrire un programme qui d�termine si une phrase est un pangramme ou non. Un pangramme est une phrase qui contient
//au moins tous les caract�res de l�alphabet de A � Z. Voici les diff�rentes �tapes pour parvenir � ce programme :
// 1.	Ecrire une fonction saisirPhrase � un param�tre p de type string qui demande � l�utilisateur de saisir une phrase
//et la stocke dans le param�tre p. On utilisera la fonction getline(cin, variable) pour saisir une phrase avec des espaces.

//2.	Ecrire une fonction mettreEnMajuscule � un param�tre p de type string qui retourne p en majuscule. On utilisera la fonction toupper(caractere) qui retourne un caract�re en majuscule. 
//Rappel une phrase (type string) est un tableau de caract�res

//Exemple : char c =�a� ; c=toupper(c) ; cout<<c ? A

//3.	Ecrire une fonction remplirTableauFrequence  � 2 param�tres p de type string repr�sentant une phrase et f un tableau de taille 25 repr�sentant un tableau de fr�quences. Cette fonction initialisant le tableau f � 0 puis va stocker dans le tableau le nombre d�occurrences des caract�res de la phrase  p     
//Exemple :
//string p= "Bonjour monsieur" ;

//0	1	0	0	1	0	0	0	1	1	0	0	1	2	3	0	0	2	1	0	2	0	0	0	0	0
      
/*4.	Ecrire une fonction estPangramme � un param�tre p de type string qui retourne vrai (true) si la phrase p est un pangramme sinon faux (false).
string p="Bonjour monsieur" ;
if (estPantagramme(p))
cout<< "est un pangramme" ;
else
cout<< "pas un pangramme" ;

5.	Ecrire un programme principal manipulant ces diff�rentes fonctions
voici des pangrammes :
Portez ce vieux whisky au juge blond qui fume
Joyeux, ivre, fatigu�, le nez qui pique, Clown Hary skie dans l�ombre 
Hier, au zoo, j'ai vu dix gu�pards, cinq z�bus, un yak et le wapiti fumer
Monsieur Jack, vous dactylographiez bien mieux que Wolf
*/
