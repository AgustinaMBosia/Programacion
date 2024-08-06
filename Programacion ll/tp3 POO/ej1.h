/*Realizar una clase que permita representar una fecha.
- Definir los datos miembros de la clase.
- Definir si fuera necesario funciones de carga y muestra de los datos miembro.
- Definir un constructor que inicializa la fecha a una fecha dada.
- Definir un constructor que inicializa la fecha en 01/01/1900.
- Definir sobrecargas de los siguientes operadores:
o ++ y – incrementa o decrementa la fecha en 1 día.
o + y – suma a una fecha un cierto número de días.
 Realizar un programa principal que haga uso de la clase.*/

#include <iostream>
using namespace std;


class fecha{
    private:
    int dia;
    int mes;
    int year;

    public:
// constructor
    fecha(int d, int m, int a);
    fecha();

    void operator+(fecha fecha2);
    void operator-(fecha fecha2);
    void operator++();
    void operator--();
    void imprimir();

    //friend ostream& operator<<(ostream& os, const fecha& f);

    int getDia() const { return dia; }
    int getMes() const { return mes; }
    int getYear() const { return year; }

};




