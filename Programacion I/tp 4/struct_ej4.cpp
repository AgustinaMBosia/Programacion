#include <iostream>
#define tama 3
using namespace std;

struct chiqui{
    string nombre, pais;
    int nacimiento [3];
};

struct cordo{
    string deporte;
    int medallas;
    chiqui datos;
};

void carga (cordo m[],int n){
    
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del concursante número " << i + 1 << ": " << endl;
        cin >> m[i].datos.nombre;
        cout << "ingrese el año de nacimiento: "<<endl;
        cin >> m[i].datos.nacimiento[2];
        cout << "ingrese el dia de nacimiento: "<<endl;
        cin >> m[i].datos.nacimiento[0];
        cout << "ingrese el numero del mes de nacimiento: "<<endl;
        cin >> m[i].datos.nacimiento[1];
        cout << "ingrese el país de origen: "<<endl;
        cin >> m[i].datos.pais;
        cout<< "en que deporte compite? "<<endl;
        cin >> m[i].deporte;
        cout << "cuantas medallas obtuvo?"<<endl;
        cin>> m[i].medallas;
    }

}

void bubbleSort(cordo m[],int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) { 
            if (m[j].medallas > m[j + 1].medallas) {
                swap(m[j], m[j + 1]);
            }
        }
    }
}

void print(cordo m[],int n){
    cout<< m[n-1].datos.nombre<< ", nacid@ el "<< m[n-1].datos.nacimiento[0] <<"/"<<m[n-1].datos.nacimiento[1] <<"/"<<m[n-1].datos.nacimiento[2] <<endl;
    cout << "representante del deporte "<<m[n-1].deporte<<" en "<<m[n-1].datos.pais<<endl;
    cout <<"ganó " <<m[n-1].medallas <<" medallas";
}

int main(){
    cordo m[100];
    int n;
    cout<< "cuantos participantes hay?";
    cin>> n;
    carga (m,n);
    bubbleSort (m,n);
    print (m,n);
}