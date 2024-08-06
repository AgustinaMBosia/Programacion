#include <iostream>
using namespace std;

class funcion{
    private:
        int x,y;
    public:
        void inicializar();
        int cuadrante();
};

void funcion::inicializar(){
    cout<<"ingrese x: ";
    cin>>x;
    cout<<"ingrese y: ";
    cin>>y;
}

int funcion::cuadrante(){
    if (x<0){
        if (y<0){
            return 3;
        }
        else{
            return 2;
        }
    }
    else{
        if (y<0){
            return 4;
        }
        else{
            return 1;
        }
    }
}

