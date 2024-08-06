#include <iostream>

using namespace std;

int num1,num2,suma;
string answer; 
bool gana;

bool dados(int sum){
    if (sum == 7 or sum == 11){
        sum = false;
    }
    else if (sum == 2 or sum == 3 or sum == 12){
        sum = false;
    }
    else {
        sum=true;  
    }

    return sum;

}

bool ganador(int num){
    if (num == 7 or num == 11){
        gana = true;
    }
    else if (num == 2 or num == 3 or num == 12){
        gana = false;
    }

    return gana;

}

int main (){

    cout <<"JUEGO DE DADOS"<<endl;
    suma = 1;

    cout<<"ingrese los dos numeros en las caras superioies de los dados:"<<endl;

    cin >> num1 >>num2;

    suma = num1 + num2;

    while(dados(suma)){

        cout <<"el juego continua"<<endl;

        cout<<"ingrese los dos numeros en las caras superioies de los dados:"<<endl;

        cin >> num1>>num2;

        suma = num1 + num2;


    }

    cout <<"el juego terminó, usted ";
    
    if (ganador(suma)){
        cout<<"ganó."<<endl;
    }
    else {
        cout<<"perdió."<<endl;
    }

}
