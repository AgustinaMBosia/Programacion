#include <iostream>
#include "ejemplo3.h"
using namespace std;

void Cuadrado::inicializar(){
    cout<<"ingrese el lado: ";
    cin>>l1;
        
}

int Cuadrado::perimetro(){
    int peri= l1*4;
    return peri;
}

int Cuadrado::superficie(){
    int area=l1*l1;
    return area;
}