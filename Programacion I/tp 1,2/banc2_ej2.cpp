#include <iostream>
#include <cmath>

using namespace std;

int rad,per;

int main (){


    rad=1;

    cout<<"se dará el valor del perimetro de una circunferencia"<<endl;

    while (rad!=0){

    
    cout<<"ingrese el valor del radio:";
    cin>>rad;

    while (rad<0){

        cout<< "error, ingresar numero mayor a 0:"<<endl;
        cin>>rad;
    }

    per=rad*2*M_PI;
    cout <<"el valor del perímetro es: "<<per<<endl;


    if (rad!=0){
    cout << "para finalizar el programa, ingresar un radio de 0"<<endl;
    }
    }
}