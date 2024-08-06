#include <iostream>
using namespace std;

//Un grillo se encuentra de un lado de la calle y necesita llegar hasta el otro lado.  
//Suponiendo  que  se  encuentra  actualmente  en  la  posición  X  y  que  quiere  llegar  a  la posición Y tal que,
// Y es mayor o igual que X, determine la cantidad mínima de saltos que el grillo debe realizar para alcanzar su objetivo. 
//Considere que el grillo siempre salta una distancia fija, D. El  programa  debe  solicitar  el  ingreso  de  tres  enteros 
// X,  Y  y  D  y mediante  una  función calcular y posteriormente mostrar el mínimo número de saltos necesarios.


struct equipo{
    int ygriega;
    int equis;
    int de;
    int jota;
    int zeta;
};

void carga(equipo equi []){
    cout << "ingrese el valor X (Posición actual del grillo)"<<endl;
    cin >> equi[0].equis;

    cout << "ingrese el valor Y (Posición a alcanzar del grillo)"<<endl;
    cin >> equi[0].ygriega;
        while(equi[0].ygriega<equi[0].equis){
            cout<<"valor menor a X, introduzca Y nuevamente:";
            cin >> equi[0].ygriega;
        }
        
    cout << "ingrese el valor D (Valor del salto del grillo)"<<endl;
    cin >> equi[0].de;
}

void funcion(equipo equi[]) {
    equi[0].jota = equi[0].ygriega - equi[0].equis;
    equi[0].zeta = equi[0].jota / equi[0].de;

    if ((equi[0].jota % equi[0].de) != 0) {
        equi[0].zeta++;
    }
}

void show (equipo equi[]){
    cout<< "Los saltos que tiene que realizar el grillo son: "<<equi[0].zeta;
}

int main(){
    equipo equi[1];
    carga (equi);
    funcion(equi);
    show (equi);

    return 0;
}
