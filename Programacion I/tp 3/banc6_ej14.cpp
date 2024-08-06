#include <iostream>
#define tama 12
using namespace std;

// 12X5

void carga(int matrix [][5], int array [4], int arr [5]){
    for (int i = 0; i<tama ; i++){
        for (int j = 0; j<5; j++){
            cout << "ingrese la cantidad recaudada en el mes nro "<<i+1<<" sucursal #"<<j+1<<endl;
            cin >> matrix [i][j];
            array [0] += matrix [i][j]; 
            array[i+1] += matrix [i][j];
            arr [j] += matrix [i][j];
        }
    }
}

void show (int array[], int arr[]){

    cout << "el total recaudado es de $"<<array[0]<<endl;

    for (int i = 1; i<tama +1 ; i++){
        cout << "en el mes #"<<i<< " se ha recaudado $"<< array [i]<<endl;
    }
    for (int i = 0; i<5 ; i++){
        cout << "la sucursal #"<< i+1 <<" ha recaudado $"<<arr[i]<<endl;
    }
    

}

int main(){
    int matrix [tama][5];
    int array [tama + 1] = {0};
    int arr[5] = {0};

    carga (matrix,array,arr);
    show (array,arr);
}