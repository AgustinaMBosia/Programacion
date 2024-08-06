#include <iostream>
#include "aaa.h"
using namespace std;


int main(){
    rectangulo R;
    int b,h;
    cout<<"mete h";
    cin>> h;

    cout<<"mete b";
    cin>> b;
    
    R.setBase(b);
    R.setAltura(h);

    int S= R.Superficie();
    cout<<S;
}