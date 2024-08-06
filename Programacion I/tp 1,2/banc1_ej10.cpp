#include <iostream>

using namespace std;

int l1,l2,l3;
string respuesta="y";

int main(){

    // triangulos segun sus lados


    while (respuesta=="y"){

    cout << "ingrese los tres lados de un triangulo: "<<endl;
    cin>>l1;
    cin>>l2;
    cin>>l3;

    cout << "el triangulo es ";

    if (l1==l2 and l2!=l3 or l1==l3 and l3!=l2 or l2==l3 and l3!=l1){

        cout <<"isoceles"<<endl;
    }

    if (l1==l2 and l2==l3){
        cout<<"equilatero"<<endl;
    }

    if (l1!=l2 and l2!=l3){
        cout<<"escaleno"<<endl;

    }


    cout<<"lo quiere hacer de vuelta? (y/n)"<<endl;
    cin>>respuesta;
    }
}