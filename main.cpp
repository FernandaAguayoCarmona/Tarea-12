#include <iostream>
#include <conio.h>
#include "arreglodinamico.h"
using namespace std;

int main ()
{   
    ArregloDinamico arreglo;
    arreglo.insertar_final("fer");
    arreglo.insertar_final("come");
    arreglo.insertar_final("patatas");
    arreglo.insertar_final("con");
    arreglo.insertar_final("helado");
    arreglo.insertar_final("por");
    arreglo.insertar_final("que");
    arreglo.insertar_final("saben");

    arreglo.insertar_inicio("muy");
    arreglo.insertar_inicio("rico");

    for (size_t i =0; i < arreglo.size(); i++)
    {
        cout << arreglo [i] << " ";
    }
     return 0;
}