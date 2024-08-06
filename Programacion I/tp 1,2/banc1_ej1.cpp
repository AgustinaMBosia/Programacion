#include<iostream>

using namespace std;

int velo,tiempo,dist;

int main(){

    cout<<"ingrece la velocidad del vehiculo"<<endl;
    cin>> velo;

    cout << "ingrese en cuanto tiempo se recorrio la distancia"<< endl;
    cin>>tiempo;

    dist=velo*tiempo;

    cout << "la distancia recorrida es: "<<dist<<"km"<<endl;

}