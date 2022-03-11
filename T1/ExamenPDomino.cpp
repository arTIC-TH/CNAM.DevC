#include <iostream>
#include <array>

using namespace std;

const int NB_DOMINOS = 28;
// on decide de representer un Domino comment un enregistrement a 2 champs defini de la facon suivante

struct Domino {
    int valG; //valeur gauche du domino
    int valD; //valeur droite du domino
};

//Un jeu est defini par un tableau de dominos (maximun 28 dominos) et par un effectif (le nombre des dominos
//contenus dans le jeu) dont voici la declaration:

//const int NB_DOMINOS = 28;
struct Jeu
{
    array<Domino, NB_DOMINOS>j;
    int efffectif;
};

// PUNTO 1) Ecrire une function creer un domino a 2 parametres g et d de type entier qui retourne le domino avec la valeur gauche
// g et la valeur droite d.

//Exemple: Domino d1;
// d1=creerUnDomino(1,2) va creer le domino d1 dont sa representation graphique est
// lado izquierdo * / lado derecho **

Domino creerUnDomino(int g, int d){
        Domino dom;
        dom.valG = g;
        dom.valD = d;
        return dom;
    }

void saisirUnDomino(Domino &d){
    cout << "Saisez le valeur droite, svp?: " << endl;
        cin>>d.valD;
    cout << "Saisez lle valeur hauche, svp?: " << endl;
        cin>>d.valG;
}

//PUNTO2 Escribir una funcion AfficherUnDomino a un parametre d de type Domino qui va a aficher le domino d sous la forme (valeur gauche: valeur droite)

//Exemple: Domino d1

// d1 */**  afficherUnDomino(d1)->(1:2)

void afficheUnDomino(Domino &d){
    cout << "( " << d.valG << ":" << d.valD << ")" << endl;
}

