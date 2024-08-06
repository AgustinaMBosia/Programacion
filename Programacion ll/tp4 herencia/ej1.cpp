#include <iostream>
#include "ej1.h"
using namespace std;

int main() {
    Punto punto(0, 0);
    Circulo circulo(0, 0, 5);
    PoligonoRegular poligono(0, 0, 6, 4);

    cout << "Perímetro del círculo: " << circulo.calcularPerimetro() << endl;
    cout << "Área del círculo: " << circulo.calcularArea() << endl;
    cout << "Razón superficie/perímetro del círculo: " << circulo.calcularRazonSuperficiePerimetro() << endl;

    cout << endl;

    cout << "Perímetro del polígono regular: " << poligono.calcularPerimetro() << endl;
    cout << "Área del polígono regular: " << poligono.calcularArea() << endl;
    cout << "Razón superficie/perímetro del polígono regular: " << poligono.calcularRazonSuperficiePerimetro() << endl;

    return 0;
}