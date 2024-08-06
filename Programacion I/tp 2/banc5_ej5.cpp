#include <iostream>

using namespace std;

int algo, sum;

void carga (int x[] ){

    for (int i = 0; i < 20; i++) {
        
        algo = algo + 2;

        x[i]=algo;
        
    }

}

int suma (int x[]){

    for (int i = 0 ; i<20 ; i++ ){

        x[i] = x [i] + sum;


        sum = x[i];
    }

    cout << sum << endl;

    return sum;
}



int main(){

    int x[20];
    cout << "suma de los primeros 20 números pares" <<endl;

    carga (x);
    suma (x);

    return 0;
}