#include <iostream>

using namespace std;

int u,choice,perros,gatos,edad1,edad2,suma1,suma2,prom1,prom2;

int main(){

    cout<<"ingresar la cantidad de animales que se atendieron este mes:"<<endl;
    cin>>u;

    for (int i=1;i<=u;i++){
        cout<<"el animal nro "<<i<<" es un perro o un gato? (1/2) 1=perro 2=gato"<<endl;
        cin>>choice;

        while (choice!=1 and choice!=2){
            cout<<"valor indeterminado, ingresar 1 (perro) o dos (gato)"<<endl;
            cin>>choice;
        }
           
        cout<<"cual es la edad del animal?"<<endl;
        
        if (choice==1){
            suma1=edad1;
            perros=perros+1;
            cin>>edad1;
            edad1=edad1+suma1;
        }
        else if (choice==2){
            suma2=edad2;
            gatos=gatos+1;
            cin>>edad2;
            edad2=edad2+suma2;
        }
}

    prom1=edad1/perros;
    prom2=edad2/gatos;
    cout<<"la cantidad de perros fue: "<<perros<<" y el promedio de sus edades es: "<<prom1<<endl;


    cout<<"la cantidad de gatos fue: "<<gatos<<" y el promedio de sus edades es: "<<prom2<<endl;
    }



