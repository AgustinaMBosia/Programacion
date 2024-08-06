#include <iostream>
#include <cmath>
#include "ej1.h"

using namespace std;

    FIG_GEO::FIG_GEO(double x, double y) {
        centroX=x;
        centroY=y;
    }

     double FIG_GEO::calcularPerimetro() {
        return 0;
    }

     double FIG_GEO::calcularArea() {
        return 0;
    }

     double FIG_GEO::calcularRazonSuperficiePerimetro() {
        return 0;
    }

    Punto::Punto(double x, double y) : FIG_GEO(x, y) {}

    double Punto::calcularPerimetro()   { return 0; }

    double Punto::calcularArea()   { return 0; }

    double Punto::calcularRazonSuperficiePerimetro()   { return 0; }


    Circulo::Circulo(double x, double y, double r) : FIG_GEO(x, y) {
        radio=r;
    }

    double Circulo::calcularPerimetro()   { return 2 * 3.141592 * radio; }

    double Circulo::calcularArea()   { return 3.141592 * radio * radio; }

    double Circulo::calcularRazonSuperficiePerimetro()   { return calcularArea() / calcularPerimetro(); }



    PoligonoRegular::PoligonoRegular(double x, double y, int nLados, double longLado): FIG_GEO(x, y)  {
        
         numLados=nLados; 
         longitudLado=longLado;

    }
    double PoligonoRegular::calcularPerimetro()   { 
        return numLados * longitudLado; 
    }

    double PoligonoRegular::calcularArea()   {
        return 0.25 * numLados * longitudLado * longitudLado / tan(3.141592 / numLados);
    }

    double PoligonoRegular::calcularRazonSuperficiePerimetro()   { 
        return calcularArea() / calcularPerimetro(); 
    }



