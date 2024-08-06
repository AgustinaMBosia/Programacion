/*Ingresar una cadena de caracteres de longitud máxima 10, enviarla como
parámetro a una función que maneje punteros de modo que retorne la misma
cadena de caracteres, pero en mayúsculas.*/
#include <iostream>
using namespace std;

void funcion(char cadena[]){
    char *p;
    p= new char[10];
    for (int i=0;i<10; i++){
        p[i]=toupper(cadena[i]);
    }
    for(int i=0;i<10;i++){
        cout<< p[i];
    }

    delete []p;
}


int main(){
    char cadena[10];
    cout<<"entre cadena: ";
    cin.getline(cadena,11);
    funcion(cadena); 
  
}