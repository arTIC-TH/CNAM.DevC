//Projet.E1 ~[°°.SCRT]~[Solitaire]
// Exercice 1
/* Ecrire une procedure initGrille a un parametre G de type Grille qui initialise
le tableau G avec des valeurs -1.*/


#include <iostream>
#include <array>

using namespace std;

const int NBCASES = 9;

void initGrille(int (*g)[NBCASES]){
    for(int i=0; i< NBCASES; i++){
        for(int j=0; j< NBCASES; j++){
            g[i][j] = -1;
        }
    }
}

// Exercice 2
/* Ecrire une procedure remplirGrille a un parametre G de type Grille qui remplit
le solitaire avec des valeurs 1 et 0 (case centrale por le 0).*/


void remplirGrille(int (*g)[NBCASES]){
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

void afficherGrille(int (*g)[NBCASES]){
    for(int i=0; i<3; i++){
        cout<<"      ";
        for(int j=3; j<6; j++){
            cout<<g[i][j] << " ";
        }
        cout<<"\n";
    }
    for(int i=3; i<6; i++){
        for(int j=0; j<NBCASES; j++){
            cout<<g[i][j] << " ";
        }
        cout<<"\n";
    }
    for(int i=6; i<NBCASES; i++){
        cout<<"      ";
        for(int j=3; j<6; j++){
            cout<<g[i][j] << " ";
        }
        cout<<"\n";
    }
}

// 4) Ecrire une fonction nbPions à un parametre G de type Grille qui retourne
// le nombre des pions présents sur la grille G.
//	Exemple: pour la grille de départ, NbPions(G)-> 44

int nbPions(int (*g)[NBCASES]){
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

//  5) Ecrire une fonction estPriseHD a 3 parametres G de type Grille et x, y de type entier naturel
// qui  retourne vrai si le pion (x,y) peut prendre horizontalement (h) et vers la droite (d) faux sinon

// Exemple: estPriseHD(G,5,3)->True
//          estPriseHD(G,5,1)->False

bool estPriseHD(int (*g)[NBCASES], int x, int y){
    bool estPrise = false;
    if(g[x][y-1] == 1 && g[x][y-2] != 1){
        estPrise = true;
    }
    return estPrise;
}

//  6) Ecrire de meme mes fonctions estPriseHG, estPriseVH et estPriseVB respectivement  horizontalement
//  vers la Gauche, Verticalement vers le Haut et Verticalement vers le Bas.

bool estPriseHG(int (*g)[NBCASES], int x, int y){
    bool estPrise = false;
    if( g[x][y+1] == 1 && g[x][y+2] != 1){
        estPrise = true;
    }
    return estPrise;
}

bool estPriseVH(int (*g)[NBCASES], int x, int y){
    bool estPrise = false;
    if( g[x-1][y] == 1 && g[x-2][y] != 1){
        estPrise = true;
    }
    return estPrise;
}

bool estPriseVB(int (*g)[NBCASES], int x, int y){
    bool estPrise = false;
    if( g[x+1][y] == 1 && g[x+2][y] != 1){
        estPrise = true;
    }
    return estPrise;
}

//7) Ecrire une fonction estPrise a 5 parametres

bool estPrise(int (*g)[NBCASES], int x, int y, char d, char s){
    if( d=='H' ){
        if( s=='D' ){
            return estPriseHD(g, x, y);
        }else{
            return estPriseHG(g, x, y);
        }
    }else{
        if( s=='H' ){
            return estPriseVH(g, x, y);
        }else{
            return estPriseVB(g, x, y);
        }
    }
}

//8) Ecrire une procedure PriseHD a 3 parametres G de type Grille et x, y de type entier naturel qui

void priseHD(int (*g)[NBCASES], int x, int y){
    g[x][y] = 0;
    g[x][y-1] = 0;
    g[x][y-2] = 1;
}

//8) Ecrire une procedure PriseHD a 3 parametres G de type Grille et x, y de type entier naturel qui

void priseHG(int (*g)[NBCASES], int x, int y){
    g[x][y] = 0;
    g[x][y+1] = 0;
    g[x][y+2] = 1;
}

//9) Ecrire de meme procedures PriseHG, PriseVH et PriseVB
void priseVH(int (*g)[NBCASES], int x, int y){
    g[x][y] = 0;
    g[x-1][y] = 0;
    g[x-2][y] = 1;
}

void priseVB(int (*g)[NBCASES], int x, int y){
    g[x][y] = 0;
    g[x+1][y] = 0;
    g[x+2][y] = 1;
}

// 10) Ecrire une fonction nbCoups a 3 parametres G de type Grille et x, y de type entier naturel
int nbCoups(int (*g)[NBCASES], int x, int y){
    int nbCoups = 0;
    if(estPriseVB(g, x, y)){
        nbCoups++;
    }
    if(estPriseVH(g, x, y)){
        nbCoups++;
    }
    if(estPriseHD(g, x, y)){
        nbCoups++;
    }
    if(estPriseHG(g, x, y)){
        nbCoups++;
    }
    return nbCoups;
}

// 11) Ecrire une fonction nbCoupsTotal a un parametre G de type Grille qui designe
int nbCoupsTotal(int (*g)[NBCASES]){
    int nbPions = 0;
    for(int i=0; i<3; i++){
        for(int j=3; j<6; j++){
            nbPions += nbCoups(g, i, j);
        }
    }
    for(int i=3; i<6; i++){
        for(int j=0; j<NBCASES; j++){
            nbPions += nbCoups(g, i, j);
        }
    }
    for(int i=6; i<NBCASES; i++){
        for(int j=3; j<6; j++){
            nbPions += nbCoups(g, i, j);
        }
    }
    return nbPions;
}

// 12) Ecrire une procedure saisir a 5 parametres x y de type entier ...

void saisir(int *x, int *y, char *dep, char *sens, int (*g)[NBCASES]){
     bool mangepion = true;
     do{
        do{
            do{
                cout<<"Entrer la ligne? (Entre 0 et 8) svp : ";
                cin>>*x;
            }while(*x < 0 || *x > 9);

            bool isCorrectY = false;
            do{
                if(*x > 2 && *x < 6){
                    cout<<"Entrer la colonne? (Entre 0 et 8) svp :";
                    cin>>*y;
                    if(*y < 0 || *y > 9){
                        isCorrectY = false;
                    }else{
                        isCorrectY = true;
                    }
                }else{
                    cout<<"Entrer la colonne? (Entre 3 et 5) svp :";
                    cin>>*y;
                    if(*y < 3 || *y > 5){
                        isCorrectY = false;
                    }else{
                        isCorrectY = true;
                    }
                }
            }while(!isCorrectY);

        }while(g[*x][*y] != 1);

        do{
            cout<<"Entrer le deplacement? (H ou V) svp : ";
            cin>>*dep;
        }while( !(*dep == 'H' || *dep == 'V') );

        bool isCorrectSens = false;

        do{
            if(*dep == 'H'){
                cout<<"Entrer le sens? (G ou D) svp :";
                cin>>*sens;
                if(*sens == 'G' || *sens == 'D'){
                    isCorrectSens = true;
                }else{
                    isCorrectSens = false;
                }
            }else{
                cout<<"Entrer le sens? (H ou B) svp :";
                cin>>*sens;
                if(*sens == 'H' || *sens == 'B'){
                    isCorrectSens = true;
                }else{
                    isCorrectSens = false;
                }
            }
        }while(!isCorrectSens);
        mangepion = estPrise(g, *x, *y, *dep, *sens);
        if(!mangepion){
            cout<<"Change de position, pas pion a manger !!!";
        }

    }while(!mangepion);
}

// 13) Ecrire une procedure JouerCoup a 4 parametres G de type Grille, x et y ...

void jouerCoup(int *x, int *y, char *dep, char *sens, int (*g)[NBCASES]){
    if(*dep == 'H'){
        if(*sens == 'D'){
            priseHD(g, *x, *y);
        }else{
            priseHG(g, *x, *y);
        }
    }else{
        if(*sens == 'H'){
            priseVH(g, *x, *y);
        }else{
            priseVB(g, *x, *y);
        }
    }
}

// 14) Ecrire le programme main permettant de jouer au solitaire. Un message "Perdu" ou "Gagne" ..
int main()
{
	int g[NBCASES][NBCASES];
	int x, y;
	char dep, sens;
    cout<<"Solitaire"<<"\n";
    initGrille(g);
    remplirGrille(g);
    bool finPartie;
    bool estGagne = false;
    do{
        finPartie = false;
        afficherGrille(g);
        saisir( &x, &y, &dep, &sens, g );
        jouerCoup( &x, &y, &dep, &sens, g );
        if(nbPions(g) == 1){
            finPartie = true;
            estGagne = true;
        }else if(nbCoupsTotal == 0){
            finPartie = true;
            estGagne = false;
        }
    }while(!finPartie);

    return 0;
}
