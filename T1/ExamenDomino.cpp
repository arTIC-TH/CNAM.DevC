#include <iostream>
#include <array>

using namespace std;

const int NB_DOMINOS = 28;

struct Domino {
    int valG; //valeur gauche du domino
    int valD; //valeur droite du domino
};

struct Jeu
{
    array<Domino, NB_DOMINOS>j;
    int efffectif;
};

Domino creerUnDomino(int g, int d){
        Domino dom;
        dom.valG = g;
        dom.valD = d;
        return dom;
    }

void saisirUnDomino(Domino &d){
    cout << "Saisez le valeur droite, svp?: " << endl;
        cin>>valD;
    cout << "Saisez lle valeur hauche, svp?: " << endl;
        cin>>valG;
}


int calculerPieces(int p){
    return NB_DOMINOS-p;
}

void afficherDomino(const Domino &d){
    cout <<d.valG<<" "<<d.valD<<endl;
}

void afficherJeu(Jeu &d){
    for (int i=0; i<d.effectif;i++){
        afficheUnDomino(d.j[i]);
    }
}

void afficherUnJeu(Jeu &d){
    for (int i=0; i<d.effectif;i++){
        for (int j=0; j<d.effectif;j++){
            afficheUnJeu(d.j[i]);
    }
}

}


