#include <iostream>
#include "ejemplo2.h"
using namespace std;


int main() {
    funcion f1;
    f1.inicializar();
    
    int cuadr= f1.cuadrante();

    cout<<"la función se ubica en el cuadrante nro "<<cuadr<<endl;

    return 0;
}