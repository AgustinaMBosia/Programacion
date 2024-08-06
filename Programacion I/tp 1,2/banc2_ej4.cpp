#include <iostream>

using namespace std;

float edad,cuenta;

int main(){

    for (int i=1;i<=10;i++){
        cuenta=edad;
        cout<<"ingresar la edad de la persona Nro "<<i<<endl;
        cin>>edad;
        while(edad<0){
            cout<<"no se pueden ingresar números negativos, ingresar otra edad: ";
            cin>>edad;
        }

        edad=edad+cuenta;
        
    }

    edad=edad/10;

    cout<<"el promedio de la edad de estas personas es de: "<<edad;

}

