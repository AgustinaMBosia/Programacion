#include <iostream>

using namespace std;

float cant,precio,desc;

float monto(float cant, float precio, float desc){
    float pretotal= cant*precio;

    float descuento=(desc*pretotal)/100;

    float total=pretotal-descuento;

    return total;
}

int main(){

    cout<<"ingrese la cantidad de cierto ítem:"<<endl;
    cin>>cant;

    cout<<"ingrese el precio de este ítem:"<<endl;
    cout<<"$";
    cin>>precio;

    cout<<"ingrese el porcenteje de descuento, si es que lo tiene: "<<endl;
    cin>>desc;

    float montito=monto(cant,precio,desc);

    cout<<"el total es de: $"<<montito;
    return 0;
}