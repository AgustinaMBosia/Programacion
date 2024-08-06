#include <iostream>
#include <string>
using namespace std;

#define tama 3

int edad;

struct maria {
    string nombre;
    int edad;
};

void carga( maria m[]) {
    for (int i = 0; i < tama; i++) {
        cout << "Cual es el nombre nro " << i + 1 << "?" << endl;
        cin >> m[i].nombre;
        cout << "Y cual es su edad?" << endl;
        cin >> m[i].edad;
    }
}

int comparar (maria m [], string nombre){
    
    edad = 0;

    for (int i=0; i<tama;i++){

        if (m [i].nombre == nombre){
            edad = m[i].edad;
            return edad;
        }
        

    }

    return edad;
}

void resultado (int edad, string nombre){

    if (edad!=0){
        cout << "La edad de"<< nombre <<" es "<< edad << " años" <<endl;
    }

    else {
        cout << "no se ha encontrado nadie llamado"<< nombre <<endl;
    }
}


int main (){

    maria m [tama];

    carga (m);

    string nombre;
     
    cout << "ingrese el nombre a buscar: "<<endl; 

    cin >> nombre;

    edad = comparar (m, nombre);


    resultado (edad, nombre);

    return 0;
    
}