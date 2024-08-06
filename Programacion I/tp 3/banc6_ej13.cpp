#include <iostream>
using namespace std;

void carga (int num1, int num2, int matrix [][10]){
        for (int i = 0; i<num1 ; i++){
        for (int j = 0; j<num2; j++){
            cout << "ingrese lel espacio ["<<i<<"] ["<<j<<"]"<<endl;
            cin >> matrix [i][j];
        }
    }
}

int suma (int num1 ,int num3, int num4,int matrix[][10]){
    int arriba = 0;
    int abajo = 0;
    for (int i = num4 - 1; i<num4 +2; i++){
        
        if (num3 != 0 ){
            arriba += matrix [num3 -1][i]; 
        }
        if(num3 != num1) {
            abajo += matrix [num3+1][i];
        }
        
    }
    int sum = arriba + abajo ;
    if(num4 != 0){
        sum=+ matrix [num3][num4-1] ;
    }
    if (num4 != 10){
        sum+= matrix [num3][num4+1];
    }
    
    return sum;
}

int main (){
    int num1,num2,num3,num4;
    cout <<"ingrese la cantidad de filas de la matriz ";
    cin >> num1;
    cout <<"ingrese la cantidad de columnas de la matriz (máximo 10)";
    cin >> num2;

    int matrix[num1][10];

    carga (num1,num2,matrix);

    cout << "se realizara la suma de los espacios adyacentes a que posición? "<<endl;
    cout << "fila: ";
    cin >> num3;
    cout << "columna: ";
    cin >> num4;

    int numero = suma(num1,num3,num4,matrix);

    cout << "el número resultante es: "<<numero;
}