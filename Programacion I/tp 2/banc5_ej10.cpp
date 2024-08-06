#include <iostream>
using namespace std;

// T tamaño e invertir 
// ideas : tama mayor = tama -1 menor ,12
// i = tama / 2

void cargar (int x[],int n){

    for (int i = 0 ; i<n ; i++){
        cout << "ingrese componente nro "<< i+1 << ": "<<endl;
        cin >> x[i];
    }

}

void invertir (int x [], int m[],int n ){
    int index = 0;
    int re;

    for (int i = 0 ; re!=0 ; i++){
        re = n-i;
        m[index] = x[re - 1];
        index++;
    }
}

void mostrar (int m [],int n){

    for (int i = 0 ; i<n ; i++){
        cout << m[i] << " ";
    }

}


int main (){
    int n; 

    cout << "ingrese el tamaño del vector: "<<endl;
    cin >> n ;

    int x [n];

    cargar (x,n);

    int m [n];

    invertir (x,m,n);
    mostrar (m,n);


}