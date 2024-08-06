/*Realizar una clase que permita representar un cronom. Dicho cronom
consta de horas, min y seg. Las horas no tienen límite en valor
mientras que los min y seg llegan al máximo hasta 59.
 Definir los datos miembros de la clase.
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir un constructor que inicializa a cero el cronom.
 Definir un método Reset que permita llevar a cero el cronom.
 Definir la sobrecarga del operador ++ para producir el incremento del
cronom en un segundo.
 Realizar un programa principal que haga uso de la clase.*/
#include <iostream>
using namespace std;

class cronometro {
private:
    int horas;
    int min;
    int seg;

public:
    cronometro();
    void show();

    void reset();

    void operator++();
};

