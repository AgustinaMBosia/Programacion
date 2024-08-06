/*Representar un polinomio completo de grado n mediante un arreglo. Ingresar el grado del 
polinomio y sus coeficientes. A continuación, ingresar un valor x y calcular el polinomio 
evaluado en ese valor. Utilizar funciones en la resolución. */

#include <iostream>
#include <cmath>
using namespace std;

//carga de los valores
void carga(int &a, float x[]){
    cout << "ingrese el grado del polinomio"<<endl;
    cin >> a;

    for (int i=0; i<=a; i++){
        if(i==0){
            cout << "ingrese el coeficiente de x ^ "<<i<<" (es decir, el termino independiente):"<<endl;
            cin >> x[i];
        }
        else{
            cout << "ingrese el coeficiente de x sub "<<i<<":"<<endl;
        cin >> x[i];
        }
    }
}

float funcion(int &a,int &b, float x[]){

    cout<<"ingrese el valor de x para calcular el polinomio: ";
    cin>> b;

    float valor=0;

    for(int i=0; i<=a; i++){
        valor = valor + x[i] * pow(b, i);
    }

    return valor;
}


void muestra(int a , int b , float x[], float resul){
    cout<< "el resultado del polinomio de grado "<< a << " y valor de x=" << b << " es: "<<resul ;
}

int main(){
    int a,b;
    float x[100]= {0};
    carga(a,x);
    float resul = funcion(a,b,x);
    muestra (a, b, x, resul);

}
