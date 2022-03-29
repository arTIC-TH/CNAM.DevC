/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <array>

using namespace std;

struct Domino
{
    int valG;
    int valD;
};

const int NB_DOMINOS = 28;

struct Jeu
{
    array<Domino,NB_DOMINOS> j;
    int effectif;
};

Domino creerUnDomino(int g, int d){
    Domino dom = {g,d};
    return dom;
}

void afficherUnDomino(Domino &d){
    cout<<"("<<d.valG<<" : "<<d.valD<<") ";
}

void creerJeu(array<Domino,NB_DOMINOS> j){
    int i = 0;
    for(int g=0; g<=6; g++){
        for(int d=g; i<=6; d++){
            j[i] = creerUnDomino(g, d);
            i++;
        }    
    }
}

void afficherUnJeu(array<Domino,NB_DOMINOS> j){
    for(int i=0; i<NB_DOMINOS; i++){
        afficherUnDomino(j[i]);    
    }
}

int valGauche(Domino d){
    return d.valG;
}

void valDroite(Domino &d, int *valeurDroite){
    *valeurDroite = d.valD;
}

Domino retournerUnDomino(Domino &d1){
    Domino d2 = {d1.valG,d1.valD};
    return d2;
}

bool estDouble(Domino &d){
    if( d.valG == d.valD ){
        return true;
    }
    return false;
}

int points(Domino &d){
    return d.valG + d.valD;
}

int pointsJeu(array<Domino,NB_DOMINOS> j){
    int pointsTotal = 0;
    for(int i=0; i<NB_DOMINOS; i++){
        pointsTotal = pointsTotal + points(j[i]);    
    }
    return pointsTotal;
}

int pointsJeuRec(array<Domino,NB_DOMINOS> j, int nbDominos){
    if(nbDominos==1){
        return points(j[nbDominos]);
    }else{
        return points(j[nbDominos]) + pointsJeuRec(j, nbDominos-1) ;
    }
}

int main()
{
    return 0;
}

