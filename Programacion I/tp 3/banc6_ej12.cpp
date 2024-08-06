#include <iostream>
#define tama 12
using namespace std;

// hacer matriz 3 x 12

void carga(int matrix [][tama], int array [4], int arr [tama]){
    for (int i = 0; i<3 ; i++){
        for (int j = 0; j<tama; j++){
            cout << "ingrese la cantidad recaudada por la linea "<<i+1<<" conche #"<<j+1<<endl;
            cin >> matrix [i][j];
            array [0] += matrix [i][j]; 
            array[i+1] += matrix [i][j];
            arr [j] += matrix [i][j];
        }
    }
}

void show (int array[], int arr[]){

    for (int i = 1; i<4 ; i++){
        cout << "la linea "<<i<< " ha recaudado $"<< array [i]<<endl;
    }
    for (int i = 0; i<tama ; i++){
        cout << "el coche #"<< i+1 <<" ha recaudado $"<<arr[i]<<endl;
    }
    cout << "el total recaudado es de $"<<array[0]<<endl;

}


int main (){
    int matrix [3][tama];
    int array [4] = {0};
    int arr[tama] = {0};

    carga (matrix,array,arr);
    show (array,arr);
}



