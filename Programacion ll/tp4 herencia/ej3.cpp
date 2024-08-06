#include <iostream>
#include <string>
#include "ej3.h"

using namespace std;





int main() {
    Producto* productos[3];
    
    for (int i = 0; i < 3; ++i) {
        cout << "Datos del producto " << i + 1 << ":" << endl;
        char tipo;
        cout << "Tipo (P para perecedero, N para no perecedero): ";
        cin >> tipo;

        if (tipo == 'P' || tipo == 'p') {
            string nombre;
            double precio;
            int diasACaducar;
            cout << "Nombre del producto: ";
            cin >> nombre;
            cout << "Precio del producto: ";
            cin >> precio;
            cout << "Días a caducar: ";
            cin >> diasACaducar;
            productos[i] = new Perecedero(nombre, precio, diasACaducar);
        } 
        
        else {
            string nombre;
            double precio;
            string tipo;
            cout << "Nombre del producto: ";
            cin >> nombre;
            cout << "Precio del producto: ";
            cin >> precio;
            cout << "Tipo: ";
            cin >> tipo;
            productos[i] = new NoPerecedero(nombre, precio, tipo);
        } 
    }

    for (int i = 0; i < 3; ++i) {
        cout << "Datos del producto " << i + 1 << ":" << endl;
        productos[i]->mostrarDatos();
        int cantidad;
        cout << "Cantidad de productos: ";
        cin >> cantidad;
        cout << "Monto a pagar: $" << productos[i]->calcularMonto(cantidad) << endl;
    }

    for (int i = 0; i < 3; ++i) {
        delete productos[i];
    }

    return 0;
}
