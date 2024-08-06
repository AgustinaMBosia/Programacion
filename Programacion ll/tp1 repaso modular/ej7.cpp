#include <iostream>
using namespace std;

/*Escribir una función que intercambie el valor de dos variables, es decir si X=5 e Y=7 tras 
aplicar la función, por ejemplo haciendo "intercambiar(X,Y)" se tiene que X=7 e Y=5. */



//carga de los valores
void carga(int &a, int &b){
    cout << "ingrese el valor A"<<endl;
    cin >> a;

    cout << "ingrese el valor B"<<endl;
    cin >> b;
}

void cambio (int &a, int &b){
        int num;
        num=a;
        a=b;
        b=num;
}

void muestra(int a , int b ){
    cout<< "los valores intrercambiados son: a="<< a << " y b=" << b <<endl;

}
int main(){
    cout<<"Intercambio de dos numeros"<<endl;
    int a,b;

    carga(a,b);
    cambio(a,b);
    muestra(a,b);
    
}