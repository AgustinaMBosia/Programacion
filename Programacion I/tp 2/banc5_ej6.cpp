#include <iostream>

using namespace std;

//Desarrolle un programa que reciba como parámetros cinco números enteros, los
//almacene en un arreglo y calcule la media aritmética de esos números. Imprimir el
//arreglo y la media.

void carga (int x[], int tam){
    for (int i = 0; i<tam ; i++){
        cout << "ingrese el numero entero nro "<< i+1 << ":"<<endl;
        cin >> x[i];
    }
}


void imprime (int x [], int tam){

    for (int i = 0; i<tam; i++){
        cout << x[i] << endl;
    }

}

int suma (int x[],int tam){

    int sum = 0;

    for (int i = 0 ; i<tam ; i++ ){

        sum = sum + x[i];
    }

    return sum;
}

int media (int res,int tam){
    res = res / tam;

    return res;
}




int main(){
    int tam = 5;
    int x [tam];
    int res, resu;

    carga (x,tam);
    imprime (x, tam);
    res = suma (x, tam);
    resu =media (res,tam);

    cout << resu;
    

    return 0;

}
