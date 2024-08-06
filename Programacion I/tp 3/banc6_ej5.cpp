#include <iostream>
#include <algorithm>

using namespace std;

struct hijos {
    int edad;
    string nombre;
};

void carga(hijos hijo [5]){

    cout << "HIJOS DE JUAN"<< endl;

    for (int i = 0; i < 5 ; i++){
        cout << "ingrese el nombre del hijo nro "<< i+1 <<": "<<endl;
        cin >> hijo[i].nombre;
        cout << "ingrese la edad del mismo: "<<endl;
        cin >> hijo[i].edad;
    }

}

bool compararPorNombre(const hijos a, const hijos b) {
    return a.nombre < b.nombre;
}

void sorting(hijos hijo[5]) {
    sort(hijo, hijo + 5, compararPorNombre);
}

void show (hijos hijos [5]){

    cout << "el orden alfabetico de hijos es: "<<endl;

    for (int i = 0; i<5 ; i++){

        int pun =(hijos[i].edad);

        cout << "** "<< hijos[i].nombre<< " edad: "<<pun<<endl; 

    }
}

int main (){

    hijos hijo [5];

    carga (hijo);

    sorting (hijo);

    show (hijo);


}