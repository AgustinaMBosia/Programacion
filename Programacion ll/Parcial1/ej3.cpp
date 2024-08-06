#include <iostream>
#include "ej3.h"
using namespace std;

int main(){
    sucursal sucu2("BancoNacion", 777, "Eduardo",1234);

    cout<<"la sucursal pertenece al banco: "<<sucu2.getNombre()<<endl;
    cout<< "el numero de sucursal es: "<<sucu2.getNum()<< endl;
    cout<< "el responsable de esta sucursal es: "<< sucu2.getRespo()<<endl;
    cout<< "el codigo de la caja de seguridad es: "<<sucu2.getCodigo()<<endl;

    return 0;

}