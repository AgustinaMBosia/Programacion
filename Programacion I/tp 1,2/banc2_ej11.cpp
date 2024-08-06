#include <iostream>

using namespace std;

int u,adentro, afuera, max,min;
float porb,porm,pieza;

int main(){


    cout<<"ingrese la cantidad de piezas a medir: "<<endl;
    cin>>u;

    for(int i=1;i<=u;i++){

        cout<<"ingrese el diametro en mm de la pieza nro "<<i<<":"<<endl;
        cin>>pieza;

        while(pieza<0){
            cout<<"reingrese un valor que no sea negativo:";
            cin>>pieza;
        }

        //max=11
        //min=9


        if (pieza>=0 and pieza<9 or pieza>11){

            afuera=afuera+1;

        }
        else{

            adentro=adentro+1;
        }


    }

    porb=adentro*100/u;
    porm=afuera*100/u;

    cout<<"las piezas que cumplen con la tolerancia especificada son "<<adentro<<endl;
    cout<<"las piezas que no cumplen con la tolerancia dada son "<<afuera<<endl;
    cout<<"el porcentaje de piezas buenas con respecto al total es del "<<porb<<"%"<<endl;
    cout<<"el porcentaje de piezas malas con respecto al total es del "<<porm<<"%"<<endl;

}