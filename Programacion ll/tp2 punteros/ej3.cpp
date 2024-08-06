/*Para el arreglo del ejercicio anterior, declare dos punteros a entero y asigneles
las direcciones del primer y último elemento del arreglo. Imprima la diferencia
entre ambos punteros.
*/

#include <iostream>
using namespace std;

int main(){
    int *p,*q;
    int array[5]={1,2,3,4,5};

    p=&array[0];
    q=&array[4];

    cout<<*p-*q<<endl;
}