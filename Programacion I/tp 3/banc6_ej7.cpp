#include <iostream>
#include <string>

using namespace std;

void carga (int matrix [][3], int algo){

    for (int i = 0; i < algo ; i++){
        cout << "cual es el numero del vuelo #"<<i+1<<endl;
        cin >> matrix [i][0];
        cout << "cuantos pasajeros trasladaba? "<<endl;
        cin >> matrix [i][1];
        cout << "el vuelo departó en horario o atrasado? (1/0)"<<endl;
        cin >> matrix [i][2];
    }
}

int retrasados (int matrix [][3], int algo){

    int retrasos = 0;
    for (int i = 0; i < algo ; i++){
        
        if (matrix [i][2] == 0){
            retrasos++;
        }

    }

    return retrasos;

}

int TotalPas (int matrix[][3], int algo){
    int resul = 0;

    for (int i = 0; i < algo ; i++){
        resul = resul+ matrix [i][1];
    }

    return resul;

}

void show (int matrix [][3], int algo, int resul, int paspas){

    cout << "el numero de retrasos fue de: "<< resul<<endl;
    cout <<"el porcentaje de vuelos atrasados con respecto al total fue de: "<< resul * 100 / algo <<"%"<< endl;
    cout <<"la cantidad total de pasajeros trasladados en el dia fue de: "<< paspas;


}

int main (){
    int algo;
    cout << "cuantos vuelos egresaron el dia de hoy? "<<endl;
    cin >> algo;
    int matrix[algo][3];

    carga(matrix,algo);

    int resul = retrasados(matrix, algo);

    int paspas = TotalPas (matrix,algo);

    show (matrix,algo,resul,paspas);
}