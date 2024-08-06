#include <iostream>
using namespace std;

int length,nota,d,r,b,e;

void notas (int x []){

    for (int i = 0 ; i < length ; i++){
        if (x[i] <= 3){
            d = d + 1;
        }
        else if (x[i] > 3 and x[i]<= 5){
            r = r + 1;
        }
        else if (x[i] > 5 and x[i] <= 8){
            b = b + 1;
        }
        else {
            e = e + 1 ;
        }
    }

    cout << "deficientes: "<< d << endl;
    cout << "regulares: "<< r << endl;
    cout << "buenos: "<< b << endl;
    cout << "excelentes: "<< e << endl;

}

void carga (int x []){

    for (int i = 0; i<length ; i++){

        cout << "ingrese la nota del alumno nro "<< i + 1 << ":" << endl;
        cin >> nota;

            while (nota < 0 or nota>10){

                cout <<"nota no válida, ingrese un valor del 1 al 10:"<<endl;
                cin >> nota;
            }
        

        x[i] = nota;
    }
}

int main (){

    cout << "ingrese una cantidad de alumnos"<< endl;
    cin >> length ;

    int x[length];
    carga(x);
    notas (x);

    return 0;
}