#include <iostream>

using namespace std;

int ganado,perdido,empatado,cant,total;
 
int main (){
    cout << "puntaje de un equipo:"<<endl;
    cout << "cuantos partidos ganaron?";
    cin >>ganado;

    cout << "cuantos partidos perdieron?";
    cin >>perdido;

    cout << "cuantos partidos empataron?";
    cin >>empatado;

    ganado=ganado*3;

    total=ganado+empatado;
    
    cout<<"el puntaje total es de: "<<total;


}