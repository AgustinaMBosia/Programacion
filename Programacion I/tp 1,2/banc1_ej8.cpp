#include <iostream>

using namespace std;

int año,dia,mes,edad;
string nombre,apell;

int main(){

    cout<<"ingrese su nombre"<<endl;
    cin>>nombre;

    cout<<"ingrese su apellido"<<endl;
    cin>>apell;

    cout << "su nombre es: "<<nombre<<" "<< apell<<endl;

    cout<< "ingrese el numero de dia, mes y año de su nacimiento"<<endl;

    cin>>dia>>mes>>año;

    if (dia>31 or dia<=0){
        cout<<"ingresate un dia válido kpo"<<endl;
        cin>>dia;
    }
    if (mes>12 or mes<=0){
        cout<<"ingresate un mes valido pro";
        cin>>mes;

    }
    if (año>2023){
        cout<<"what? ingresate un año valido"<<endl;
        cin>>año;

    }

    edad=2023-año-1;

    if (mes<8){
        edad=edad+1;
    }
    if (mes==8){
        if (dia<=8){
            edad=edad+1;
        }
    }

    cout<<"su edad es: "<< edad<<endl;
    ;

    if (edad<18){
        cout<<"usted es menor de edad, puede acceder al beneficio";
    }
    if (edad>=18){
        cout<<"usted es mayor de edad, no puede scceder al beneficio";
    }

}