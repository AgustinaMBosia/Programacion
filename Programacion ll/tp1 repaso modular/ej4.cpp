//Obtener una función recursiva que calcule el factorial de un numero N.  

#include <iostream>
using namespace std;


int carga(int &n){

        cout << "ingrese el valor N para factoriar"<<endl;
        cin >> n;

    return n;
}

int funcion (int n) {

    int fact=1;

    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
    }

    return fact;
    
}

void show (int cant, int n){

    for (int i = 1; i <= n; i++)
    {
        if (i<n){
            cout<<i<<" * "; 
        }
        else if(i=n){
            cout<<i<<" = "<<cant<<endl;
        }
    }
    
    
   
    cout<< "El Número Factoreado es: "<< cant;
    
}

int main(){
    int res[100];

    int n;
    carga (n);
    int cant = funcion(n); 
    show (cant, n); 

    return 0;
}