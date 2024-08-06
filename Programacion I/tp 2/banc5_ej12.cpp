#include <iostream>

using namespace std;


void reducir_burbuja(int x[], int num) {

    for (int i = 0; i < num - 1; i++) {

        for (int j = 0; j < num - i - 1; j++) {

            if (x[j] < x[j + 1]) {

                int temp = x[j];
                x[j] =  x[j+1];
                x[j + 1] = temp;

            }
        }
    }
}


void cargarp(int x[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el numero nro " << i + 1 << " del vector: ";
        cin >> x[i];
    }
}


void mostrar (int x[], int num){
    cout << "vector ordenado: "<< endl;
    for ( int i = 0; i<num; i++){
        cout << x[i] << " " ;
    }
}


int main(){

    int num;

    cout << "ingrese el cuantos numeros tiene el vector" << endl;
    cin >> num;

    int x[num];


    cargarp (x,num);

    reducir_burbuja(x,num);

    mostrar (x,num);




}