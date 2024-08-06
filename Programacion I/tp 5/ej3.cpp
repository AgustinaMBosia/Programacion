#include <iostream>
#include <fstream>
using namespace std;

void carga(int M[]){
    ifstream variable ("ejercicio3.txt");
        // verifica erchivo 

    if (!variable.is_open()){
        cout << "error" <<endl;
        exit (EXIT_FAILURE);
    }

    for (int i = 0; i < 13; i++){
        variable >> M[i];
    }

}

void archivo (int M[]){
    ofstream variableescribe ("resultado3.txt");

    if(!variableescribe)
    {
        cout<<"no se pudo guardar los datos en el archivo"<<endl;
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < 13; i++){
        if (i==0 or M[i]!=M[i-1]){
            variableescribe << M[i]<<" ";
        }   
    }
}

int main(){
    int M [13];

    carga(M);
    archivo (M);
}

