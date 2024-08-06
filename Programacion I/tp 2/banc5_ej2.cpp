#include <iostream>

using namespace std;

void multiplos (int x[], int length, int base) {
    for (int i = 0; i < length; ++i) {
        x[i] = base * (i + 1);
    }
}

void mostrar(int x[], int length) {
    cout << "múltiplos:" << endl;
    for (int i = 0; i < length; ++i) {

        cout << x[i] <<endl;
    }
    cout << endl;
}

int main() {
    int length, base;
    int x[length];


    cout << "Ingrese la longitud: ";
    cin >> length;
    cout << "Ingrese la base: ";
    cin >> base;

    multiplos (x, length, base);
    mostrar (x, length);
    
    return 0;
}