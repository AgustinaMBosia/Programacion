/*Definir un arreglo unidimensional de N componentes enteras de modo que la
gestión de memoria sea dinámica utilizando new. Ingresar los datos en el vector.
Mostrar el contenido del vector en dos modos: usando notación vectorial y luego
usando aritmética de punteros.
*/

#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Ingrese el tamaño del vector: ";
    cin >> N;

    int *vector = new int[N];

    cout << "Ingrese los " << N << " elementos del vector:";
    for (int i = 0; i < N; i++) {
        cin >> vector[i];
    }

    cout << "Contenido del vector usando notación vectorial: (";
    for (int i = 0; i < N-1; i++) {
        cout << vector[i] << ", ";
    }
    cout <<vector[N-1]<<")"<< endl;

    cout << "Contenido del vector usando aritmética de punteros:";
    for (int *ptr = vector; ptr < vector + N; ptr++) {
        cout << *ptr << " ";
    }
    cout <<""<< endl;

    delete[] vector;

    return 0;
}