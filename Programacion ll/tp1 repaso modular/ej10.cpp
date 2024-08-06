/* Leer la cantidad de elementos de un vector y los datos en él. A continuación, reorganizar
el arreglo en modo que los valores impares queden en el primer tramo del arreglo y los
pares detrás. */

#include <iostream>
#include <fstream>
using namespace std;

void carga(int M[]) {
    ifstream archivo("ej10.txt");
    
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < 8; i++) {
        archivo >> M[i];
    }

    archivo.close();

}


void ordenar(int M[]){
    int n = 0; 

for (int i = 0; i < 8 - 1; i++) {

        for (int j = 0; j < 8 - i - 1; j++) {

            if ((M[j]%2)!=0 and (M[j + 1]%2)==0) {

                int temp = M[j];
                M[j] =  M[j+1];
                M[j + 1] = temp;

            }
        }
    }
}

void show(int M[]){
    for (int i=0; i<8; i++){
        cout << M[i]<<" ";
    }
}

int main() {
    int m[100];
    carga(m);
    ordenar(m);
    show(m);


}