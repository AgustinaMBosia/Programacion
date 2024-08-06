#include<iostream>
using namespace std;
class triangulo {
private:
    double lado1;
    double lado2;
    double lado3;
public:
    void inicializarTrian();
    bool esEquilatero();
    double esMayor();
};

void triangulo::inicializarTrian(){
    cout<<"Ingrese el lado 1"<<endl;
    cin>>lado1;
    cout<<"Ingrese el lado 2"<<endl;
    cin>>lado2;
    cout<<"Ingrese el lado 3"<<endl;
    cin>>lado3;
}

bool triangulo::esEquilatero(){
    if (lado1==lado2&&lado2==lado3){
        return true;
    } else{
        return false;
    }
}

double triangulo::esMayor(){
    double mayor = lado1;
    if (lado2 > mayor) mayor = lado2;
    if (lado3 > mayor) mayor = lado3;
    return mayor;
}