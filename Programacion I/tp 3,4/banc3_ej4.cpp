#include <iostream>

using namespace std;

string resul;
int num1;

string mmc(int num1){

    if (num1<0){
        resul="negativo";
    }
    else if (num1==0){
        resul="igual a cero";
    }
    else {
        resul= "positivo";
    }

    return resul;

}

int main(){

    cout << "ingrese un número"<<endl;
    cin>>num1;

    string esto=mmc(num1);

    cout<<"el número "<<num1<<" es "<<esto;
    return 0;
}