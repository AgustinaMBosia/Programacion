#include <iostream>
#include "ejemplo3.h"
using namespace std;


int main() {
    Cuadrado c1;
    c1.inicializar();
    
    int cuadr= c1.perimetro();
    int sup= c1.superficie();

    cout<<"el perimetro del cuadrado es: "<<cuadr<<endl;
    cout<<"la superficie del cuadrado es: "<<sup<<endl;

    return 0;
}