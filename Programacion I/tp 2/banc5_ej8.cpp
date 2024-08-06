#include <iostream>

#define tama  3


using namespace std;


int carga (string x [], int n[]){

    int nro = 0;

    for (int i = 0; i<tama; i++){
        cout << "ingrese un nombre "<<endl;
        cin >> x [i];
        cout << "ingrese la edad de "<<x[i]<<":"<<endl;
        cin >> n[i];

        if (n[i] >= 19){
            nro = nro + 1;
        }
    }

    return nro;
}

void mayores(string x[], int n[], string m[]) {

    int im=0;


    for (int i = 0; i < tama; i++) {
        
        if (n[i] >= 19) {
            m[im] = x[i];
            im++;
    }
    }
}

void muestra (string m[], int nro){
    for (int i = 0 ; i < nro ; i++){

        cout << m[i]<<endl;

    }
}


int main (){
    string x [tama];
    int n [tama];
    int nro = carga (x,n);
    string m [nro];
    mayores (x,n,m);
    muestra (m,nro);


}