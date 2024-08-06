#include <iostream>

using namespace std;

int num,decenas,unidades,flag;


int main(){

    flag=1;

    while (flag==1){

    cout << "ingrese un número de dos cifras, se devolverán la cantidad de decenas y unidades del mismo"<<endl;
    cin >>num;

    if (num<=-100 or num>=100){
        cout <<"ese numero no tiene dos cifras. Intente nuevamente:"<<endl;
        flag=1;
    }
    else {
        flag=0;
    }

    }

    decenas=num/10;

    unidades=num-(decenas*10);

    cout<<"las decenas son: "<<decenas<<endl;

    cout <<"las unidades son: "<<unidades<<endl;

}