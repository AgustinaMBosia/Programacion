#include <iostream>
using namespace std;
/*Leer la cantidad de elementos de un vector y los datos en él. Determinar mediante una
función la cantidad de valores distintos presentes en el arreglo.*/

int difer(int vector[]){
    int suma=0;
    for (int i = 1; i < 7; i++)
    {
        if(vector[i]!=vector[i-1]){
            suma++;
        }
    }

    return suma;
}


int main(){
    int vector[7]= {12,23,34,45,56,67,23};
    cout<<"los valores diferentes son: "<<difer(vector);
}