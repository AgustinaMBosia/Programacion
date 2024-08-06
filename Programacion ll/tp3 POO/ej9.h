/*
 Construir una clase que permita representar un arreglo unidimensional de
enteros. Obtener las siguientes sobrecargas:
 Operador + para sumar dos arreglos.
 Operador – para restar dos arreglos.
 Operador * para calcular el producto escalar de 2 arreglos.
 Operador [] para subindicar los elementos del arreglo.
Realizar un programa principal que haga uso de la clase.
*/

#include <iostream>

using namespace std;

class arregloE {
private:
    int* arreglo;
    int tamano;

public:
    arregloE(int size);

    ~arregloE();

    int getTamano();
    
    int& operator[](int index);

    void operator+(arregloE& otro);

    void operator-(arregloE& otro);

    int operator*( arregloE& otro );
};
