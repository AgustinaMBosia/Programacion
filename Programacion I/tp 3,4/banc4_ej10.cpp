#include <iostream>

using namespace std;

int num,cifra,cuenta;

int capicua(int& num){

    while (num>0){
    cifra=num%10;
    num=num/10;
    cuenta=cuenta+cifra;
    }

    return cuenta;
}

int main(){

    cout<<"ingrese un número entero positivo(si no es entero, se eliminará todo numero dsp de la coma):"<<endl;
    cin>>num;

    while (num<=0){
        cout <<"ingrese un numero mayor a 0:"<<endl;
        cin>>num;
    }

    int resul=capicua(num);

    cout<<"la suma de los dígitos del número ingresado es "<<resul;
    
}