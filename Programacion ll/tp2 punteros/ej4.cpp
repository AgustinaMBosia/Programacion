/*Realizar un programa que rellene de forma aleatoria con los primeros 100
números un arreglo de 15 elementos. Mostrar por medio de punteros los valores
en el vector y la dirección de memoria de cada uno.
*/

#include <iostream>
using namespace std;

int main(){
    int *p;
    int array[15];

    for(int i=0;i<15;i++){
        array[i]= rand() % 100;
        p=&array[i];

        cout<<"dirección: "<<p <<" contenido: "<<*p<<endl;
    }


    return 0;
}

