#include <iostream>
#include "ej5.h"
using namespace std;

int main() {
    punto punto1;
    punto punto2(3, 4);

    cout << "punto 1: ";
    punto1.show();
    cout << endl;

    cout << "punto 2: ";
    punto2.show();
    cout << endl;

    ++punto1;
    --punto2;

    cout << "punto one dsp de incrementar: ";
    punto1.show();

    cout << endl;

    cout << "punto 2 dsp de decrementar: ";
    punto2.show();

    cout << endl;

    punto1 + punto2;
    cout << "sum de los ptos: ";
    punto1.show();

    cout << endl;

    punto1 - punto2;
    cout << "Resta de los pts: ";
    punto1.show();
    
    cout << endl;

    punto1 + 2;
    cout << "suma de punto 1 y entero: ";
    punto1.show();
    cout << endl;

    punto2 - 1;
    cout << "resta de punto 2( con entero): ";
    punto2.show();
    cout << endl;

    cout << "Distancia de uno a origen: " << punto1.distanciaAlOrigen() << endl;
    cout << "ang del punto 2: " << punto2.angulo() << " radianrs" << endl;

    return 0;
}