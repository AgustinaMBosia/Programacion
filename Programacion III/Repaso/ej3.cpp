#include <iostream>
using namespace std; 

void marcarAsiento(bool *p){
    *p= true;
}

int main(){
    bool *p;
    int num; 
    bool array [10]= {false};

    cout <<"elige un asiento a reservar"<<endl;
    cin >>num;

    *p=array[num];

    cout<<"estado del asiento antes de la reserva: "<<endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Asiento " << i + 1 << ": " << (array[i] ? "Reservado" : "Libre") << endl;
    }

    marcarAsiento(p);

    cout<<"estado del asiento después de la reserva: "<<*p<<array[num]<<endl;

    for (int i = 0; i < 10; ++i) {
        cout << "Asiento " << i + 1 << ": " << (array[i] ? "Reservado" : "Libre") << endl;
    }

}