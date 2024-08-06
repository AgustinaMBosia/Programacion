#include <iostream>
using namespace std;

int main(){

    int num=5;
    int resul=1;
    int algo=0;

    for(int i=num; i>0; i--){
        resul*=i;
    }

    cout <<resul;
}