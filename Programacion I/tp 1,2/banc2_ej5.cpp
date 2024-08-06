#include <iostream>

using namespace std;

float edad,cuenta,u;

int main(){

    cout<<"ingresar cuantas personas se ingresaran para realizar el promedio: "<<endl;
    cin>>u;

    for (int i=1;i<=u;i++){
        cuenta=edad;
        cout<<"ingresar la edad de la persona Nro "<<i<<endl;
        cin>>edad;
        while(edad<0){
            cout<<"no se pueden ingresar números negativos, ingresar otra edad: ";
            cin>>edad;
        }

        edad=edad+cuenta;
        
    }

    edad=edad/u;

    cout<<"el promedio de la edad de estas personas es de: "<<edad;

}

