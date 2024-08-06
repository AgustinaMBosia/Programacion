/*Realizar una clase que permita representar un número complejo.
 Definir los datos miembros de la clase.
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir uno o más ructores para inicializar los datos miembro.
 Definir la sobrecarga de los operadores +, - y * para efectuar estas
operaciones entre complejos.
 Definir una función miembro para calcular el conjugado de un complejo.
 Realizar un programa principal que haga uso de la clase.*/

#include <iostream>

using namespace std;

class complejo {
private:
    double real;
    double imag;

public:
    complejo(double r, double i);

    void show() ;

    void operator+( complejo otro);

    void operator-( complejo otro) ;

    void operator*( complejo otro) ;

    void cunjugado() ;
};

