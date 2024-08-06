#include <iostream>
#include <fstream>

using namespace std;

struct estructura{
    int uno, dos, tres, cuatro, cinco, seis, siete;
    int nada;
};

void cargarDatos(estructura array[]) {
    ifstream variable("mediciones.txt");

    if (!variable.is_open()) {
        cout << "Error al abrir el archivo";
        exit(EXIT_FAILURE);
    }

    // Modificar el bucle para leer los datos correctamente
    for (int i = 0; i < 3; i++) {
        string regionHeader;
        variable >> regionHeader >> regionHeader; // Leer el encabezado de la región (no se usa)

        // Leer los valores correspondientes a cada región
        variable >> array[i].uno >> array[i].dos >> array[i].tres >> array[i].cuatro >> array[i].cinco >> array[i].seis >> array[i].siete;
    }
    variable.close(); // Cerrar el archivo después de leer los datos
}

void contarDatosRelevantes(estructura array[], int arreglo[]) {
    for (int i = 0; i < 3; i++) {
        arreglo[i] = 0;
        if (array[i].uno != 0) arreglo[i]++;
        if (array[i].dos != 0) arreglo[i]++;
        if (array[i].tres != 0) arreglo[i]++;
        if (array[i].cuatro != 0) arreglo[i]++;
        if (array[i].cinco != 0) arreglo[i]++;
        if (array[i].seis != 0) arreglo[i]++;
        if (array[i].siete != 0) arreglo[i]++;
    }
}

void contarDatosVacios(estructura array[], int arreglo[]) {
    arreglo[3] = 0;
    for (int i = 0; i < 3; i++) {
        if (array[i].uno == 0) arreglo[3]++;
        if (array[i].dos == 0) arreglo[3]++;
        if (array[i].tres == 0) arreglo[3]++;
        if (array[i].cuatro == 0) arreglo[3]++;
        if (array[i].cinco == 0) arreglo[3]++;
        if (array[i].seis == 0) arreglo[3]++;
        if (array[i].siete == 0) arreglo[3]++;
    }
    cout << "La cantidad de datos vacíos es: " << arreglo[3] << endl;
}

void calcularMedia(estructura array[], int arreglo[]) {
    for (int i = 0; i < 3; i++) {
        arreglo[i + 4] = array[i].uno + array[i].dos + array[i].tres + array[i].cuatro + array[i].cinco + array[i].seis + array[i].siete;
    }
    arreglo[4] /= arreglo[0];
    arreglo[5] /= arreglo[1];
    arreglo[6] /= arreglo[2];

    cout << "La media de datos por región es: " << endl;
    cout << "Región 1: " << arreglo[4] << endl;
    cout << "Región 2: " << arreglo[5] << endl;
    cout << "Región 3: " << arreglo[6] << endl;
}

void encontrarMayorMedia(estructura array[], int arreglo[]) {
    calcularMedia(array, arreglo);

    int mayorMedia = max(arreglo[4], max(arreglo[5], arreglo[6]));

    if (mayorMedia == arreglo[4]) {
        cout << "La región con mayor promedio es la región 1 con: " << arreglo[4] << endl;
    } else if (mayorMedia == arreglo[5]) {
        cout << "La región con mayor promedio es la región 2 con: " << arreglo[5] << endl;
    } else {
        cout << "La región con mayor promedio es la región 3 con: " << arreglo[6] << endl;
    }
}

void generarArchivoResultados(estructura array[], int arreglo[]) {
    ofstream salida("resultados.txt");

    if (!salida.is_open()) {
        cout << "Error al crear el archivo";
        exit(EXIT_FAILURE);
    }

    calcularMedia(array, arreglo);

    salida << "Región  Promedio de precipitaciones" << endl;
    salida << "1  " << arreglo[4] << endl;
    salida << "2  " << arreglo[5] << endl;
    salida << "3  " << arreglo[6] << endl;

    salida << "Cantidad de Regiones: 3";

    salida.close(); // Cerrar el archivo después de escribir los resultados
}


//Menu
void menu (estructura array[], int arreglo []){
    int sino = 1;
    int num = 7;
    while (sino == 1){

    cout << "que desea hacer?"<<endl;
    
    cout<< "1- Cantidad de datos relevados por cada región"<<endl;
    cout <<"2- Cantidad de mediciones que no se pudieron realizar"<<endl;
    cout<< "3- Media de ingresos por cada región"<<endl;
    cout <<"4- Región con mayor media de precipitaciones "<<endl;
    cout << "5- Crear un archivo con resultados "<<endl;

    while (num != 1 && num != 2 && num != 3 && num != 4 && num != 5) {
            cin >> num;

            switch (num) {
                case 1:
                    contarDatosRelevantes(array, arreglo);
                    cout << "Los datos relevantes por región son:" << endl;
                    cout << "Región 1: " << arreglo[0] << endl;
                    cout << "Región 2: " << arreglo[1] << endl;
                    cout << "Región 3: " << arreglo[2] << endl;
                    break;
                case 2:
                    contarDatosVacios(array, arreglo);
                    break;
                case 3:
                    calcularMedia(array, arreglo);
                    break;
                case 4:
                    encontrarMayorMedia(array, arreglo);
                    break;
                case 5:
                    generarArchivoResultados(array, arreglo);
                    break;
                default:
                    cout << "Ingrese un parámetro válido (1 / 2 / 3 / 4 / 5)" << endl;
                    break;
            }
        }
        cout << "desea volver al menu? (1 = si / 2 = no)"<<endl;
        cin >> sino;
        
        num = 7;

    }

}


int main(){

    int arreglo [8]= {0};
    estructura array[3] ;

    cargarDatos(array);
    
    menu(array,arreglo);
}