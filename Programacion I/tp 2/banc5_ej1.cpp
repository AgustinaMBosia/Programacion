#include <iostream>

using namespace std;

void carga (double x[5]){
    for (int i=0; i<5 ; i++){
        cout << "ingrese el nro "<< i+1 << ": "<<endl;
        cin >> x[i];
    }

}
void carga1 (double n[5]){
    for (int i=0; i<5 ; i++){
        cout << "ingrese el nro "<< i+1 << ": "<<endl;
        cin >> n[i];
    }

}

void mostrar (double x[5]){
    for (int i=0; i<5 ; i++){
        cout << x[i] << endl;
    }

}

void mostrar1 (double n[5]){
    for (int i=0; i<5 ; i++){
        cout << n[i] << endl;
    }

}


int main (){
    double x[5];
    double n[5];

    carga1 (x);
    
    mostrar1 (x);

    carga (n);
    
    mostrar (n); 

    return 0;
    
}