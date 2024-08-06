/*Se desea obtener un sistema de representación de figuras geométricas. Toda
figura geométrica posee un centro (coordenada x y coordenada y) y posee
además una fórmula para calcular su perímetro y su área.
Es posible definir también la razón superficie/perímetro.
Teniendo en cuenta estas consideraciones obtenga un mecanismo de herencia
que a partir de una clase abstracta FIG_GEO permita generar las clases
derivadas para representar un punto, un círculo y un polígono regular.
Realice pruebas de las clases creadas mediante un programa principal.*/

#include <iostream>
#include <cmath>

using namespace std;


class FIG_GEO {
protected:
    double centroX;
    double centroY;

public:
    FIG_GEO(double x, double y);

    virtual double calcularPerimetro();

    virtual double calcularArea() ;

    virtual double calcularRazonSuperficiePerimetro() ;
};

class Punto : public FIG_GEO {
public:
    Punto(double x, double y)  ;

    double calcularPerimetro()  override ;

    double calcularArea()  override ;

    double calcularRazonSuperficiePerimetro()  override ;
};

class Circulo : public FIG_GEO {
private:
    double radio;

public:
    Circulo(double x, double y, double r) ;

    double calcularPerimetro()  override ;
    double calcularArea()  override ;
    double calcularRazonSuperficiePerimetro()  override ;
};

class PoligonoRegular : public FIG_GEO {
private:
    int numLados;
    double longitudLado;

public:
    PoligonoRegular(double x, double y, int nLados, double longLado);
    double calcularPerimetro()  override;

    double calcularArea()  override;

    double calcularRazonSuperficiePerimetro()  override ;
};


