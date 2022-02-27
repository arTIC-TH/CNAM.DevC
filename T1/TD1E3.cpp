//TD1.Ex3
// Ecrire un programme permetttant d'changer le contenu de 2 variables. Les valeurs seront saisies du clavier et le resultat afficher a l'ecran
//example d'execution
//Valeur de A
//Valeur de B
//Apres permutation

#include <iostream>

using namespace std;
int
main ()
{

  int A;
  int B;

  cout << "ingrese A";
  cin >> A;

  cout << "ingrese B";
  cin >> B;

  cout << "La valeur A: " << A << " et la valeur B: " << B << endl;
  cout << "La valeur A: " << B << " et la valeur A: " << A << endl;

  cin.ignore ();
  cin.get ();
}
