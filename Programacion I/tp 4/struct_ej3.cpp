#include <iostream>
#define tama 3
using namespace std;


struct survey{
    int punto [10];
    string nombre;
    int total = 0;

};

void carga (survey m[]){
    
    for (int i = 0; i < tama; i++) {
        cout << "Ingrese el nombre del concursante número " << i + 1 << ": " << endl;
        cin >> m[i].nombre;
        for (int j = 0; j<10 ; j++){
            cout << "ingrese el puntaje obtenido en la prueba nro " << j+1 << endl;
            cin >> m[i].punto[j];
            m[i].total += m[i].punto[j];
        }

    }

}

void bubbleSort(survey m[]) {
    for (int i = 0; i < tama - 1; i++) {
        for (int j = 0; j < tama - 1 - i; j++) { 
            if (m[j].total > m[j + 1].total) {
                swap(m[j], m[j + 1]);
            }
        }
    }
}


int main (){
    survey m [tama];
    carga(m);
    bubbleSort(m);

    cout << "the winner is "<<m[tama-1].nombre;
}