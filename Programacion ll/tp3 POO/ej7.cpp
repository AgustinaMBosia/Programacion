#include <iostream>
#include "ej7.h"
using namespace std;

int main() {

    cout << "Datos de la cuenta 1:" << endl;
    float numCuenta, tasaInt;
    cin>>numCuenta;
    cin>>tasaInt;
    cuenta cuenta1(numCuenta, tasaInt);
    cout << endl;

    cout << "Datos de la cuenta 2:" << endl;
    float numCuenta1, tasaInt1;
    cin>>numCuenta1;
    cin>>tasaInt1;
    cuenta cuenta2(numCuenta1, tasaInt1);
    cout << endl;

    cuenta1.deposito(1000);
    cuenta2.deposito(1500);

    cuenta1.extraccion(200);
    cuenta2.extraccion(2000);

    cuenta1.intereses();
    cuenta2.intereses();

    cout << "Datos actualizados de la cuenta 1:" << endl;
    cuenta1.show();
    cout << endl;

    cout << "Datos actualizados de la cuenta 2:" << endl;
    cuenta2.show();
    cout << endl;

    return 0;
}