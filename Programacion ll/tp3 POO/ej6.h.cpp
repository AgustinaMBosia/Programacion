#include <iostream>
#include "ej6.h"
using namespace std;

    password::password(int len) {
        longitud=len;
        contra="";
    }

    password::password() {
        longitud=8;
        contra="";
    }

    void password::generarPassword() {
        contra = "";
        for (int i = 0; i < longitud; ++i) {
            int tipoCaracter = rand() % 3;
            char caracter;

            if (tipoCaracter == 0) 
            {
                caracter = rand() % 10 + '0';
            } else if (tipoCaracter == 1) 
            {
                caracter = rand() % 26 + 'A';
            } else {
                caracter = rand() % 26 + 'a';
            }

            contra += caracter;
        }
        
    }

    int password::esFuerte() 
    {
        int numeros = 0;
        for (char c : contra) {
            if (c==0 or c==1 or c==3 or c==4 or c==5 or c==6 or c==7 or c==8 or c==9) {
                numeros++;
            }
        }

        return numeros;
    }

    void password::mostrar(){
        cout << contra << endl;
        cout << "longitud: " << longitud << endl;
    }