#include <iostream>
#include <fstream>
using namespace std;

struct estructura {
    string nombres;
    int diamo, diame;
    int canto, nro;
    
};

void carga (estructura array[]){
    ifstream variable ("ejercicio5.txt");

    if (!variable.is_open()){
        cout<< "error";
        exit(EXIT_FAILURE);
    }

    variable >> array[0].nombres;
    variable >> array[0].canto;
    variable >> array[0].nombres;
    variable >> array[0].diamo;
    variable >> array[0].nombres;
    variable >> array[0].nombres;

    for (int i=0; i<10; i++){
        variable>> array[i].nro;
        variable>> array[i].diame;
    }

}

int igualdiam(estructura array[]){
    int iguales=0;
    for (int i=0; i<10; i++){
        if (array[0].diamo == array[i].diame){
            iguales++;
        }
    }

    return iguales;
}

int menordiam(estructura array[]){
    int menor=0;
    for (int i=0; i<10; i++){
        if (array[0].diamo > array[i].diame){
            menor++;
        }
    }

    return menor;
}

int mayor5(estructura array[]){
    int mayor=0;
    int parametro = ((5 * array[0].diamo)/100)+array[0].diamo;
    for (int i=0; i<10; i++){
        if (parametro < array[i].diame){
            mayor++;
        }
    }

    return mayor;
}

void escritura (estructura array[]){
    ofstream salida ("resultado5.txt");

    if (!salida.is_open()){
        cout<< "error";

        exit(EXIT_FAILURE);
    }

    int mayor=mayor5(array);
    int menor = menordiam(array);
    int igual= igualdiam(array);

    salida<<"Informe de Producción"<<endl;
    salida<< "Total de mediciones: "<< array[0].canto<<endl;
    salida<< "Cantidad de piezas con medida = Diametro: "<<igual<<endl;
    salida<< "Cantidad de piezas con medida menor al Diametro: "<<menor<<endl;
    salida<< "Cantidad de piezas con medida 5% más grande que el Diametro: "<<mayor<<endl;

}




int main(){
    estructura array [10];

    carga(array);
    escritura(array);

    return 0;
}
