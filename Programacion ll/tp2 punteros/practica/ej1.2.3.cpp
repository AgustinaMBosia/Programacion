//Crear un puntero p de tipo int y hacer que apunte a una variable a
#include <iostream>
using namespace std;

int main(){
    //creación de punteros
    int x,*p;

    p=&x;
    x=12;

    cout<< *p<<" "<<x<<endl;

    return 0;
}