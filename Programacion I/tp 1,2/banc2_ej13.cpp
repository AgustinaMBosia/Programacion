#include <iostream>

using namespace std;

float cm,metros,pulgadas,cel,far ;
int an;
bool flag;


int main(){


    flag=1;

    while (flag==1){

        cout<<"seleccione una opción numerica:"<<endl;
        cout<<"1 - Conversión de distancia"<<endl;
        cout<<"2 - conversión de Temperatura"<<endl; 
        cout<<"3 - Salir"<<endl;

        cin>>an;
 
    switch (an){
    case 1:

        cout<<"ingrese los cm para transformarlos a metros y a pulgadas: "<<endl;
        cin>>cm;
        metros=cm/100;
        pulgadas=cm*0.3937;

        cout<<cm<<"cm equivalen a "<<metros<<" metros y a "<<pulgadas<<" pulgadas"<<endl;
        

        break;

    case 2:

        cout<<"ingrese los grados celsius para transformarlos a farenhait: "<<endl;
        cin>>cel;

        far=cel*(9/5)+32;

        cout<<cel<<"°c equivalen a "<<far<<"°f"<<endl;
            

        break;

    case 3:
    
        flag=0;
    
    default:

        if (flag==1){

         cout<< "ingresar un numero dentro de los valores planteados."<<endl;


        }
        
        break;
    }
    }
}