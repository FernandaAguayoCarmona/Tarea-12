// Clase - arreglo dinamico para enteros
#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H

#include <iostream>
using namespace std;

class ArregloDinamico
{
    string *arreglo;
    size_t tam; //elementos para  almacenar
    size_t cont;
    // MAX sera el tamaño de el arreglo dinamico
    const static size_t MAX = 8;
    public:
        ArregloDinamico ();
        ~ArregloDinamico();
        void insertar_final (const string &s);
        void insertar_inicio (const string &s);
        
        size_t size();
        string operator[](size_t p)
        {
            return arreglo[p];
        }
    private:
        void expandir();
};
#endif