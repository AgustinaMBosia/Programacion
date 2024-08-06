#include <iostream>
#define tama 14

using namespace std;


void carga (int x[]){
    for (int i = 0; i<tama ; i++){
        cout << "ingrese la edad de el paciente nro"<< i+1 << ":"<<endl;
        cin >> x[i];
    }
}


void mayores(int x[],int m[]) {

    int im=0;
    int imen = 0;


    for (int i = 0; i < tama; i++) {
        
        if (x[i] >= 19) {
            im++;
        }
        else if (x [i] < 18){
            imen ++;
        }
    }

    m[0] = im;
    m[1] = imen;
}



float suma (int x[]){

    float sum = 0;

    for (int i = 0 ; i<tama ; i++ ){

        sum = sum + x[i];

    }

    return sum;
}

float media (float res){
    res = res / tama;

    return res;
}

void muestra (int m[], float res){

    cout << "mayores: "<<m[0]<<endl;
    cout << "menores: "<<m[1]<<endl;
    cout << "media: "<<res<<endl;


}

int main (){
    int x[tama];
    int m [2];

    carga (x);
    mayores (x,m);
     float res = suma(x);
     float resu = media (res);
    muestra (m,resu);
    

}