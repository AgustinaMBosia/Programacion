#include <iostream>
#include "ej6.h"
using namespace std;

int main() {
    password pass1(10);
    pass1.generarPassword();
    cout << "password 1:" << endl;
    pass1.mostrar();
    cout << "Es fuerte: ";
    if (pass1.esFuerte()>5){
        cout<<"si"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    password pass2;
    pass2.generarPassword();
    cout << "password 2:" << endl;
    pass2.mostrar();
    cout << "Es fuerte: " ;
    if (pass2.esFuerte()>5){
        cout<<"si"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}