/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct Cellule
{
    int info;
    Cellule *suivant;
};

Cellule *creerListeCroissant(Cellule *l, int n){
    
    Cellule *tete = new Cellule;
    tete->info = 1;
    l = tete;
    for(int i=2; i<=n; i++){
        Cellule *cellule = new Cellule;
        cellule->info = i;
        l->suivant = cellule;
        l = cellule;
    }
    return tete;
}

Cellule *creerListeDecroissant(Cellule *l, int n){
    
    Cellule *tete = new Cellule;
    tete->info = n;
    l = tete;
    for(int i=n-1; i>=1; i--){
        Cellule *cellule = new Cellule;
        cellule->info = i;
        l->suivant = cellule;
        l = cellule;
    }
    return tete;
}

void afficherListe(const Cellule *l){
    while(l!=nullptr){
        cout<<l->info<<" ";
        l = l->suivant;
    }
}

void afficherListeRec(const Cellule *l){
    if(l!=nullptr){
        cout<<l->info<<" ";
        afficherListeRec(l->suivant);
    }
}

int compterElement(const Cellule *l){
    int compte = 0;
    while(l!=nullptr){
        compte = compte + 1;
        l = l->suivant;
    }
    return compte;
}

double moyenne(const Cellule *l){
    double somme=0, compte=0;
    while(l!=nullptr){
        somme = somme + l->info;
        compte = compte + 1;
        l = l->suivant;
    }
    return somme/compte;
}

void listeCarres(const Cellule *l, Cellule *l1){
    while(l!=nullptr && l1!=nullptr){
        l1->info = l->info*l->info;
        l = l->suivant;
        l1 = l1->suivant;
    }
}

void compterElementBis(Cellule *l, int &n){
    while(l!=nullptr){
        n = n + 1;
        l = l->suivant;
    }
}

Cellule *insererEntier(Cellule *l, int n){
    Cellule *tete = l;
    Cellule *c_precedent = l;
    if(n <= l->info){
        Cellule *cellule = new Cellule;
        cellule->info = n;
        cellule->suivant = l;
        return cellule;
    }
    while(l!=nullptr){
        if( n <= l->info && n >= c_precedent->info ){
            Cellule *cellule = new Cellule;
            cellule->info = n;        
            c_precedent->suivant = cellule;
            cellule->suivant = l;
            return tete;    
        }
        c_precedent = l;
        l = l->suivant;
    }
    if(n >= c_precedent->info){
        Cellule *cellule = new Cellule;
        cellule->info = n;
        c_precedent->suivant = cellule;
    }
    return tete;
}

bool rechercherEntier(Cellule *l, int n){
    while(l!=nullptr){
        if(l->info == n){
            return true;
        }
        l = l->suivant;
    }
    return false;
}

Cellule *supprimerEntier(Cellule *l, int n){
    Cellule *tete = l;
    Cellule *c_precedent = l;
    if(l->info == n){
        tete = l->suivant;
        l = nullptr;
        return tete;
    }
    while(l!=nullptr){
        if(l->info == n){
            c_precedent->suivant = l->suivant;
            return tete;
        }
        c_precedent = l;
        l = l->suivant;
    }
    return tete;
}

Cellule *supprimerPremierElement(Cellule *l){
    return l->suivant;
}

Cellule *supprimerDernierElement(Cellule *l){
    Cellule *tete = l;
    Cellule *c_precedent = l;
    while(l!=nullptr){
        c_precedent = l;
        l = l->suivant;
    }
    tete = supprimerEntier(tete, c_precedent->info);
    return tete;
}

int main()
{
    cout<<"\n";
    Cellule *tete = nullptr;
    Cellule *tete1 = nullptr;
    tete = creerListeCroissant(tete, 10);
    afficherListe(tete);
    cout<<"\n";
    tete1 = creerListeDecroissant(tete, 10);
    afficherListe(tete1);
    cout<<"\n";
    afficherListeRec(tete);
    cout<<"\n";
    cout<<compterElement(tete);
    cout<<"\n";
    cout<<moyenne(tete);
    cout<<"\n";
    listeCarres(tete, tete1);
    afficherListe(tete1);
    cout<<"\n";
    int n=0;
    compterElementBis(tete, n);
    cout<<n<<"\n";
    tete = insererEntier(tete, 0);
    afficherListe(tete);
    cout<<"\nrechercherEntier : \n";
    cout<<rechercherEntier(tete, 0);
    cout<<"\nsupprimerEntier : \n";
    tete = supprimerEntier(tete, 0);
    afficherListe(tete);
    cout<<"\nsupprimerPremierElement : \n";
    tete = supprimerPremierElement(tete);
    afficherListe(tete);
    cout<<"\nsupprimerDernierElement : \n";
    tete = supprimerDernierElement(tete);
    afficherListe(tete);
    return 0;
}

