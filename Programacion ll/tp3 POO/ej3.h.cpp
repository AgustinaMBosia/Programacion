#include <iostream>
#include "ej3.h"
using namespace std;

    complejo::complejo(double r, double i){
        real=r;
         
         imag= i;
    }

    void complejo::show()  {
        cout << real;
        if (imag >= 0){
            cout << " + " << imag << "i";
        } 
        else{
            cout << " - " << -imag << "i";
        }
    }

    void complejo::operator+( complejo otro) {
        real += otro.real;
        imag += otro.imag;
    }

    void complejo::operator-( complejo otro) {
        real -= otro.real;
        imag -= otro.imag;
    }

    void complejo::operator*( complejo otro) {
        double temp_real = real * otro.real - imag * otro.imag;
        imag = real * otro.imag + imag * otro.real;
        real = temp_real;
    }

    void complejo::cunjugado() 
    {
        imag = -imag;
    }