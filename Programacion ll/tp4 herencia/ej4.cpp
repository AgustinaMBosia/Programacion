#include <iostream>
#include "ej4.h"
using namespace std;

int main() {
    Estudiante estudiante("Juan Perez", "12345678", "Soltero", "Ing. en Computación");
    Profesor profesor("Maria Rodriguez", "87654321", "Casado", "Matemáticas");
    PersonalServicio personalServicio("Luis Gonzalez", "56789012", "Divorciado", "Biblioteca");

    cout << "Información del estudiante:" << endl;
    estudiante.imprimirInformacion();
    cout << endl;

    cout << "Información del profesor:" << endl;
    profesor.imprimirInformacion();
    cout << endl;

    cout << "Información del personal de servicio:" << endl;
    personalServicio.imprimirInformacion();
    cout << endl;

    return 0;
}
