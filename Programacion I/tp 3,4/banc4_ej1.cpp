#include <iostream>
using namespace std;

int num1,num2;

float suma (int& uno, int& dos){
    int sumita;
    sumita=uno+dos;
    return sumita;
}

int main(){
    cout<<"ingrese dos números para sumarlos"<<endl;
    cin>>num1>>num2;

    int resul=suma(num1,num2);

    cout<<"la suma de "<<num1<<" y "<<num2<<" es "<<resul;

}