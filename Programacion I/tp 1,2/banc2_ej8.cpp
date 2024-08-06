#include <iostream>

using namespace std;

int num,d1,d2,d3,d4;

int main (){

    //ingrese un numero de 4 digitos, de izq a derecha rellenar de ceros 


    cout <<"ingrese un número de 4 dígitos"<<endl;
    cin>>num;

    while (num<-9999 or num>9999){
        cout<<"ingresar un numero de 4 cifras:"<<endl;
        cin>>num;
    }

    if (num<0){
        num=num*-1;
    }

    d4 = num % 10;
    d3 = (num / 10) % 10;
    d2 = (num / 100) % 10;
    d1 = (num / 1000) % 10;

    cout<<"los dígitos de este número son:"<<endl;
    cout<<" d1="<<d1<<" d2="<<d2<<" d3="<<d3<<" d4="<<d4<<endl;



}