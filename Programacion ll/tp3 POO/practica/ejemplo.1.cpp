#include <iostream>
#include "ejemplo.h"
using namespace std;

void Persona::inicializar(){
    lado1 = 11;
    lado2 = 12;
    lado3 = 13;
}

int Persona::mayor(){
    if (lado1 > lado2){
        if (lado1 > lado3){
            return lado1;
        }
        else{
            return lado3;
        }
    }
    else{
        if (lado2 > lado3){
            return lado2;
        }
        else{
            return lado3;
        }
    }
}

bool Persona::equilatero(){
    return (lado1 == lado2 && lado2 == lado3);
}