#include <iostream>
#include <stdlib.h>
using namespace std;

struct Maillon{
       int valeur;        // en este caso es un numero entero
       struct Maillon *suivant;
};

 struct File {
    Maillon *debut;
        Maillon *fin;
};

//    File;

void insertarInicio(File &lista, int valor)
{
    File q;
    q = new(struct Maillon);
    q->nro = valeur;
    q->suivant = lista;
    lista  = q;
}

void insertarFinal(File &lista, int valeur)
{
    File t, q = new(struct Maillon);

    q->nro  = Valeur;
    q->suivant = NULL;

    if(lista==NULL)
    {
        lista = q;
    }
    else
    {
        t = lista;
        while(t->suivant!=NULL)
        {
            t = t->suivant;
        }
        t->suivant = q;
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

void insertarElemento(File &lista, int valeur, int pos)
{
    File q, t;
    int i;
    q = new(struct Maillon);
    q->nro = valeur;

    if(pos==1)
    {
        q->suivant = lista;
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
                q->suivant = t->suivant;
                t->suivant = q;
                return;
            }
            t = t->suivant;
        }
    }
    cout<<"   Error...Posicion no encontrada..!"<<endl;
}

void buscarElemento(File lista, int valor)
{
    File q = lista;
    int i = 1, band = 0;

    while(q!=NULL)
    {
        if(q->nro==valeur)
        {
            cout<<endl<<" Encontrada en posicion "<< i <<endl;
            band = 1;
        }
        q = q->suivant;
        i++;
    }

    if(band==0)
        cout<<"\n\n Numero no encontrado..!"<< endl;
}

void reportarLista(File lista)
{
     int i = 0;

     while(File != NULL)
     {
          cout <<' '<< i+1 <<") " << lista->nro << endl;
          lista = lista->sgte;
          i++;
     }
}


void eliminarElemento(File &lista, int valeur)
{
    File p, ant;
    p = lista;

    if(lista!=NULL)
    {
        while(p!=NULL)
        {
            if(p->nro==valeur)
            {
                if(p==lista)
                    lista = lista->suivant;
                else
                    ant->suivant = p->suivant;

                delete(p);
                return;
            }
            ant = p;
            p = p->suivant;
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
                lista = lista->suivant;
                delete(q);
                q = lista;
            }
            else
            {
                ant->suivant = q->suivant;
                delete(q);
                q = ant->suivant;
            }
        }
        else
        {
            ant = q;
            q = q->suivant;
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
