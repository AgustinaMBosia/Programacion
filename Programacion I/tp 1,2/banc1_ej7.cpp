#include <iostream>
using namespace std;

int temp;
string sino;
int main(){

    while (sino!="n"){
        cout<<"ingrese la temperatura registrada:"<<endl;
        cin>>temp;

        if (temp>=80){
            cout<<"ALERTA"<<endl;
        }
        else{
            cout << "la temperatura está bien";
        
        }

        cout<<"desea registrar otra temperatura? (y/n)"<<endl;
        cin>>sino;

    }
}