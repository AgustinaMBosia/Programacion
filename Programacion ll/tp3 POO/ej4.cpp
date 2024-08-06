
#include <iostream>
#include "ej4.h"
using namespace std;


int main() {
    cronometro crono;

    cout << "inicializado: ";
    crono.show();
    cout << endl;

    ++crono;
    cout << "cronom dsp de unos seg: ";
    crono.show();
    cout << endl;

    crono.reset();
    cout << "cronometro reseteado: ";
    crono.show();
    cout << endl;

    return 0;
}