#include <iostream>
#include <string>
#include "ej2.h"

using namespace std;
int main() {
    Comercial comercial("Juan", 35, 2000, 300);
    Repartidor repartidor("Pedro", 23, 1800, 3);

    cout << "Datos del Comercial:" << endl;
    comercial.mostrarDatos();
    comercial.plus();
    cout << "Salario actualizado: $" << comercial.salario << endl;
    cout << endl;

    cout << "Datos del Repartidor:" << endl;
    repartidor.mostrarDatos();
    repartidor.plus();
    cout << "Salario actualizado: $" << repartidor.salario << endl;

    return 0;
}
