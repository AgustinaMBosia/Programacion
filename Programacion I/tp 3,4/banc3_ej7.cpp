#include <iostream>

using namespace std;

int par1,par2,asis;

string alumno (int par1,int par2, int asis){

    string resul;

    if (par1>=7 and par2>=7 and asis>=80){
         resul="promocionado";
    }
    else if (par1>=5 and par2>=5 and asis>=60 and asis<80){
         resul="regular";
    }
    else{
         resul="libre";
    }

    return resul;
}



int main(){

    cout <<"ingresar la nota del primer parcial: "<<endl;
    cin>>par1;

    cout <<"ingresar la nota del segundo parcial: "<<endl;
    cin>>par2;

    cout<<"ingresar el porcentaje de asistencias del alumno: "<<endl;
    cin>>asis;

    string asi=alumno(par1,par2,asis);

    cout<<"el alumno está "<<asi;
    return 0;
}