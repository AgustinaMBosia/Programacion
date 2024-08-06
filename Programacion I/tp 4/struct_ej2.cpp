#include <iostream>
#define tama 3
using namespace std;

struct producto {
    string descripcion;
    int elabora;
    int vto;
};

void cargarProductos(producto produ[]) {
    for (int i = 0; i < tama; i++) {
        cout << "Ingrese la descripción del producto número " << i + 1 << ": " << endl;
        cin >> produ[i].descripcion;
        cout << "Ingrese el año de elaboración: " << endl;
        cin >> produ[i].elabora;
        cout << "Ingrese el año de vencimiento: " << endl;
        cin >> produ[i].vto;
    }
}

void marcarProductosVencidos(producto produ[]) {
    int anoActual = 2023; 
    for (int i = 0; i < tama; i++) {
        if (anoActual > produ[i].vto) {
            produ[i].vto = 0; 
        }
    }
}

void mostrarProductos(producto produ[]) {
    for (int i = 0; i < tama; i++) {
        if (produ[i].vto != 0) {
            cout << "** " << produ[i].descripcion << endl;
            cout << "Se elaboró en " << produ[i].elabora << endl;
            cout << "Se vence en " << produ[i].vto << endl;
        }
    }
}

int main() {
    producto produ[tama];
    cargarProductos(produ);
    marcarProductosVencidos(produ);
    mostrarProductos(produ);
}