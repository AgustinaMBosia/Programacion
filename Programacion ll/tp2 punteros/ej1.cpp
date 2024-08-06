/*Escribir un programa que declare e inicialice dos variables enteras y un puntero a
entero. A continuación, asigne al puntero la dirección de la primera variable e
imprima la dirección de memoria apuntada y su contenido. Repetir la operación
para la segunda variable.*/

#include <iostream>
using namespace std;

int main(){
    //creación de punteros
    int x=3;
    int y=5;
    int *p;

    p=&x;

    cout<<"dirección: "<<p <<" contenido: "<<*p<<endl;

    p=&y;

    cout<<"dirección: "<<p <<" contenido: "<<*p<<endl;

    return 0;
}