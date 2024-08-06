#include <iostream>

using namespace std;

int u1,u2,u3,pieza,afuera,pro1,pro2,pro3,afu1,afu2,afu3,adentro,porb,porm;

int main(){

    cout<<"ingrese la cantidad de piezas producidas por la máquina 1: "<<endl;
    cin>>u1;

    cout<<"ingrese la cantidad de piezas producidas por la máquina 2: "<<endl;
    cin>>u2;

    cout<<"ingrese la cantidad de piezas producidas por la máquina 3: "<<endl;
    cin>>u3;

    for(int i=1;i<=u1;i++){

        cout<<"MAQUINA NRO 1:"<<endl;

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
            afu1=afu1+1;

        }
        else{

            adentro=adentro+1;
        }


    }



    for(int ii=1;ii<=u2;ii++){

        cout<<"MAQUINA NRO 2:"<<endl;

        cout<<"ingrese el diametro en mm de la pieza nro "<<ii<<":"<<endl;
        cin>>pieza;

        while(pieza<0){
            cout<<"reingrese un valor que no sea negativo:";
            cin>>pieza;
        }

        //max=11
        //min=9


        if (pieza>=0 and pieza<9 or pieza>11){

            afuera=afuera+1;
            afu2=afu2+1;

        }
        else{

            adentro=adentro+1;
        }


    }

    for(int iii=1;iii<=u3;iii++){

        cout<<"MAQUINA NRO 3:"<<endl;

        cout<<"ingrese el diametro en mm de la pieza nro "<<iii<<":"<<endl;
        cin>>pieza;

        while(pieza<0){
            cout<<"reingrese un valor que no sea negativo:";
            cin>>pieza;
        }

        //max=11
        //min=9


        if (pieza>=0 and pieza<9 or pieza>11){

            afuera=afuera+1;
            afu3=afu3+1;

        }
        else{

            adentro=adentro+1;
        }


    }

    pro1=afu1*100/u1;
    pro2=afu2*100/u2;
    pro3=afu3*100/u3;


    porb=adentro*100/(u1+u2+u3);
    porm=afuera*100/(u1+u2+u3);


    cout<<"la máquina 1 produjo "<<u1<<" piezas"<<endl;
    cout<<pro1<<"% fueron defectuosas"<<endl;

    cout<<"la máquina 2 produjo "<<u2<<" piezas"<<endl;
    cout<<pro2<<"% fueron defectuosas"<<endl;

    cout<<"la máquina 3 produjo "<<u3<<" piezas"<<endl;
    cout<<pro3<<"% fueron defectuosas"<<endl;

    cout<<"las piezas que cumplen con la tolerancia especificada son "<<adentro<<endl;
    cout<<"las piezas que no cumplen con la tolerancia dada son "<<afuera<<endl;
    cout<<"el porcentaje de piezas buenas con respecto al total es del "<<porb<<"%"<<endl;
    cout<<"el porcentaje de piezas malas con respecto al total es del "<<porm<<"%"<<endl;


}