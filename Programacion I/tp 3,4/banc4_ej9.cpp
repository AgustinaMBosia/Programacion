#include <iostream>

using namespace std;

int num;
bool rta;

bool Capicua(int num) {
    int revés = 0;
    int fuente = num;

    while (num > 0) {
        int cifra = num % 10;
        revés = revés * 10 + cifra;
        num = num/10;
    }

    if ( revés == fuente){
        rta = true;
    }
    else {
        rta = false;
    }
    
    return rta;
    
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (Capicua(num)) {
        cout << "Es capicúa" << endl;
    } else {
        cout << "No es  capicúa" << endl;
    }

    return 0;
}




