#include <fstream> // para ofstream
#include <iostream> // para cout

using namespace std;

void carga(int matrix [][3]){
    for (int i = 0; i<3 ; i++){
        for (int j = 0; j<3; j++){
            cout << "ingrese el elemento ["<<i+1<<"]["<<j+1<<"] de la matriz:"<<endl;
            cin >> matrix [i][j];
        }
    }
}

void show(int matrix [][3]){
    for (int i = 0; i<3 ; i++){
        for (int j = 0; j<3; j++){
            cout << matrix [i][j]<<" ";
        }
        cout <<endl;
    }
}

void archivo (int matrix [][3]){
    // abre el archivo para escritura 
    ofstream pel ("resultado1.txt");

// verifica existencia de archivo
    if (!pel){
        cout << "error al abrir el archivo"<< endl;

        exit (EXIT_FAILURE);
    }

    int num;

    cout << "ingrese el numero a multiplicar: ";
    cin >> num;


    //escribe archivo
    for (int i = 0; i<3; i++){

        for (int j=0;j<3;j++){
             pel << matrix [i][j] * num << " ";
        }
        pel<<endl;
    }

}

int main(){

    int matrix [3][3];

    carga(matrix);
    show(matrix);
    archivo (matrix);

    return 0;
}