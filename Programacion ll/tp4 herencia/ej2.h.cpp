#include <iostream>
#include <string>
#include "ej2.h"

using namespace std;

    Empleado::Empleado( const string& _nombre, int _edad, double _salario)
         {
            nombre=_nombre;
            edad=_edad;
            salario=_salario;
         }


    void Empleado::mostrarDatos()  {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Salario: " << salario << endl;
    }

    Comercial::Comercial(const string& _nombre, int _edad, double _salario, double _comision)
        : Empleado(_nombre, _edad, _salario), comision(_comision) {
            comision=_comision;
        }

    void Comercial::cargarDatos()  {}

    void Comercial::mostrarDatos()   {
        Empleado::mostrarDatos();
        cout << "Comisión: " << comision << endl;
    }

    string Comercial::toString()   {
        return "Comercial: " + nombre + ", Edad: " + to_string(edad) + ", Salario: $" + to_string(salario) + ", Comisión: $" + to_string(comision);
    }

    void Comercial::plus()  {
        if (edad > 30 && comision > salario * 0.12) {
            salario += 3000;
            cout << "¡Plus aplicado al Comercial!" << endl;
        }
    }



    Repartidor::Repartidor( const string& _nombre, int _edad, double _salario, int _zona)
        : Empleado(_nombre, _edad, _salario), zona(_zona) {}

    void Repartidor::cargarDatos()  {}

    void Repartidor::mostrarDatos()   {
        Empleado::mostrarDatos();
        cout << "Zona: " << zona << endl;
    }

    string Repartidor::toString()   {
        return "Repartidor: " + nombre + ", Edad: " + to_string(edad) + ", Salario: $" + to_string(salario) + ", Zona: " + to_string(zona);
    }

    void Repartidor::plus()  {
        if (edad < 25 && zona == 3) {
            salario += 3000;
            cout << "¡Plus aplicado al Repartidor!" << endl;
        }
    }