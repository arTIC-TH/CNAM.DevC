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

void creerUnDomino(Domino &d){
    cout << "Saisez le valeur droite, svp?: " << endl;
        cin>>d.valD;
    cout << "Saisez lle valeur hauche, svp?: " << endl;
        cin>>d.valG;
}

//PUNTO2 Escribir una funcion AfficherUnDomino a un parametre d de type Domino qui va a aficher le domino d sous la forme (valeur gauche: valeur droite)

//Exemple: Domino d1

// d1 */**  afficherUnDomino(d1)->(1:2)



const int NB_DOMINOS>j;
int efffectif;

struct Classe{
    array <Eleve,MAX_ELEVE>c;
    int effectif;
};

void saisirEleve(Eleve &e){
    cout << "Saisez le nom, svp?: " << endl;
        cin>>e.nom;
    cout << "Saisez le prenom, svp?: " << endl;
        cin>>e.prenom;
    cout << "Saisez le anne de naissance, svp?: " << endl;
        cin>>e.annenais;
    cout << "Saisez le sexe, svp?: " << endl;
        cin>>e.sexe;
    cout << "Saisez la moyenne, svp?: " << endl;
        cin>>e.moyenne;
}

int calculerAge(int a){
    return ANNEE_COURANTE-a;
}

void afficherEleve(const Eleve &e){
    cout <<e.nom<<" "<<e.prenom<<" "<<e.sexe<<" "<<e.annenais<<" "<<e.moyenne<<" ";
    cout <<calculerAge(e.annenais)<<" "<<endl;
}

void saisirClasse(Classe &cl, int n){
    for(int i=0; i<n; i++)
    {
        saisirEleve(cl.c[i]);
    }
    cl.effectif = n;
}

void afficherClasse(const Classe&cl){
    for (int i=0; i<cl.effectif;i++){
        afficherEleve(cl.c[i]);
    }
}

int indiceEleve(Classe &cl, string nom, string prenom){
    for (int i=0; i<cl.effectif;i++){
        if(cl.c[i].nom == nom && cl.c[i].prenom == prenom){
            return i;
        }
    }
    return -1;
}

bool chercherEleve(Classe &cl, string nom, string prenom){
    return indiceEleve(cl, nom, prenom) > -1;
}

void ajouterEleve(Classe &cl, Eleve &e){
    if(cl.effectif < MAX_ELEVE){
        cl.c[cl.effectif-1] = e;
    }
}

void supprimerEleve(Classe &cl, string nom, string prenom){
    int indice = indiceEleve(cl, nom, prenom);
    if( indice > -1){
        cl.c[indice] = cl.c[cl.effectif-1];
        //cl.c[cl.effectif-1] = NULL;
        cl.effectif = cl.effectif - 1;
    }
}

int compterNb(Classe &cl, char s){
    int nombreEleves = 0;
    for (int i=0; i<cl.effectif;i++){
        if(cl.c[i].sexe == s){
            nombreEleves = nombreEleves + 1;
        }
    }
    return nombreEleves;
}

float calculerMoyenne(Classe &cl){
    float moyenne = 0;
    if(cl.effectif > 1){
        for (int i=0; i<cl.effectif;i++){
            moyenne = (cl.c[i].moyenne + moyenne)/2;
        }
    }else{
        moyenne = cl.c[0].moyenne;
    }
    return moyenne;
}

int main(){
    Classe cl;
    int nomEleves = 0;
    cout << "Saisez le nombre d'élèves de la classe, svp?: " << endl;
        cin>>nomEleves;
    cout << "Saisez le les élèves de la classe, svp?: " << endl;
    saisirClasse(cl, nomEleves);
    afficherClasse(cl);
    Eleve e;
    saisirEleve(e);
    if(!chercherEleve(cl, e.nom, e.prenom)){
        ajouterEleve(cl, e);
    }
    string nom;
    cout << "Saisez le nom d'élève à supprimer, svp?: " << endl;
        cin>>nom;
    string prenom;
    cout << "Saisez le prenom d'élève à supprimer, svp?: " << endl;
        cin>>prenom;
    supprimerEleve(cl, nom, prenom);
    afficherClasse(cl);
    cout << "Nombre de filles: "<< compterNb(cl, 'F') << endl;
    cout << "Nombre de garçons: "<< compterNb(cl, 'M') << endl;
    cout << "Moyenne de la classe: "<< calculerMoyenne(cl) << endl;
    return 0;
}
