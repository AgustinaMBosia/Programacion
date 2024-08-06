#include <fstream>
#include <iostream>

using namespace std;

void carga(int M[]){
    ifstream variable ("ejercicio2.txt");
        // verifica erchivo 

    if (!variable.is_open()){
        cout << "error" <<endl;
        exit (EXIT_FAILURE);
    }

    for (int i = 0; i < 8; i++){
        variable >> M[i];
    }

}

int media (int M[]){
    int valor=0;
    for (int i=0; i<8; i++){
        valor += M[i];
    }

    valor= valor/8;

    return valor;
}

int impares (int M[]){
    int impa=0;
    for (int i=0; i<8; i++){
        if ((M[i]%2)!=0){
            impa+=1;
        }
    }

    return impa;
}

void valor_restos (int M[], int N[]){
    for (int i=0; i<8; i++){
        N[i]= M[i]%2;
    }

    
}

void archivo (int N[], int M[]){
    ofstream variableescribe ("resultado2.txt");

    if(!variableescribe)
    {
        cout<<"no se pudo guardar los datos en el archivo"<<endl;
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < 8; i++){
        variableescribe << M[i]<<" ";
    }

    variableescribe << " "<<endl;

    for (int i = 0; i < 8; i++){
        variableescribe << N[i]<<" ";
    }

    variableescribe << " "<<endl;

    int mediaa = media(M);
    int impapa = impares (N);

    variableescribe << "La media es: "<<mediaa<<endl;

    variableescribe << "Los números impares son: "<<impapa<<endl;


}

int main (){
    int M[8];
    int N[8];
    carga (M);
    valor_restos(M,N);
    archivo (N,M);
  }

                   
 

