#include <iostream>

using namespace std;

int hora,trabajado,total;

int main(){

    cout<<"calculadora de sueldo en base a valor x hora:"<<endl;
    cout <<"ingrese el valor x hora: ";
    cin>>hora;
    cout<<"ingrese la cantidad de horas trabajadas: ";
    cin >>trabajado;
    total=hora*trabajado;
    cout<<"el sueldo que le corresponde es de: "<<total;
}