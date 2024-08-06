#include <iostream>

using namespace std;

int ant,cuota;
string cat;

int main(){

    cout<<"Se determinará el valor de su cuota."<<endl;
    cout<<"ingrese su categoria en el club en mayúscula: (A, B o C)"<<endl;
    cin>>cat;

    while (cat!="A" and cat!="B" and cat!="C"){
        cout<<"ingrese una categoria válida: (A, B o C)"<<endl;
        cin>>cat;
    }

    cout<<"ingrese su antiguedad en años:"<<endl;
    cin>>ant;

    while (ant<0){
        cout<<"antiguedad negativa, ingrese un valor positivo:"<<endl;
        cin>>ant;
        
    }

    if (cat=="A"){
        if (ant<10){
            cuota=100;
        }
        else if (ant<20 and ant>=10){
            cuota=100+100*20/100;
        }
        else{
            cuota=100+100*30/100;
        }
    }

    else if (cat=="B"){
        if (ant<10){
            cuota=200;
        }
        else if (ant<20 and ant>=10){
            cuota=200+200*15/100;
        }
        else{
            cuota=200+200*25/100;
        }
    }

    else {
        if (ant<10){
            cuota=300;
        }
        else if (ant<20 and ant>=10){
            cuota=300+300*10/100;
        }
        else{
            cuota=300+300*20/100;
        }
    }

    cout<<"el valor determinado para su cuota son: "<<cuota<<" pesos.";


}