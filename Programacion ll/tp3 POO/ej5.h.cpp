#include <iostream>
#include "ej5.h"
using namespace std;

    punto::punto() {
        x=0;
        y=0;
    }

    punto::punto (double equis, double i){
        x=equis;
        y=i;
    }

    void punto::show()  {
        cout << "(" << x << ", " << y << ")";
    }

    void punto::operator++() {
        ++x;
        ++y;
    }

    void punto::operator--() {
        --x;
        --y;
    }

    void punto::operator+(punto  otro) {
        x += otro.x;
        y += otro.y;
    }

    void punto::operator+(int valor) {
        x += valor;
        y += valor;
    }

    void punto::operator-( punto otro) {
        x -= otro.x;
        y -= otro.y;
    }

    void punto::operator-(int valor) {
        x -= valor;
        y -= valor;
    }

    double punto::distanciaAlOrigen()  {
        return sqrt(x * x + y * y);
    }

    double punto::angulo()  {
        return atan2(y, x);
    }