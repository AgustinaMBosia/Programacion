#include <iostream>

using namespace std;

int num;

int main(){

    num=1;

    while (num!=0){
        
     cout<<"ingresar un número para mostrar su tabla"<<endl;
     cin>>num;

     cout<<"tabla del "<<num<<":"<<endl;

     for (int i=1; i<=10; i++){
        cout<<num<<"x"<<i<<"="<<num*i<<endl;

     }

     cout <<"para finalizar el programa ingrese 0."<<endl;

    }
}