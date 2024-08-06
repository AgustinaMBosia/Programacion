/*. Realizar una clase que permita representar un número racional.
 Definir los datos miembros de la clase.
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir uno o más constructores para inicializar los datos miembro.
 Definir sobrecargas de los siguientes operadores:
o + suma 2 racionales generando otro como resultado.
o – resta 2 racionales generando otro como resultado.
o ++ incrementa en 1 un racional
o –– decrementa en 1 un racional.
o +=suma un entero a un racional.
o –=suma un entero a un racional
 Definir además una función miembro que implemente la simplificación del
racional.
 Realizar un programa principal que haga uso de la clase.*/

#include <iostream>
#include "ej2.h"
using namespace std;

int main() {
    racional a(3, 4);
    racional b(1, 2);
    a.display();
    cout<<endl;
    b.display();
    cout<<endl;

    ++a;
    ++b;
    a.display();
    cout<<endl;
    b.display();
    cout<<endl;

    a+b;
    cout<<"suma:";
    a.display();
    cout<<endl;
    a-b;
    a-b;
    cout<<"resta:";
    a.display();
    cout<<endl;

    a+=1;
    cout<<"suma de un entero:";
    a.display();
    cout<<endl;
    b-=1;
    cout<<"resta de un entero:";
    b.display();
    cout<<endl;




    return 0;
}