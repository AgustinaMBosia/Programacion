/* Realizar una clase que permita representar un punto en coordenadas
cartesianas.
 Definir los datos miembros de la clase.
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir un ructor que inicializa el punto en el origen de coordenadas.
 Definir la sobrecarga del operador ++ que incrementa en 1 ambas
coordenadas.
 Idem para el operador --.
 Definir 2 sobrecargas para el operados +, una para sumar 2 puntos entre si y
otra para sumar a un punto un valor entero.
 Idem para el operador -.
 Definir la/las función/es miembro para obtener la conversión en coordenadas
polares.
 Realizar un programa principal que haga uso de la clase.*/

#include <iostream>
#include <cmath>

using namespace std;

class punto {
private:
    double x;
    double y;

public:
    punto();

    punto (double equis, double i);

    void show() ;

    void operator++() ;

    void operator--() ;

    void operator+(punto  otro);
    void operator+(int valor) ;

    void operator-( punto otro) ;

    void operator-(int valor);

    double distanciaAlOrigen();
    double angulo();
};

