#include <iostream>
using namespace std;

void carga(int matrix [2][2]){
    for (int i = 0; i<2 ; i++){
        for (int j = 0; j<2; j++){
            cout << "ingrese el elemento ["<<i+1<<"]["<<j+1<<"] de la matriz:"<<endl;
            cin >> matrix [i][j];
        }
    }
}

int determinante (int matrix [2][2]){
    int resul = matrix [0][0] * matrix [1][1] + matrix [1][0] * matrix [0][1];
    return resul;
}

int main(){
    cout<< "Cálculo de determinante de una matriz 2x2"<<endl;

    int matrix[2][2];

    carga (matrix);
    int resultado = determinante (matrix);

    cout << "el determinante de esta matriz es: "<<resultado;

}