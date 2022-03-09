//TD6.E1 ~[°°]~[Fonction Void]
// Exercice 1
// 1. Écrire la fonction echanger
// • elle attend 2 paramètres x et y de type entier
// • elle échange les contenus des variables x et y (permutation)
// 2. Écrire un programme qui demande à l’utilisateur la saisie de 2 entiers a et b, puis échange et affiche ces 2 entiers. On
// utilisera la fonction précédente. Exemple de déroulement :
// Entrez l’entier a : 5
// Entrez l’entier b : 12
// a vaut 12
// b vaut 5
// 3. Une véritable fonction de type int pourrait-elle être écrite pour remplacer echanger ?
/*
Reponse 3. Une véritable fonction de type int pourrait-elle être écrite pour remplacer echanger ?
Non, parce qu'il faut retourner 2 variables
*/

#include <iostream>

using namespace std;

void echanger (int *x, int *y)
{
  int a;
  a = *x;
  *x = *y;
  *y = a;
}

int main ()
{
  int a,b;
  cout << "Entrez l’entier a, svp";
  cin >> a;
  cout << "Entrez l’entier b, svp";
  cin >> b;
  echanger(&a, &b);
  cout << "a : " << a << ".\n";
  cout << "b : " << b << ".\n";
  return 0;
}

