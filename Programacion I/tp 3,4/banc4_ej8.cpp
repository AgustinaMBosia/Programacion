#include <iostream>
#include <cmath>

using namespace std;
int num;

int invertido (int& n){
    
    int inver=0;

    while (n > 0) {
        int digito= n%10;
        inver= inver*10+digito;
        n= n/10;
    }

    return inver;
}

int main(){
    cout<<"ingresar un numero entero positivo:"<<endl;
    cin>>num;

    while (num<=0){
         cout<<"no es positivo, ingrese de vuelta:";
          cin>>num;
    }

    int resul=invertido(num);

    cout<<"el numero invertido es: "<<resul;


}