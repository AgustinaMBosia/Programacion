#include <iostream>
using namespace std;
int n , res;

void carga (int x [], int m[], int n){
    int index = 0;

    for (int i = 0; i < n; i++){
        cout << "ingrese el componente nro "<< i+1 << " del vector 1 "<<endl;
        cin >> x[i];
    }
    for (int i = 0; i < n; i++){
        cout << "ingrese el componente nro "<< i+1 << " del vector 2 "<<endl;
        cin >> m[index];
        index++;
    }
}

int prod ( int x[],int m[],int n ){

    int index = 0;
    int resu=0;

    for (int i = 0; i < n; i++){

        int res = resu;

        resu = x[i] * m[index];

        resu = resu + res;

        index ++;

    }

    return resu;

}

int main(){
    
    cout << "ingrese la cantidad de componentes del vector: "<<endl;
    cin >> n ;
    
    int x [n];
    int m [n];

    carga (x,m,n);

    res = prod (x,m,n);

    cout << "el producto punto de estos dos vectores es: "<<res<<endl;


}