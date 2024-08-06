/*Se pide crear un programa que haciendo uso de la reserva dinámica de memoria
almacene un número determinado de valores (n) obtenidos de forma aleatoria,
entre 0 y 100 y los ordene de mayor a menor*/

#include <iostream>
#include <cstdlib> // Para funciones de generación de números aleatorios

using namespace std;


// imprime
void show(int *arreglo, int n) {
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

// bubblesort
void bubblesort(int *arreglo, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j] < arreglo[j + 1]) {
                swap(arreglo[j], arreglo[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    // arreglo dina
    int *arreglo = new int[n];

    // Gnum aleatorios en el array
    for (int i = 0; i < n; i++) {
        arreglo[i] = rand() % 101;
    }

    cout << "Arreglo original:";
    show(arreglo, n);

    bubblesort(arreglo, n);

    cout << "Arreglo ordenado de mayor a menor:";
    show(arreglo, n);

    // libera memo
    delete[] arreglo;

    return 0;
}