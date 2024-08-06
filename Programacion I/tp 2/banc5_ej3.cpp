#include <iostream>
using namespace std;

void arreglo(int m[], int n[], int o[], int tama) {
    for (int i = 0; i < tama; i++) {
        o[i] = m[i] + n[i];
        cout << o[i] << " ";
    }
    cout << endl;
}

void carga(int m[], int tama) {
    for (int i = 0; i < tama; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> m[i];
    }
}

int main() {
    int tama;
    cout << "Ingrese el tamaño de los arreglos: ";
    cin >> tama;

    int m[tama];
    int n[tama];
    int o[tama];

    carga(m, tama);
    carga(n, tama);
    arreglo(m, n, o, tama);

    return 0;
}