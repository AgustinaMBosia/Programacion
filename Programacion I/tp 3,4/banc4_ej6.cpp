#include <iostream>

using namespace std;
int horas,minutos,seg;

void tiempo(int& h,int& m,int& s){
    int h1=h;
    int m1=m;
    int s1=s;

    s=s/60;
    m=m1+s;
    s=s1-s*60;

    m=m/60;
    h=h1+m;
    m=m1-m*60;

}

int main(){
    cout<<"ingrese las horas:";
    cin>>horas;
    cout<<"ingrese los minutos:";
    cin>>minutos;
    cout<<"ingrese los segundos:";
    cin>>seg;

    tiempo(horas,minutos,seg);

cout<<"horas: "<<horas<<" minutos: "<<minutos<<" segundos: "<<seg;
}
