#include <iostream>
using namespace std;

int produ,total;

string dia;

int main (){
    // producción diaria de la última semana trabajada por una empresa

    for (int i=1;i<=5;i++){

    switch (i)
    {
    case 1:
        dia="lunes:";
        break;

    case 2:
        dia= "martes:";
        break;


    case 3:
        dia= "miercoles";
        break;


    case 4:
        dia= "jueves";
        break;


    case 5:
        dia= "viernes";
        break;
    }

    cout<<"ingrese la producción de la empresa en el dia "<<dia<<endl;


    total=produ;

    cin >>produ;

    while (produ<0){
        cout<<"ingrese un numero positivo:"<<endl;
        cin>>produ;
        }

    produ=total+produ;


    }

    if (produ>=100 and produ<200){
        cout<<"se han superado las 100 unidades"<<endl;
    }   
    if (produ>=200 and produ<300){
        cout << "se han superado las 200 unidades"<<endl;
    }
    if (produ>=300){
        cout<<"se han superado las 300 unidades"<<endl;
    }
    if (produ<100) {
        cout<<"las unidades no llegan a 100 por semana"<<endl;
    }
    

}