#include <iostream>
#define tama 3
using namespace std;

struct equipo{
    string nombre;
    int realizados;
    int recibidos;
};

void carga(equipo equi []){

    for (int i = 0; i < tama ; i++){
        cout << "ingrese el nombre del equipo nro "<< i+1 <<": "<<endl;
        cin >> equi[i].nombre;
        cout << "ingrese los goles realizados por el mismo "<<endl;
        cin >> equi[i].realizados;
        cout << "ingrese los goles recibidos por el mismo "<<endl;
        cin >> equi[i].recibidos;
    }

}

void show (equipo equi []){

    cout << "equipos con mas goles realizados que recibidos: "<<endl;

    for (int i = 0; i<tama ; i++){

        if (equi[i].realizados > equi[i].recibidos){
            cout << "** "<< equi[i].nombre<< endl; 
            cout << "realizó "<< equi[i].realizados<<" goles"<<endl;
            cout << "recibió "<< equi[i].recibidos<<" goles"<<endl;
        }
    }
}

int main(){
    equipo equi [tama];
    carga (equi);
    show (equi);
}
