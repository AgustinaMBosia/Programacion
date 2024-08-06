#include <iostream>
using namespace std;

void intercambiarJugos(float& vaso1,float& vaso2){
    swap(vaso1,vaso2);
}

int main(){
    float vaso1, vaso2;
    cout<< "ingrese la cantidad de líquido en el vaso 1"<<endl;
    cin>>vaso1;

    cout<< "ingrese la cantidad de líquido en el vaso 2"<<endl;
    cin>>vaso2;

    intercambiarJugos(vaso1,vaso2);

    cout<<"vaso1: "<<vaso1<<", vaso2: "<<vaso2;
}