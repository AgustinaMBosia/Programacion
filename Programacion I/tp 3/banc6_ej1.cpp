#include <iostream>
using namespace std;

struct empleado{
    string nombre;
    int numero;
};

void carga(empleado m[]) {
    for (int i = 0; i < 5; i++) {
        cout << "Cual es el nombre del empleado nro " << i + 1 << "?" << endl;
        cin >> m[i].nombre;
        cout << "Y cual es su número de empleado?" << endl;
        cin >> m[i].numero;
    }
}

string BuscarEmpleado(empleado m[], int num) {
    for (int i = 0; i < 5; i++) {
        if (num == m[i].numero) {
            return m[i].nombre;
        }
    }
    return "No hay empleados registrados con ese código";
}

int main() {
    int num;

    cout << "Carga de nombres y código de empleado:" << endl;

    empleado m[5];

    carga(m); 

    cout << "Ingrese un número de empleado: " << endl;
    cin >> num;

    string nombre = BuscarEmpleado(m, num);

    cout << "El empleado encontrado es: " << nombre << endl;
}
