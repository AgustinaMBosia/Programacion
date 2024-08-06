#include <iostream>
#include "ejemplo.h"
using namespace std;

int main() {
    Persona persona1;
    persona1.inicializar();
    if (persona1.equilatero()) {
        cout << "Es equilátero" << endl;
    } else {
        int mayo= persona1.mayor();
        cout << "El lado mayor es " << mayo << endl;
    }

    return 0;
}