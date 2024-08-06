#include <iostream>
#include <string>
#include "ej3.h"

using namespace std;


    Producto::Producto( string& _nombre, double _precio)
        : nombre(_nombre), precio(_precio) {}

    void Producto::cargarDatos() {
        cout << "Nombre del producto: ";
        cin >> nombre;
        cout << "Precio del producto: ";
        cin >> precio;
    }

    void Producto::mostrarDatos()  {
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }







    Perecedero::Perecedero( string& _nombre, double _precio, int _diasACaducar)
        : Producto(_nombre, _precio), diasACaducar(_diasACaducar) {}

    double Perecedero::calcularMonto(int cantidad)   {
        double monto = precio * cantidad;

        if (diasACaducar == 1) {
            monto -= precio * 4;
        } else if (diasACaducar == 2) {
            monto -= precio * 3;
        } else if (diasACaducar == 3) {
            monto /= 2;
        }

        return monto;
    }
    void Perecedero::cargarDatos()  {
        Producto::cargarDatos();
        cout << "Días a caducar: ";
        cin >> diasACaducar;
    }

    void Perecedero::mostrarDatos()   {
        Producto::mostrarDatos();
        cout << "Días a caducar: " << diasACaducar << endl;
    }



    double NoPerecedero::calcularMonto(int cantidad)   {
        return precio * cantidad;
    }

    void NoPerecedero::cargarDatos()  {
        Producto::cargarDatos();
        cout << "Tipo: ";
        cin >> tipo;
    }

    void NoPerecedero::mostrarDatos()   {
        Producto::mostrarDatos();
        cout << "Tipo: " << tipo << endl;
    }

