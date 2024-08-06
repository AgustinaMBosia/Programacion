#include <iostream>
#include <cmath>

using namespace std;

void cargarp(int x[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el coeficiente de grado " << n - i - 1 << ": ";
        cin >> x[i];
    }
}


void expo (int m[],int n){
    for (int i = 0; i < n ; i++){
        m[i] = n-i-1;
    }
}

int funcion (int x[], int m[], int p,int n){

    int index = 0;
    int res = 0;
    int resu =0;

    for (int i = 0 ; i<n ; i++){

        res = x[n-i-1] * pow (p,m[index]);

        resu = resu + res;

        index++;
    }

    return resu;

}

int main (){
    int n,p;

    cout << "ingrese el grado del polinomio: "<<endl;
    cin >> n;

    int j = n+1; 

    cout << "ingrese el valor de x" << endl;
    cin >> p;

    int x[j];
    int m[j];

    cargarp(x,j);
  
    expo (m,j);
 

    int res = funcion (x,m,p,j);

    cout <<res;

}