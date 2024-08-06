#include <iostream>
using namespace std;

void carga(int n,int matrix [][10], int array []){
    for (int i = 0; i<n ; i++){
        for (int j = 0; j<n; j++){
            cout << "ingrese el elemento ["<<i+1<<"] ["<<j+1<<"]"<<endl;
            cin >> matrix [i][j];
            array [0] += matrix [i][j];
            array[i+1] += matrix [i][j];
        }
    }
}


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void showm (int array[], int n){

    cout << "[";
        for (int i =1 ; i<n+1 ; i++){
        cout <<array[i];
        if (i != n){
            cout<<", ";
        }
    }
    cout<< "]"<<endl;

    if ((array[0]%2) == 0){
        cout<<"la suma de los elementos del arreglo es par"<<endl;

        bubbleSort(array,n);

        cout << "[";
        for (int i =1 ; i<n+1 ; i++){
        cout <<array[n - (i-1)];
        if (i != n){
            cout<<", ";
        }
        }
        cout<< "]"<<endl;

    }
    else {
        cout << "la suma de los elementos del arreglo es impar"<<endl;
        bubbleSort(array,n);

        cout << "[";
        for (int i =1 ; i<n+1 ; i++){
        cout <<array[i];
        if (i != n){
            cout<<", ";
        }
        }
        cout<< "]"<<endl;
    }


}

int main (){
    int n;
    cout << "ingrese la cantidad n de filas y columnas (máximo 10)"<<endl;
    cin>> n;
    int array[n+1] = {0};
    int matrix[n][10];

    carga(n,matrix,array);
    showm(array,n);
}