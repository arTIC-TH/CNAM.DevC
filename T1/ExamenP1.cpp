#include <iostream>

using namespace std;

int main()
{
    float longueur,largeur,perimetre;

    cout<<"Entrer la longueur: ";
    cin>>longueur;
    cout<<"Entrer la largeur: ";
    cin>>largeur;
        While (longueur<largeur)
        {
        cout<<"Entrer la longueur: ";
        cin>>longueur;
        cout<<"Entrer la largeur: ";
        cin>>largeur;
       }
    perimetre = 2 * (longueur + largeur);
    cout<<"Le perimetre du rectangle est: "<< perimetre;
    return 0;
}
