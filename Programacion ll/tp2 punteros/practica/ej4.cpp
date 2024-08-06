/*Crear un programa que defina dos punteros a tipos de datos int y float. Acceder mediante estos
punteros a otras variables de tipo int y float.*/
#include <iostream>
using namespace std;

int main(){
    //creación de punteros
    int y,*q;
    float x, *p;

    p=&x;
    x=12.123;
    q=&y;
    y=23; 

    cout<< *p<<" "<<*q<<endl;

    cout<< x<<" "<<y<<endl;

    return 0;
}