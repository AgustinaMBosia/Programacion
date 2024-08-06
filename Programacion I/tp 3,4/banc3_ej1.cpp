#include <iostream>

using namespace std;
float num1;

float cubo (float num1){

    float cubo;
    cubo=num1*num1;
    return (cubo);
    
}
int main(){
    

    cout<<"ingrese un numero:"<<endl;
    cin>>num1;

    float resul= cubo(num1);

    cout <<" el cubo de "<<num1<<" es igual a "<<resul;

    return 0;

}

