//TD6.E2 ~[°°]~[Fonction Void]
//Exercice 2
// 1. Écrire la fonction pAdditionner
// • elle attend 3 paramètres a, b et c de type entier
// • elle additionne a et b et stocke le résultat dans c
// 2. Écrire la fonction fAdditionner
// • elle attend 2 paramètres a et b de type entier
// • elle additionne a et b et retourne le résultat
// 3. Écrire un programme qui demande à l’utilisateur la saisie de 2 entiers x et y, puis affiche la somme des 2 entiers saisis. On
// utilisera chacune des 2 fonctions successivement afin de comparer les résultat.
// 4. Quelle est la meilleure fonction à utiliser dans ce cas ?

#include <iostream>

using namespace std;

void pAdditionner(int a, int b, int *c)
{
  *c = a + b;
}

int fAdditionner(int a, int b)
{
  return a + b;
}

int main ()
{
  int x,y,c;
  cout << "Entrez l’entier x, svp";
  cin >> x;
  cout << "Entrez l’entier y, svp";
  cin >> y;
  pAdditionner(x, y, &c);
  cout << "c1 : " << c << ".\n";
  cout << "c2 : " << fAdditionner(x, y) << ".\n";
  return 0;
}

/*
Quelle est la meilleure fonction à utiliser dans ce cas ?
fAdditionner, parcequ'on returne un nouvelle valeur
*/
