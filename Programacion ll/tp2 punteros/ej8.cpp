/*Realice un programa que permita ingresar una cadena de caracteres de máximo
50 elementos, la envíe como parámetro a una función que utilizando punteros y
retorne el número de vocales minúsculas que contiene la cadena*/

#include <iostream>
#include <cstring>

using namespace std;

int contarVocalesMinusculas(char cadena[]) {
    int contador = 0;
    char *c = cadena;

    for (int i=0; i<50; i++) {
        if (*c == 'a' || *c == 'e' || *c == 'i' || *c == 'o' || *c == 'u') {
            contador++;
        }
        c++; 
    }

    return contador;
}

int main() {
    char cadena[51];
    cout << "Ingrese una cadena de caracteres (máximo 50 elementos): ";
    cin.getline(cadena, 51);

    int numVocales = contarVocalesMinusculas(cadena);

    cout << "Número de vocales minúsculas en la cadena: " << numVocales << endl;

    return 0;
}