/*Realizar un programa que ingrese una cadena de caracteres de máximo 50
elementos y la envíe como parámetro a una función que maneje punteros
de modo que la función invierta la cadena.*/

#include <iostream>
#include <cstring>
using namespace std;

void funcion(char *a){
    char *p;
    p= new char[50];
    int longitud= strlen(a);

    for (int i=longitud-1, j=0; i>=0, j<longitud; i--, j++){
        p[j]=a[i];
        cout<<p[j];
    }
    
}

int main(){
    char a[50];
    cout<<"ingrese la cadena de char: ";
    cin.getline(a,50);
    funcion(a);

}