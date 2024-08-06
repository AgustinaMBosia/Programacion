
#include <iostream>
#include "ej9.h"

using namespace std;

    arregloE::arregloE(int size)  {
        tamano=size;
        arreglo = new int[tamano];
    }

    arregloE::~arregloE() {
        delete[] arreglo;
    }

    int arregloE::getTamano()  {
        return tamano;
    }

    int& arregloE::operator[](int index) {
        return arreglo[index];
    }

    void arregloE::operator+(arregloE& otro)  {
        if (tamano != otro.tamano) {
            cout << "diferente tamaño!" << endl;
            exit;
        }

        for (int i = 0; i < tamano; ++i) {
            arreglo[i] = arreglo[i] + otro.arreglo[i];
        }
    }

    void arregloE::operator-(arregloE& otro)  {
        if (tamano != otro.tamano) {
            cout << "diferente tamaño!" << endl;
            exit;
        }

        for (int i = 0; i < tamano; ++i) {
            arreglo[i] = arreglo[i] - otro.arreglo[i];
        }
    }


    int arregloE::operator*( arregloE& otro )  {
        if (tamano != otro.tamano) {
            cout << "diferente tamaño! " << endl;
            exit;
        }

        int resul;

        for (int i = 0; i < tamano; ++i) {
            resul += arreglo[i] * otro.arreglo[i];
        }
        return resul;
    }