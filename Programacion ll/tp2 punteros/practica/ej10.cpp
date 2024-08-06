/* Crear un programa que contenga dos funciones creadas por el programador.
La f1 incrementa el valor de una variable enviada como parámetro y retorna el resultado por el
nombre de la función.
La f2 incrementa el valor del una variable enviada como parámetro y retorna el resultado por el
mismo parámetro. */

#include <iostream>
using namespace std;

int f1 (int *p){
    (*p)++;

    return *p;
} 

void f2 (int *j){
    (*j)++;
} 

int main(){
    int i,*p,*j,m;

    p= &i;
    j= &m;

    i= 10;
    m= 20;

    int valor = f1(p);
    cout<< "el valor de f1 es: "<< valor<<endl;

    f2(j);
    cout <<"el valor de f2 es: "<< *j<< endl;
    
}