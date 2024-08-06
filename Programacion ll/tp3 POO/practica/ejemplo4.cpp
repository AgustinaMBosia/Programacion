/*Implementar la clase operaciones. Se deben cargar dos
valores enteros, calcular su suma, resta, multiplicación y
división, cada una en un método, imprimir dichos resultados. */

#include <iostream>
#include "ejemplo4.h"
using namespace std;

int main() {
    operacion c1;
    c1.inicializar();
    
    float sum= c1.suma();
    float res= c1.resta();
    float mul= c1.multi();
    float div= c1.division();

    cout<<"la suma es: "<<sum<<endl;
    cout<<"la res es: "<<res<<endl;
    cout<<"la multi es: "<<mul<<endl;
    cout<<"la division es: "<<div<<endl;

    return 0;
}