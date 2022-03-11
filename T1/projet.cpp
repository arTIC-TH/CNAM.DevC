//E1>>Sequence
// Ecrire un programme qui permet de calculer le polynome P(x)=2x^2-3+7
//La valeur a calculer doit etre saisie para l'utilisateur
//Exemple d'execution
//Valeur de x ?5
//P(5)=42

#include <iostream>
#include <math.h>

using namespace std;
int main (){

int X;
int P;

cout<<"ingrese numero X";
cin >> X;

P=((2*pow(X,2)-3*X)+7);
cout<<"El valor del polinomio es: " << P << endl;

cin.ignore();
cin.get();
}
