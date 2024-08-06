#include <iostream>
using namespace std;

/*Crear un programa con un menú de opciones visible por terminal, que tenga los
métodos sumarEnteros, calcularAreaCirculo y calcular la potencia de un número. El
menú deberá solicitar los parámetros al usuario de acuerdo a la opción
seleccionada.
*/
int sumarEnteros(int num1, int num2){
    return num1+num2;
}

float calcularAreaCirculo(float rad){
    return 3,14159*(rad* rad);
}

float calcularPotencia(float num, int pot){
    float resul=1;
    for (int i=0; i<pot; i++){
        resul*=num;
    }

    return resul;
}


void menu(int n){

    int num1, num2;
    float num, num11;

    switch (n)
    {
    case 1:
    cout <<"ingrese num1: ";
    cin>>num1;
    cout <<"ingrese num2: ";
    cin>>num2;
    cout<<sumarEnteros(num1,num2);
        /* sumarEnteros */
        break;

    case 2:

    cout <<"ingrese radio: ";
    cin>>num;
    cout <<calcularAreaCirculo(num);
        /* calcularAreaCirculo */
        break;

    case 3:
    cout <<"ingrese base: ";
    cin>>num11;
    cout <<"ingrese potencia: ";
    cin>>num2;
    cout <<calcularPotencia(num11,num2);
        /* calcularPotencia */
        break;
    
    default:
        break;
    }

}

int main(){
    int n; 
    cout<< "ingrese un numero del menú"<<endl;
    cout<<"sumarEnteros(1), calcularAreaCirculo (2)y calcular la potencia de un número(3)"<<endl;
    cin>>n;

    menu(n);
}