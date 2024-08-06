#include <iostream>

using namespace std;

int num1,num2;

string resul;



string mayor(int num1,int num2){

    if (num1>num2){
        resul="mayor";
    }
    else if (num1==num2){
        resul="igual";
    }
    else{
        resul="menor";
    }

    return (resul);
}

int main(){
    cout <<"ingrese dos números"<<endl;
    cin>>num1;
    cin>>num2;

    string esto=mayor(num1,num2);

    cout<<"el número "<<num1<<" es "<<esto<<" al número "<<num2;
    return 0;  
}

