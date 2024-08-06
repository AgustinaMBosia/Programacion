#include <iostream>
#include "ej2.h"
using namespace std;

int racional::mcm(int a, int b) {
        if (b == 0){
            return a;
        }
        return mcm (b, a % b);
    }

void racional::simplificar() {
        int comun = mcm(numerador, denominador);
        numerador /= comun;
        denominador /= comun;
    }

racional::racional(int num = 0, int denom = 1)  {
        numerador=num;
        denominador=denom;
        simplificar();
    }

void racional::display()  {
        cout << numerador << "/" << denominador;
    }

void racional::operator+( racional otro) {
        numerador = numerador * otro.denominador + otro.numerador * denominador;
        denominador *= otro.denominador;
        simplificar();
    }

void racional::operator-( racional otro) {
        numerador = numerador * otro.denominador - otro.numerador * denominador;
        denominador *= otro.denominador;
        simplificar();
    }

void racional::operator++() {
        numerador += denominador;
        simplificar();
    }

void racional::operator--() {
        numerador -= denominador;
        simplificar();
    }

void racional::operator+=(int num) {
        numerador += num * denominador;
        simplificar();
    }

void racional::operator-=(int num) {
        numerador -= num * denominador;
        simplificar();
    }