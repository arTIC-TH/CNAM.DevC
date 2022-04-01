/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h> 

using namespace std;

struct Maillon {
    int valeur;
    Maillon *suivant;
};

struct File {
    Maillon *debut;
    Maillon *fin;
};

File f;

void initFile(File *f){
    f->debut = nullptr;
    f->fin = nullptr;
}

bool estFileVide(File *f){
    if( f->debut == nullptr ){
        return true;
    }
    return false;
}

bool estFilePleine(File *f){
    if( f->debut != nullptr && f->fin != nullptr && f->debut != f->fin){
        return true;
    }
    return false;
}

void enfiler(File *f, int x){
    Maillon *element = new Maillon;
    element->valeur = x;
    element->suivant = f->debut->suivant;
    f->debut = element;
}

void defiler(File *f, int *x){
    *x = f->fin->valeur;
}

int premierSorti(File *f){
    return f->fin->valeur;
}

int dernierEntre(File *f){
    return f->debut->valeur;
}

int nbElements(File *f){
    Maillon *ref = f->debut; 
    int compte = 0;
    while(ref != nullptr){
        compte++;
        ref = ref->suivant;
    }
    return compte;
}

void detruireFile(File *f){
    initFile(f);
}

void afficherRoute(const Maillon *m){
    while(m != nullptr){
        cout<<m->valeur<<" ";
    }
}

File *remplirRoute(File *f1, int n){
    int taille = rand() % 10;
    for(int i=0; i<taille; i++){
        int vehicule = rand() % 2;
        if(n==2){
            vehicule = 2;
        }
        defiler(f1, &vehicule);
        
    }
    return f1;
}

File *croisement(File *f1, File *f2){
    File *f3;
    
    do{
        if( premierSorti(f1) == 0 && premierSorti(f2) == 0 ){
            f1->debut = f1->debut->suivant;
            f2->debut = f2->debut->suivant;
        }
        if( premierSorti(f1) == 1 && premierSorti(f2) == 2 ){
            enfiler(f3, premierSorti(f1));
            f1->debut = f1->debut->suivant;
        }
        if( premierSorti(f1) == 1 && premierSorti(f2) == 0 ){
            enfiler(f3, premierSorti(f1));
            f1->debut = f1->debut->suivant;
            f2->debut = f2->debut->suivant;
        }
        if( premierSorti(f1) == 0 && premierSorti(f2) == 2 ){
            enfiler(f3, premierSorti(f2));
            f1->debut = f1->debut->suivant;
            f2->debut = f2->debut->suivant;
        }
        if(estFileVide(f1)){
            enfiler(f3, premierSorti(f2));
            f2->debut = f2->debut->suivant;
        }
        if(estFileVide(f2)){
            enfiler(f3, premierSorti(f1));
            f1->debut = f1->debut->suivant;
        }
    }while(f1->debut != nullptr && f2->debut != nullptr);
    
    return f3;
}

int main()
{
    File * f1 = new File;
    File * f2 = new File;
    File * f3 = new File;
    f1 = remplirRoute(f1, 1);
    cout<<"f1 : \n";
    afficherRoute(f1->fin);
    f2 = remplirRoute(f1, 2);
    cout<<"f2 : \n";
    afficherRoute(f2->fin);
    f3 = croisement(f1, f2);
    cout<<"f3 : \n";
    afficherRoute(f3->fin);
    return 0;
}
