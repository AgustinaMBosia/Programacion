#include <iostream>
#include "ejemplo5.h"
using namespace std;

void persona::setNombre(){
    cout<< "ingrese el nombre de esa persona:"<<endl;
    cin.getline(nombre, 40);
}

void persona::setEdad(){
    cout << "ingrese la edad de "<<nombre <<": "<<endl;
    cin>> edad;
}

int persona::getEdad(){
    return edad;
}

bool persona::mayorEdad(){
    if (edad>=18){
        return true;
    }
    else{
        return false;
    }
}

void persona::imprimir(){
    cout<< nombre ;
    if (mayorEdad())
    {
        cout<<" es mayor de edad";
    }
    else{
        cout<< " no es mayor de edad";
    }
    
}