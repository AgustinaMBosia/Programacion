#include <iostream>
using namespace std;

int nota,cuenta,promedio ;

int main(){

    cout<<"promedio de 4 parciales:"<<endl;

    for (int i=1;i<=4;i++){

        cuenta=nota;
        cout<< "ingrese la nota del parcial "<<i<<":"<<endl;
        cin >>nota;
        nota=nota+cuenta;
    }

    promedio=nota/4;
    cout<< "el promedio es de: "<<promedio;
}