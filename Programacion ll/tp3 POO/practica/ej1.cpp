#include <iostream>
#include "ej1.h"
using namespace std;


int main(){
    string t;
    double c;
    string algo;


    cout<<"introduce el nombre del titular de la cuenta"<<endl;
    getline(cin,t);

    cout<<"quiere introducir la cantidad? (y/n)"<<endl;
    cin>>algo;
    if(algo=="y"){
        cout<<"ingrese la cantidad: ";
        cin>>c;
    }
    else{
        c=0;
    }

    cuenta C(t);

    C.setCantidad(c);

    
    string y= C.getTitular();


    cout<<"Quiere ingresar? (y/n)"<<endl;
    cin>>algo;
    if(algo=="y"){
        cout<<"ingrese la cantidad a ingresar: ";
        cin>>c;
        C.ingresar(c);
    }
    else{
        cout<<"Quiere retirar? (y/n)"<<endl;
        cin>>algo;
        if(algo=="y"){
            cout<<"ingrese la cantidad a retirar: ";
            cin>>c;
            C.retirar(c);
            
        }
        else{
            return 0;
        }
    }

    double x= C.getCantidad();

    

    cout<<"el nuevo total de la cuenta de "<< y<<" es: "<<x;


}