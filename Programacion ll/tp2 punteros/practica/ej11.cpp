/*Crear un programa que cargue una matriz de n*m elementos. Realizar una función que permita
determinar la fila y columna donde se encuentra el elemento menor de la matriz.*/

#include <iostream>

using namespace std;

void f1(int &a,int &b, int &n,int &m, int matrix [][100]){

    int menor = matrix[0][0];
    int filaMenor, columnaMenor;

    for (int i= 0 ; i<n; i++){
        for (int j=0; j<m; j++){
            if (matrix[i][j] < menor) {
                menor = matrix[i][j];
                a = i;
                b = j;
            }
        }
    }
}


int main(){
    int n,m;
    int matrix [n][m];

}