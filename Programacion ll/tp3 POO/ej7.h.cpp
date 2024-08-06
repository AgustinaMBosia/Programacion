#include <iostream>
#include "ej7.h"
using namespace std;

    cuenta::cuenta( int numCuenta, double tasaInt){
        num=numCuenta;
        saldo=0;
        tasa= tasaInt;
    }


    void cuenta::deposito(double monto) {
        saldo += monto;
        cout << "Depósito de " << monto << " pesos hecho" << endl;
    }

    void cuenta::extraccion(double monto) {
        if (monto <= saldo) {
            saldo -= monto;
            cout << "se extrajeron " << monto << " pesos" << endl;
        } else {
            cout << "no tenes suficiente saldo" << endl;
        }
    }

    void cuenta::intereses() {
        double intereses = saldo * tasa / 100;
        saldo += intereses;
        cout << "se acreditaron (pesos): " << intereses << endl;
    }

    void cuenta::show(){
        cout<<"numero de cuenta: "<<num;
        cout<<"   tasa de int: "<<tasa;
        cout <<"   saldo: "<<saldo;
    }