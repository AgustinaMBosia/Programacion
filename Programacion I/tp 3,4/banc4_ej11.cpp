#include <iostream>

using namespace std;

int cifra,num,algo,res;

bool hyperpar(int& num){

    while (num>0){
        cifra=num%10;

        algo=cifra%2;

        if (algo!=0){

            return false;
        }

        num=num/10;

    }

    return true;

}

int main(){
    cout<<"ingrese un número y se dirá si es hyperpar:"<<endl;
    cin>>num;

    int result=hyperpar (num);

    if (hyperpar(num)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }


}