#include <iostream>
#include "ej3.h"
using namespace std;


banco::banco(){
    nombre="";
}

codigo::codigo(){
            codig=0;
        }

    void codigo::setCodigo(int r){
            codig=r;
        }

    int codigo::getCodigo(){
            return codig;
        }


sucursal::sucursal(string nom, int num, string respo, int co){
            nombre=nom;
            numero=num;
            responsable=respo;
            cod.setCodigo(co);
        }

        string sucursal::getNombre(){
            return nombre;
        }
        string sucursal::getRespo(){
            return responsable;
        }
        int sucursal::getNum(){
            return numero;
        }
        int sucursal::getCodigo(){
            return cod.getCodigo();
        } 
