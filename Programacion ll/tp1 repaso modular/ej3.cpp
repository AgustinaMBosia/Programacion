//Obtener una función recursiva que calcule el Máximo Común Divisor de dos números M y N.

#include <iostream>
using namespace std;


void carga(int &a, int &b){
        cout << "ingrese el valor A"<<endl;
        cin >> a;

        cout << "ingrese el valor B"<<endl;
        cin >> b;

        if(b<a){
            int num;
            num=a;
            a=b;
            b=num;
        }

}

int funcion (int &a, int &b, int res[]) {

    int num=0;

    for (int i = 1; i < a; i++)
    {
        if((a%i)==0){

            if((b%i)==0){

                res[num]=i;
                num++;
            }
            
        }
        
    }

    return num;
    
}

void show (int res[], int cant){
    if(cant!=0){
        cout<< "El Máximo Común Divisor es: "<< res[cant-1];
    }
    else{
        cout<<"no hay divisores comunes de A y B";
    }
}

int main(){
    int res[100];

    int a,b;
    carga (a,b);
    int cant = funcion(a,b,res); 
    show (res, cant); 

    return 0;
}