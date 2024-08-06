#include <iostream>

#define tama 5

using namespace std;

void carga(int array[tama][4]){

    cout << "bienvenido profesor, ingresar respuestas correctas: "<< endl;

    for (int i = 0; i<tama ; i++){
        cout <<"ingrese la respuesta correcta para la pregunta nro "<< i+1<<": (0 = false/1 = true)"<<endl;
        cin >> array[i][0];
    }

    cout << "bienvenido al examen, ingresar respuestas del alumno"<< endl;


    for (int i = 0 ; i<tama ; i++){
        cout <<"ingrese la respuesta de la pregunta nro "<< i+1<<": (0 = false/1 = true)"<<endl;
        cin >> array[i][1];
    }

}


int compare (int array [tama][4]){
 
    int puntaje = 0;

    for (int i = 0; i<tama; i++){
        if (array[i][0] == array[i][1]){
            
            puntaje = puntaje +5;
            array[0][2] = array[0][2] + 1;

        }
        else{

            array[0][3] = array[0][3] +1;

        }
    }

    return puntaje;
        
}

void mostrar (int array [tama][4]){

    int pun = compare (array);

    cout << "el puntaje alcanzado es de: "<< pun<< "/"<< 5*tama <<endl;

    cout << "las respuestas correctas son: "<< array[0][2]<<endl;

    cout << "las respuestas incorrectas son: "<< array[0][3]<< endl;

}



int main (){
    int array[tama][4]= {0};
    

    carga (array);
    mostrar (array);


}