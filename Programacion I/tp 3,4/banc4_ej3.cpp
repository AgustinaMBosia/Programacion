#include <iostream>

using namespace std;

int num1,num2;

void mayor(int& n1,int& n2){
    if (n1>n2){
        n1=n2;
    }

}

int main(){
    cout<<"ingrese dos números, se devolverá el mayor:"<<endl;
    cin>>num1>>num2;
    if (num1==num2){
        cout <<"los números son iguales";
        return 0;
    }
    cout<<num2;

}