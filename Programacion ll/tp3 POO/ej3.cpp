#include <iostream>
using namespace std;
#include "ej3.h"


int main() {
    complejo a(3, 2);
    complejo b(1, -1);

    a + b;

    cout << "a + b = ";
    a.show();
    cout << endl;

    a -b;
    b - a;
   

    cout << "b-a = ";
    b.show();
    cout << endl;
    b+a;
    
     a * b;

    cout << "a * b = ";
    a.show();
    cout << endl;

    cout<<"conjugado de a: ";
    a.cunjugado();
    a.show();

    return 0;
}