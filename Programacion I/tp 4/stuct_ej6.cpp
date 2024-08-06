#include <iostream>
#define tama 3
using namespace std;

struct direcc {
    string calle, localidad;
    int num;
};

struct empleado{
    direcc dire;
    int edad;
    string nombre;
    char sexo;
};

void carga (empleado m[]){
    
    for (int i = 0; i < tama; i++) {
        cout << "Ingrese el nombre del empleado" << i + 1  << ": " << endl;
        cin >> m[i].nombre;
        cout << "Ingrese la edad de este"  << endl;
        cin >> m[i].edad;
        cout << "Ingrese su sexo (M/F) " << endl;
        cin >> m[i].sexo;
        cout << "Ingrese su calle"  << endl;
        cin >> m[i].dire.calle;
        cout << "Ingrese su numero de casa"  << endl;
        cin >> m[i].dire.num;
        cout << "Ingrese su localidad"  << endl;
        cin >> m[i].dire.localidad;
    }

}

int main (){
    empleado m [10];

    carga(m);

}