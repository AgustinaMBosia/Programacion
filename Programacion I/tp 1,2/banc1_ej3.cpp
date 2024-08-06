#include <iostream>

using namespace std;

int puntaje, preg, res;
string postu,sino;


int main(){


    while (sino!="n")
    {
       cout<< "ingrese el nombre del postulante: ";
    cin>>postu;

    cout<<" "<<endl;

    cout<<"cálculo de respuestas correctas:"<<endl;
    cout<<" "<<endl;
    cout<<"cuantas preguntas se evalúan?";
    cin>>preg;
    cout<<" "<<endl;

    for (int i = 1; i <= preg; i++)
    {
        cout<<"PREGUNTA NRO "<<i<<":"<<endl;
        cout<<"marque 1 si la repuesta fue correcta, 2 si fue incorrecta y 3 si fue entregada en blanco:"<<endl;
        cout<<" "<<endl;

        cin>>res;

        switch (res)
        {
        case 1:
            puntaje=puntaje+4;
            break;

        case 2:
            puntaje=puntaje-1;
            break;

        case 3:
            //no cambia
            break;
        
        default:
            cout<<"no es una respuesta válida, continue con el resto"<<endl;
            break;
        }

    }
    cout<<" "<<endl;

    cout<< "el puntaje final del postulante "<<postu<<" es: "<<puntaje<<endl;

    cout<<" "<<endl;

    cout<<"desea calcular el puntaje de otro postulante? (y/n)";
    cin>>sino;

    }
}