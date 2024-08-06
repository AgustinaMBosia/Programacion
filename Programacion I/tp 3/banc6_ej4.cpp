#include <iostream>
#include <string>

using namespace std;

#define tama 4

struct pacientes{
    string nombre;
    int edad,previas;
};

void carga(pacientes m[]) {
    for (int i = 0; i < tama; i++) {
        cout << "Cual es el nombre nro " << i + 1 << "?" << endl;
        cin >> m[i].nombre;
        cout << "Y cual es su edad?" << endl;
        cin >> m[i].edad;
        cout << "Cuales visitas previas tiene?" << endl;
        cin >> m[i].previas;
    }
}

void bubbleSort(pacientes arr[]) {
    for (int i = 0; i < tama - 1; i++) {
        for (int j = 0; j < tama - 1 - i; j++) { 
            if (arr[j].edad > arr[j + 1].edad) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printOldestPatients( pacientes m[] ) {
    cout << "Los 3 pacientes más longevos son:" << endl;

    for (int i = tama - 1; i >= tama - 3; i--) {
        cout << "Nombre: " << m[i].nombre << endl;
        cout << "Edad: " << m[i].edad << endl;
        cout << endl;
    }
}

int contar(pacientes m[]) {
    int visitas;
    int cuenta = 0;

    for (int i = 0; i < tama; i++) {

        if ( m[i].previas >= 4) {
            cuenta = cuenta + 1;
        }
    }

    return cuenta;
}

int main() {

    int edades[tama];

    pacientes m[tama];

    carga(m);

    int paspas = contar(m);

    bubbleSort(m);

    cout << "Cantidad de pacientes con más de 4 visitas previas: " << paspas << endl;

    if (tama >= 3) {
        printOldestPatients(m);
    } else {
        cout << "No hay suficientes pacientes para mostrar a los más longevos." << endl;
    }

    cout << "Paciente más joven: " << m[0].nombre << endl;

    return 0;

}