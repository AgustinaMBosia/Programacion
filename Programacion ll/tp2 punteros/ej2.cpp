/*Escribir un programa que declare un arreglo de 5 enteros, y un puntero a entero.
Comprobar que los elementos del arreglo ocupan posiciones sucesivas en
memoria, escribiendo sus direcciones.*/

#include <iostream>
using namespace std;

int main(){
    int array[5];
    int *p;

    for (int i=0; i<5; i++){
        p=&array[i];
        cout<<p<<endl;
    }
    
}