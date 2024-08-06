/*Una permutación es una secuencia que contiene cada elemento de 1 a N una vez, y solo 
una vez. Suponiendo que se ingresa un arreglo unidimensional de tamaño N, determinar 
mediante una función si dicho arreglo representa o no una permutación. 
El programa debe solicitar el tamaño del arreglo, a continuación, sus elementos e invocar 
una función de retorno boolean que devuelva true en caso de tratarse de una 
permutación o false en caso contrario. */

#include <iostream>
using namespace std;

void carga(int &a, float x[]){
    cout << "ingrese el tamaño del arreglo"<<endl;
    cin >> a;

    for (int i=0; i<a; i++){
        cout << "ingrese el espacio nro "<<i+1<<":"<<endl;
        cin >> x[i];
    }
    
}

bool read(int a, float x[]){

    for (int i=1; i<a+1;i++){

        int num=0;

        for(int j=0; j<a; j++){
            
            if (x[j]==i){
                num++;
                if (num==2){
                    return false;
                }
                
            }

        }

        if(num==0){
            return false;
        }
    }

    return true;

}

void muestra(int a,float x[]){
    if(read(a,x)){
        cout<<"es una permutacion";
    }
    else{
        cout<< "no es una permutacion";
    }
}

int main(){

    float x[100]={0};
    int a=0;

    carga(a,x);
    muestra(a,x);

}