//Projet.E1 ~[°°]~[Le solitaire]
// Exercice 1
/* Ecrire une procedure initGrille a un parametre G de type Grille qui initialise
le tableau G avec des valeurs -1.*/

#include <iostream>

using namespace std;

const int NBCASES = 9;

void initGrille(int (&g)[NBCASES][NBCASES]){
    for(int i=0; i< NBCASES; i++){
        for(int j=0; j< NBCASES; j++){
            g[i][j] = -1;
        }
    }
}

// Exercice 2
/* Ecrire une procedure remplirGrille a un parametre G de type Grille qui remplit
le solitaire avec des valeurs 1 et 0 (case centrale por le 0).*/

void remplirGrille(int (&g)[NBCASES][NBCASES]){
    for(int i=0; i<3; i++){
        for(int j=3; j<6; j++){
            g[i][j] = 1;
        }
    }
    for(int i=3; i<6; i++){
        for(int j=0; j<NBCASES; j++){
            g[i][j] = 1;
        }
    }
    for(int i=6; i<NBCASES; i++){
        for(int j=3; j<6; j++){
            g[i][j] = 1;
        }
    }
    g[4][4] = 0;
}


// Exercice 3
/* Ecrire une procedure afficherGrille a un parametre G de type Grille qui affiche
sour la forme suivant.
				1  1  1
				1  1  1
				1  1  1
	   1  1  1  1  1  1  1  1  1
	   1  1  1  1  0  1  1  1  1
       1  1  1  1  1  1  1  1  1
	   	        1  1  1
			    1  1  1
		        1  1  1
*/

void afficherGrille(int (&g)[NBCASES][NBCASES]){
    for(int i=0; i<3; i++){
        for(int j=3; j<6; j++){
            cout<<g[i][j] = 1 << " ";
        }
    }
    for(int i=3; i<6; i++){
        for(int j=0; j<NBCASES; j++){
            cout<<g[i][j] = 1 << " ";
        }
    }
    for(int i=6; i<NBCASES; i++){
        for(int j=3; j<6; j++){
            cout<<g[i][j] = 1 << " ";
        }
    }
}

void afficherGrille(int (&g)[NBCASES][NBCASES]){
    for(int i=0; i<3; i++){
        for(int j=3; j<6; j++){
            cout<<g[i][j] = 1 << " ";
        }
    }
    for(int i=3; i<6; i++){
        for(int j=0; j<NBCASES; j++){
            cout<<g[i][j] = 1 << " ";
        }
    }
    for(int i=6; i<NBCASES; i++){
        for(int j=3; j<6; j++){
            cout<<g[i][j] = 1 << " ";
        }
    }
}

// Exercice 4
/* Ecrire une fonction nbPions à un parametre G de type Grille qui retourne
le nombre des pions présents sur la grille G.
	Exemple: pour la grille de départ, NbPions(G)-> 44
*/


int nbPions(int (&g)[NBCASES][NBCASES]){
    int nbPions = 0;
    for(int i=0; i< NBCASES; i++){
        for(int j=0; j< NBCASES; j++){
            if(g[i][j] != -1){
                nbPions = nbPions + g[i][j];
            }
        }
    }
    return nbPions;
}


bool estPriseHD(int (&g)[NBCASES][NBCASES], int x, int y){
    bool estPrise = false;
    if( x-1 >= 0 && x-2 >= 0 && x-1 < NBCASES && x-2 < NBCASES && g[x-1][y] == 1 && g[x-2][y] != 1){
        estPrise = true;
    }
    return estPrise;
}

bool estPriseHG(int (&g)[NBCASES][NBCASES], int x, int y){
    bool estPrise = false;
    if( x+1 >= 0 && x+2 >= 0 && x+1 < NBCASES && x+2 < NBCASES && g[x+1][y] == 1 && g[x+2][y] != 1){
        estPrise = true;
    }
    return estPrise;
}

bool estPriseVH(int (&g)[NBCASES][NBCASES], int x, int y){
    bool estPrise = false;
    if( y-1 >= 0 && y-2 >= 0 && y-1 < NBCASES && y-2 < NBCASES && g[x][y-1] == 1 && g[x][y-2] != 1){
        estPrise = true;
    }
    return estPrise;
}

bool estPriseVB(int (&g)[NBCASES][NBCASES], int x, int y){
    bool estPrise = false;
    if( y+1 >= 0 && y+2 >= 0 && y+1 < NBCASES && y+2 < NBCASES && g[x][y+1] == 1 && g[x][y+2] != 1){
        estPrise = true;
    }
    return estPrise;
}

bool estPriseVB(int (&g)[NBCASES][NBCASES], int x, int y, char d, char s){
    if( d='H' ){
        if( s='D' ){
            return estPriseHD(g, x, y);
        }else{
            return estPriseHG(g, x, y);
        }
    }else{
        if( s='H' ){
            return estPriseVH(g, x, y);
        }else{
            return estPriseHB(g, x, y);
        }
    }
}
