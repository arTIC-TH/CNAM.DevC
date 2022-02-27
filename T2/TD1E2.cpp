//TD1.E2
// Ecrire un programme qui permet de calculer le vomume d'un tonneau.
//Les donées etaint données par l'utilisateur. On utilisera PI=3.1416

#include <iostream>
#include <math.h>

using namespace std;
int main (){

int V;
int D;
int d;
int h;

cout<<"ingrese grand diametre ";
cin >> D;

cout<<"ingrese petit diametre ";
cin >> d;

cout<<"ingrese hauteur ";
cin >> h;

V=((3.1416*h)/12)*(2*pow(D,2)+pow(d,2));
cout<<"el volume du tonneau: " << V << endl;

cin.ignore();
cin.get();
}
