#include <iostream>
#include "ej1.h"
using namespace std;

int main(){
    triangulo trian;
    trian.inicializarTrian();
    if (trian.esEquilatero()){
        cout<<"El triangulo es equilatero"<<endl;
    }else {
        cout<<trian.esMayor()<<endl;
    }
}
