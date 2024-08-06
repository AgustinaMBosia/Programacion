#include <iostream>
#define tama 20
using namespace std;

void carga(int matrix [][6]){
    for (int i = 0; i<tama ; i++){
        for (int j = 0; j<6; j++){
            cout << "ingrese la cantidad de personas del piso "<<i+1<<" depto. #"<<j+1<<" del edificio:"<<endl;
            cin >> matrix [i][j];
        }
    }
}

void cuenta (int matrix [][6], float array [], float arr[]){
    for (int i = 0; i<tama ; i++){
        for (int j = 0 ; j<6 ; j++){
            array[i] += matrix[i][j] ; 
            arr [0] += matrix [i][j] ;
        }
        array [i] = array[i] / 6;
    }

    arr [1] = arr[0] / (tama * 6);
}

void show (float array [], float arr []){
    if (arr[1]== 1){

        cout << "en promedio, se aloja "<< arr[1]<< " personas en cada depto."<<endl;
    }
    else {
        cout << "en promedio, se alojan "<< arr[1]<< " personas en cada depto."<<endl;
    }
    
    cout << "en total, hay "<< arr[0]<< " personas en este edificio"<<endl;

    for (int i = 0 ; i<tama; i++){
        cout << "la cantidad promedio en el piso "<< i+1 << " es de: "<<array [i]<<" personas"<<endl;
    }
    
}

int main (){
    int matrix [tama][6];
    float array [tama];
    float arr [2];

    carga(matrix);
    cuenta(matrix,array,arr);
    show(array,arr);
}
