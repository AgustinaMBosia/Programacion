
#include <iostream>
#include "ej9.h"

using namespace std;

int main() {
    arregloE arreglo1(3);
    arreglo1[0] = 1;
    arreglo1[1] = 2;
    arreglo1[2] = 3;

    arregloE arreglo2(3);
    arreglo2[0] = 4;
    arreglo2[1] = 5;
    arreglo2[2] = 6;

    arreglo1 + arreglo2;
    cout << "Suma de arreglos:" << endl;
    for (int i = 0; i < arreglo1.getTamano(); ++i) {
        cout << arreglo1[i] << " ";
    }
    cout << endl;
    //reseteamo
    arreglo1 - arreglo2;

    //resta 
    arreglo1 - arreglo2;
    cout << "Resta de arreglos:" << endl;
    for (int i = 0; i < arreglo1.getTamano(); ++i) {
        cout << arreglo1[i] << " ";
    }
    cout << endl;

    int productoEscalar=arreglo1 * arreglo2;
    cout << "Producto escalar de arreglos: " << productoEscalar << endl;

    return 0;
}
