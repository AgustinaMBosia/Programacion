#include <iostream>
#include <cmath>

using namespace std;

int num, resto;


int main(){
    //determinar sin un numero es par o impar 

    cout<<"ingrese un número para saber si este es par o impar distinto a 0:"<<endl;

    cin>>num;
    
    while (num==0){
        cout << "ingresar un número distinto a cero:"<<endl;
        cin>>num;
    }

    resto=num%2;


    if (resto==1){
        cout<<"el numero "<<num<<" es impar";
    }
    else {
      cout<<"el numero "<<num<<" es par";
    }


}