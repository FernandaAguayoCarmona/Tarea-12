#include "arreglodinamico.h"

ArregloDinamico::ArregloDinamico()
{ 
    arreglo = new string[MAX];
    cont = 0;
    tam = MAX;
}

ArregloDinamico::~ArregloDinamico()
{ // el destructor borrara la memoria
    delete [] arreglo;
}

void ArregloDinamico::insertar_final (const string &s)
{
    if (cont == tam)
    {   expandir (); // cuando el arreglo este lleno, expade, despues podra insertar un elemento
        // expandir su memoria para que siga almacenando
        
    }
    arreglo[cont] = s;
    // copiara lo que reciba en v, lo inserta y cont ++
    cont++;
}


void ArregloDinamico::insertar_inicio (const string &s)
{
    if (cont == tam)
    {   expandir ();
    }
    // sirve para mover los numeros a la derecha
    for (size_t i = cont; i > 0; i--)
    {   // mnueve el elemento a la siguiente posicion
        arreglo[i] = arreglo [i-1];
    }
    arreglo[0] = s;
    cont++;
}  

size_t ArregloDinamico::size()
{
    return cont;
}


void ArregloDinamico::expandir()
{//arreglo dinamico
    string *nuevo = new string[tam+MAX];
    for (size_t i = 0; i< cont; i++)
        {   //aqui copeo los elementos anteriores al nuevo elemento
            nuevo [i] = arreglo [i];
        }   //arreglo y nuevo son punteros, se copea la direccion de memoria
            delete[] arreglo;
            arreglo = nuevo;
            tam = tam + MAX;
}

