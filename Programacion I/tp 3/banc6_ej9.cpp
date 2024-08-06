#include <iostream>
using namespace std;

void carga(int n,int matrix [][100]){
    for (int i = 0; i<n ; i++){
        for (int j = 0; j<n; j++){
            cout << "ingrese el elemento ["<<i+1<<"]["<<j+1<<"] de la matriz:"<<endl;
            cin >> matrix [i][j];
        }
    }
}

int supe (int n,int matrix [][100]){
    //suma de valores superiores a la diagonal principal

    int superior = 0;

    for (int i = 0; i<n ; i++){
        for (int j = 0; j<n; j++){
            if (i!= j and i<j){
                superior = superior + matrix[i][j];
            }
        }
    }

    return superior;
}

int infe (int n,int matrix [][100]){
    //suma de los valores inferiores a la diagonal principal

    int inferior = 0;

    for (int i = 0; i<n ; i++){
        for (int j = 0; j<n; j++){
            if (i!= j and i>j){
                inferior = inferior + matrix[i][j];
            }
        }
    }

    return inferior;
}

void show (int superiores, int inferiores){

    cout << "el resultado de la resta superiores a la diagonal - inferiores a la diagonal es:"<< superiores - inferiores << endl;

}

int main(){
    int n;

    cout << "ingrese el valor n de la matriz cuadrada nxn (menor a 100)"<<endl;
    cin>> n;

    int matrix[n][100];

    carga (n,matrix);

    int resultado = supe (n,matrix);
    int res = infe (n,matrix);

    show (resultado, res);

}