//TD Listes chainées
// On desire implementer una fie d'entiers a l'aide d'une liste chaînée.
// Une file est une structure de données basée sur le principe << premier entré premier sortie>> (FIFO - First In First Out)
// Exemple : file d'attente a une caisse d'un super marche, file d'attente a un guichet, file d'attente d'impression ...

//Soit les structures suivants:
//1.
//2.
//3.
//4.
//5.
//6. Ecrire une fonction premierSorti a un parametre f de tyoe File qui retourne l'element qui est a la fiin de la file f.
//7. Ecrire une fonction dernierEntre a un parametre f de tyoe File qui retourne l'element qui est au debut de la file f.
//8. Ecrire une fonction nbElements a un parametre f de type File qui retourne le nombre d'elements dans la file f.
//9. Ecrire une fonction detruireFile a un parametre f de type File qui detruit le nombre d'elements dans le file f.
//10. Application des files : croisement routier

//Pour simuler un croisement routier, a sens unique, on utilise 3 files f1, f2 et f3 représentant respectivement les voitures
// arrivant sur des routes R1 et R2, et les voitures partant sur la route R3. La route R2 a un STOP. Les voitures de la file f2
// ne peuvent avancer qui s'il n'y a aucune coiture sur la route R1, donc dans la file f1.



// On souhaite ecrire un algorithme qui simule le depart des voitures sur la route R3, modelisee par la file f3.
// Dans la file f1 on représentara la présence d'une voiture par le nombre 2 et l'absence de voiture par 0
// On n'utilisera que les methodes enfiler, defiler, premierSorti et estFilevide (Martin: primero enfilar y luego responder preguntas eso nos ayuda a crear el algo
// On testera l'algorithme sur f1 : fin->[1,0,1,1,0]-> debut
// On testera l'algorithme sur f2 : fin->[0,2,0,2,2,2,0]-> debut
// Le resultat attendu : f3 fin ->[0,2,0,2,2,1,2,1,1,0]-> debut

// Question1: Que doit faire l'algorithme si les deux premiers sortis des files sont a 0?
// Question2: Que doit faire l'algorithme si le premier sorti de f1 est a 1 et celui de f2 a 2?
// Question3: Que doit faire l'algorithme si le premier sorti de f1 est a 1 est celui de f2 a 0?
// Question4: Que doit faire l'algorithme si le premier dorti de f1 est a 0 et celui de f2 a 2?
// Question5: Que doit faire l'algorithme si l'une des deux files est vide?
// Question6: Ecrire un amgorithme qui modelise ce carrefour, on utilisera une fonction croisement
// (f1,f2) qui prend en paramétres deux files f1 et f2 et qui retourne une file f3 contenant la file
//

#include <iostream>
#include <stdlib.h>
using namespace std;

struct nodo{
       int nro;        // en este caso es un numero entero
       struct nodo *sgte;
};

typedef struct nodo *Tlista;

void insertarInicio(Tlista &lista, int valor)
{
    Tlista q;
    q = new(struct nodo);
    q->nro = valor;
    q->sgte = lista;
    lista  = q;
}

void defiler(File &f, int &x){
    } //Selon M. Martin defiler est recuperer la valeur de premiere maillot a la sortir de la fonction
    // stocker la x dans valeur de derniere maillote es pointeur que contiene el ultimo valor
    x = f.debut -> valeur;
    // toca recuperar la x
    Maillon *p = f.fin
    Maillon prod = null ptd;
    while (ptr = f.debut)
        *** = p;

        diferente de

        // garder si estamos en el primer maillon o en el siguiente
        if (ptr!= nullptr)
            //cortarlo quiere decir meterlo en null

            f pint debut, en ensuite ppodemos destruir la malla,
            hacer un
            delete de plusieurs maillons d'abord
            }
        else // el caso de un solo maillon, delete p
            delete p;
        // luego le ponemos null, porque podemos meter los dos pointeurs a null
        // antes de crear uno nuevo es mejor borrar,
        // usamos mas el tablaux dinamica >> vector, creamos cada vez las casillas

         // como hacemos para revisar si esto funciona,
         // enfila un tercer elemento, el primero que se muestra
         // si todo esta bien escrito, podemos escribir el main

         // algo como lo que sigue:


        void main
         testfileVide()
         defiler()
         cout <<""
         la idea es hacer un main que no producto en funcion de datos asociados a la configuracion

    // siempre que p es diferente de f.debit, es mejor modificar prd y avanzar p. -- p.suivant
{
    File t, q = new(struct Maillon);

    q->nro = valeur;
    q->suivant = NULL;
}

void insertarFinal(Tlista &lista, int valor)
{
    Tlista t, q = new(struct nodo);

    q->nro  = valor;
    q->sgte = NULL;

    if(lista==NULL)
    {
        lista = q;
    }
    else
    {
        t = lista;
        while(t->sgte!=NULL)
        {
            t = t->sgte;
        }
        t->sgte = q;
    }

}

int insertarAntesDespues()
{
    int _op, band;
    cout<<endl;
    cout<<"\t 1. Antes de la posicion           "<<endl;
    cout<<"\t 2. Despues de la posicion         "<<endl;

    cout<<"\n\t Opcion : "; cin>> _op;

    if(_op==1)
        band = -1;
    else
        band = 0;

    return band;
}

void insertarElemento(Tlista &lista, int valor, int pos)
{
    Tlista q, t;
    int i;
    q = new(struct nodo);
    q->nro = valor;

    if(pos==1)
    {
        q->sgte = lista;
        lista = q;
    }
    else
    {
        int x = insertarAntesDespues();
        t = lista;

        for(i=1; t!=NULL; i++)
        {
            if(i==pos+x)
            {
                q->sgte = t->sgte;
                t->sgte = q;
                return;
            }
            t = t->sgte;
        }
    }
    cout<<"   Error...Posicion no encontrada..!"<<endl;
}

void buscarElemento(Tlista lista, int valor)
{
    Tlista q = lista;
    int i = 1, band = 0;

    while(q!=NULL)
    {
        if(q->nro==valor)
        {
            cout<<endl<<" Encontrada en posicion "<< i <<endl;
            band = 1;
        }
        q = q->sgte;
        i++;
    }

    if(band==0)
        cout<<"\n\n Numero no encontrado..!"<< endl;
}

void reportarLista(Tlista lista)
{
     int i = 0;

     while(lista != NULL)
     {
          cout <<' '<< i+1 <<") " << lista->nro << endl;
          lista = lista->sgte;
          i++;
     }
}


void eliminarElemento(Tlista &lista, int valor)
{
    Tlista p, ant;
    p = lista;

    if(lista!=NULL)
    {
        while(p!=NULL)
        {
            if(p->nro==valor)
            {
                if(p==lista)
                    lista = lista->sgte;
                else
                    ant->sgte = p->sgte;

                delete(p);
                return;
            }
            ant = p;
            p = p->sgte;
        }
    }
    else
        cout<<" Lista vacia..!";
}

void eliminaRepetidos(Tlista &lista, int valor)
{
    Tlista q, ant;
    q = lista;
    ant = lista;

    while(q!=NULL)
    {
        if(q->nro==valor)
        {
            if(q==lista) // primero elemento
            {
                lista = lista->sgte;
                delete(q);
                q = lista;
            }
            else
            {
                ant->sgte = q->sgte;
                delete(q);
                q = ant->sgte;
            }
        }
        else
        {
            ant = q;
            q = q->sgte;
        }

    }// fin del while

    cout<<"\n\n Valores eliminados..!"<<endl;
}

void menu1()
{
    cout<<"\n\t\tLISTA ENLAZADA SIMPLE\n\n";
    cout<<" 1. INSERTAR AL INICIO               "<<endl;
    cout<<" 2. INSERTAR AL FINAL                "<<endl;
    cout<<" 3. INSERTAR EN UNA POSICION         "<<endl;
    cout<<" 4. REPORTAR LISTA                   "<<endl;
    cout<<" 5. BUSCAR ELEMENTO                  "<<endl;
    cout<<" 6. ELIMINAR ELEMENTO 'V'            "<<endl;
    cout<<" 7. ELIMINAR ELEMENTOS CON VALOR 'V' "<<endl;
    cout<<" 8. SALIR                            "<<endl;

    cout<<"\n INGRESE OPCION: ";
}


/*                        Funcion Principal
---------------------------------------------------------------------*/

int main()
{
    Tlista lista = NULL;
    int op;     // opcion del menu
    int _dato;  // elemenento a ingresar
    int pos;    // posicion a insertar


    system("color 0b");

    do
    {
        menu1();  cin>> op;

        switch(op)
        {
            case 1:

                 cout<< "\n NUMERO A INSERTAR: "; cin>> _dato;
                 insertarInicio(lista, _dato);
            break;


            case 2:

                 cout<< "\n NUMERO A INSERTAR: "; cin>> _dato;
                 insertarFinal(lista, _dato );
            break;


            case 3:

                 cout<< "\n NUMERO A INSERTAR: ";cin>> _dato;
                 cout<< " Posicion : ";       cin>> pos;
                 insertarElemento(lista, _dato, pos);
            break;


            case 4:

                 cout << "\n\n MOSTRANDO LISTA\n\n";
                 reportarLista(lista);
            break;


            case 5:

                 cout<<"\n Valor a buscar: "; cin>> _dato;
                 buscarElemento(lista, _dato);
            break;

            case 6:

                cout<<"\n Valor a eliminar: "; cin>> _dato;

                eliminarElemento(lista, _dato);
            break;

            case 7:

                cout<<"\n Valor repetido a eliminar: "; cin>> _dato;

                eliminaRepetidos(lista, _dato);
            break;

                    }

        cout<<endl<<endl;
        system("pause");  system("cls");

    }while(op!=8);


   system("pause");
   return 0;
}
