#include <iostream>
using namespace std;

int main()
{
        int x;
        // saisie de la variable x
        cout<<"valeur de x ? ";
        cin>>x;

        //calcul du polinome 2x^2-3x+7
        int y;
        y=2*x*x-3*x+7;

        //affichage du résultat
        cout<<"p("<<x<<")="<<y<<endl;

       return 0;
    }
