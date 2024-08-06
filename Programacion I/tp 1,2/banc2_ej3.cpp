#include <iostream>

using namespace std;

int num1,num2,suma;

int main(){

    //ingresar dos numeros por teclado
    //sumarlos y cambiar el signo de numeros negativos

    cout<<"ingresar dos numeros por teclado"<<endl;
    cin>>num1;
    cin>>num2;


    if (num1<0 or num2<0){
        cout<<"se ha ingresado un número negativo, se le cambiará el signo para la suma"<<endl;
    }

    while (num1<=0){
        num1=num1*-1;
    }

    while (num2<=0){
        num2=num2*-1;
    }

    suma=num1+num2;

    cout<<"la suma de estos dos números es: "<<suma;

}