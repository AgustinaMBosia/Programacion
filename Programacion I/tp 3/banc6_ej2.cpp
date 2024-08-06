#include <iostream>
#include <string>
using namespace std;

#define tama 5

struct mayo {
    string nombre;
    int edad;
};

void carga (mayo m[]){
    for (int i = 0; i < tama; i++) {
        cout << "Cual es el nombre nro " << i + 1 << "?" << endl;
        cin >> m[i].nombre;
        cout << "Y cual es su edad?" << endl;
        cin >> m[i].edad;
    }
}


void print(mayo m[]) {
    cout << "Las personas de 18, 20 o 22 años son:" << endl;
    bool flag = false;

    for (int i = 0; i < tama; i++) {

        if (m[i].edad == 18 || m[i].edad == 20 || m[i].edad == 22){
            cout << m[i].nombre << endl;
            flag = true;
    }
    }
    
    if (flag != true){
        cout << "0, No hay personas de 18, 20 o 22 años." << endl;
    }
}

int main() {

    mayo m[tama];

    carga(m);
    print (m);
    
    

    return 0;
}