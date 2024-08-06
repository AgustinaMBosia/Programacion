#include <iostream>
using namespace std;

class operacion{
    private:
        float v1,v2;
    public:
        void inicializar();
        float suma();
        float resta();
        float division();
        float multi();
};

void operacion::inicializar(){
    cout<<"ingrese el valor 1: ";
    cin>>v1;
    cout<<"ingrese el valor 2: ";
    cin>>v2;
        
}

float operacion::suma(){
    float sum= v1+v2;
    return sum;
}

float operacion::resta(){
    float res= v1-v2;
    return res;
}

float operacion::division(){
    float div= v1/v2;
    return div;
}

float operacion::multi(){
    float mul= v1*v2;
    return mul;
}