#include <iostream>
using namespace std;

int main(){
    //creación de punteros
    int x,y,*p,*q;

    p=&x;
    *p=12;
    q=&y;
    *q=23; 

    cout<< *p<<" "<<*q<<endl;

    *p=*q;

    cout<< *p<<" "<<*q<<endl;

    q= NULL;

    cout<< x<<" "<<y<<endl;

    return 0;
}