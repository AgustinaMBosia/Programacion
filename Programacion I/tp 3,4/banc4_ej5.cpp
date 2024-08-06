#include <iostream>
using namespace std;
int edad1,edad2;
string nom1,nom2;

string madre (int edad1,int edad2){
    string algo;
    if (edad1>edad2){
        algo="la madre de ";
    }
    else if (edad1==edad2){
        algo="igual en edad a ";
    }
    else {
        algo="la hija de ";
    }

    return algo;
}

int main(){

    cout<<"ingrese el nombre de la primera mujer: ";
    cin>>nom1;
    cout<<"ingrese el nombre de la segunda mujer: ";
    cin>>nom2;

    cout<<"ingrese la edad de "<<nom1<<":"<<endl;
    cin>>edad1;
    cout<<"ingrese la edad de "<<nom2<<":"<<endl;
    cin>>edad2;

    string resul=madre (edad1,edad2);

    cout<<nom1<<" es "<<resul<<nom2;
}