#include <iostream>
using namespace std;

// tres valores enteros, encontrar los divisores del tercero entre los otros dos

struct equipo{
    int b;
    int a;
    int k;
};

void carga(equipo equi []){
    cout << "ingrese el valor A"<<endl;
    cin >> equi[0].a;

    cout << "ingrese el valor B"<<endl;
    cin >> equi[0].b;

        if(equi[0].b<equi[0].a){
            int num;
            num=equi[0].a;
            equi[0].a=equi[0].b;
            equi[0].b=num;
        }
        
    cout << "ingrese el valor K"<<endl;
    cin >> equi[0].k;
}

int funcion(equipo equi[], int res[]) {

    int num=0;

    for (int i = equi[0].a; i < equi[0].b; i++)
    {
        if(i!=0){
            if((equi[0].k%i)==0){
            res[num]=i;
            num++;
        }
        }
        
    }

    return num;
    
}

void show ( int res[], int cant){
    if(cant!=0){
        cout<< "Los divisores son: ";

    for (int i = 0; i < cant; i++)
    {
        cout<<res[i]<<" ";
    }
    }
    else{
        cout<<"no hay divisores de K entre A y B";
    }
}

int main(){
    equipo equi[1];
    int res[100];
    carga (equi);
    int cant = funcion(equi,res); 
    show ( res, cant); 

    return 0;
}