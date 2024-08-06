#include <iostream>
#include "alarma.h"
using namespace std;

int main(){
    int h,m,s;
    aparato aparat;
    cout << "------- reloj -------"<<endl;
    cout <<"cual es la hora? (max 24)"<<endl;
    cin>>h;
    aparat.hora.setHora(h);

    cout <<"cuales son los minutos? (max 59)"<<endl;
    cin>>m;
    aparat.hora.setMinutos(m);

    cout <<"cuales son los segundos? (max 59)"<<endl;
    cin>>s;
    aparat.hora.setSegundos(s);

    cout<< "la hora es: "<<aparat.hora.getHora()<<" : "<<aparat.hora.getMinutos()<<" : "<<aparat.hora.getSegundos()<<endl;

    cout<< "Cuando es la alarma?"<<endl;
    cout<< "hora: ";
    cin>>s;
    aparat.buzz.setHora(s);
    cout<< "minuto: ";
    cin>>m;
    aparat.buzz.setMinutos(m);
    cout<< "segundo: ";
    cin>>s;
    aparat.buzz.setSegundos(s);


    cout<<"introduzca la temperatura en celsius: ";
    int c;
    cin>>c;
    aparat.temp.setCelsius(c);

    int i=0;

    while(i!=10){
        
        for (int i=0; i<55600000; i++){}
        cout<<aparat.hora.getHora()<<" : "<<aparat.hora.getMinutos()<<" : "<<aparat.hora.getSegundos()<<endl;
        ++aparat.hora;

        if(i<=10 and i>0){
                cout<<"ALARMA SONANDO"<<endl;
                i++;
        }


        if(aparat.buzz.getHora()==aparat.hora.getHora() and aparat.buzz.getMinutos()==aparat.hora.getMinutos() and aparat.buzz.getSegundos()== aparat.hora.getSegundos()){
            cout<< "ALARMA SONANDO"<<endl;
            i++;
            
        }
        int num;
        num=rand()%10+0;
        cout<<num;

        if(num%2==0){
            aparat.temp.setCelsius(c++);
        }
        cout<<aparat.temp.getCelsius()<<"°C   "<<aparat.temp.getFaren()<<"°F   "<<aparat.temp.getKelvin()<<"°k   "<<endl;

       
    }

    
}
