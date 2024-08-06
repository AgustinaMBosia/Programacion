/*Crea una clase llamada Cuenta que tendrá los siguientes atributos: titular y cantidad
(puede tener decimales).
El titular será obligatorio y la cantidad es opcional. Crea dos constructores que cumplan con
la restricción planteada.
Crear los métodos get, set.
Tendrá dos métodos especiales:
● ingresar(double cantidad): se ingresa una cantidad a la cuenta, si la cantidad
introducida es negativa, no se hará nada.
● retirar(double cantidad): se retira una cantidad a la cuenta, si restando la cantidad
actual a la que nos pasan es negativa, la cantidad de la cuenta pasa a ser 0.
*/

#include <iostream>
//#include <string>
using namespace std;

class cuenta{
    private:
        string titular;
        double cantidad;
        double pone;
        double resta;


    public:

        cuenta(string t);
        void setTitular(string t);
        void setCantidad(double c);
        double getCantidad();
        string getTitular();

        void ingresar(double s);
        void retirar(double r);

        ~cuenta();

};

cuenta::cuenta(string t){
    titular=t;
    /*
    cantidad=c;
    pone=s;
    resta=r;*/

}
/*
void cuenta::setTitular(string t){
    titular=t;
}
*/


void cuenta::setCantidad(double c){
    cantidad=c;
}

void cuenta::ingresar( double s){
    cantidad=cantidad + s;
}

void cuenta::retirar(double r){
    cantidad =cantidad - r;
    if (cantidad<0){
        cantidad=0;
    }
}


string cuenta::getTitular(){
    return titular;
}

double cuenta::getCantidad(){
    return cantidad;
}


