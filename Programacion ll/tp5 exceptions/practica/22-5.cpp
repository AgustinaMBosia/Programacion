#include <iostream>
#include "22-5.h"
using namespace std;

int main(){
    tridim algo(1,2,3,4);

    figura *puntero=nullptr;

    cout<<"calcular el area de: "<<endl;
    cout<<"1) Cuadrado"<<endl;
    cout<<"2) Triángulo"<<endl;
    cout<<"3) Cubo"<<endl;
    cout<<"4) Cilindro"<<endl;

    int ans;
    cin>>ans;

    switch (ans) {
    case 1:
        puntero = new figura(2, 1, 1);
        cout << "Área del cuadrado: " << puntero->area(1) << endl;
        break;

    case 2:
        puntero = new figura(3, 4, 1);
        cout << "Área del triángulo: " << puntero->area(2) << endl;
        break;

    case 3:
        puntero = new tridim(2, 3, 4, 1);
        cout << "Área del cubo: " << puntero->area(1) << endl;
        break;

    case 4:
        puntero = new tridim(2, 1, 1, 3);
        cout << "Área del cilindro: " << puntero->area(2) << endl;
        break;

    default:
        cout << "Valor no está entre los valores permitidos" << endl;
        break;
    }

    delete puntero;

}