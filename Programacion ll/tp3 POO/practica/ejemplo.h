#include <iostream>
using namespace std;

class Persona{
    private:
        int lado1, lado2, lado3;
    public:
        // Métodos para inicializar los lados, obtener el lado mayor y verificar si es equilátero
        void inicializar();
        int mayor();
        bool equilatero();
};