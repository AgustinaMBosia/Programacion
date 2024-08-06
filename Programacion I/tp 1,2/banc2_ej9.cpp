#include <iostream>

using namespace std;

int lim,cant,suma,peso,promed,pasado;
string answer;

int main(){

    answer="y";

    cout<<"ingrese el límite de peso para los contenedores"<<endl;
    cin>>lim;

    cout<<"Desea registrar un contenedor? (y/n)"<<endl;
    cin>> answer;

    while (answer=="y"){
        cant=cant+1;
        suma=peso;
        
        cout<<"ingrese el peso del contenedor nro "<<cant<<": "<<endl;
        cin>>peso;

        if (peso>lim){
            pasado=pasado+1;
        }

        peso=peso+suma;

        cout<<"Desea registrar otro contenedor? (y/n)"<<endl;
        cin>> answer;

    }

    promed=peso/cant;

    cout<<"Cantidad de contenedores registrados: "<<cant<<endl;
    cout<< "Promedio de Peso entre todos los contenedores: "<<promed<<endl;
    cout<<"Cantidad de contenedores con peso mayor al límite máximo establecido por el puerto: "<<pasado<<endl;

}