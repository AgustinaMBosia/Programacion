#include <iostream>

using namespace std;

string resul;
int num1;

string mmc(int& num1){

    if (num1<0){
        resul="N";
    }
    else if (num1==0){
        resul="C";
    }
    else {
        resul= "P";
    }

    return resul;

}

int main(){

    cout << "ingrese un número"<<endl;
    cin>>num1;

    string esto=mmc(num1);

    cout<<esto;
    return 0;
}