/*Crear un programa Orientado a Objetos que cree una clase que
permita cargar el nombre y la edad de una persona.
La clase debe permitir mostrar los datos cargados y determinar si la
persona es mayor de edad (edad>=18). */

#include <iostream>
using namespace std;

class persona{
    private:
        int edad;
        char nombre[40];
    public: 
        void setNombre();
        char getNombre();
        void setEdad();
        int getEdad();


        void inicializar();
        bool mayorEdad();
        void imprimir();
};

