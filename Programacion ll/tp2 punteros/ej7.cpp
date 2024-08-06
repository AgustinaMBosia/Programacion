/*Obtener una función copia que utilice punteros para copiar una cadena en otra.*/

#include <iostream>
using namespace std;

void copia(char a[], char b[]){
    char *p=a;

    char *q=b;

    for(int i=0; i<10;i++){
        *q=*p;
        q++;
        p++;
    }
}

int main()
{
    char a[10], b[10];
    cout <<"ingrese: ";
    cin.getline(a,11);
    copia(a,b);
    for(int i=0; i<10;i++){
        cout<<b[i];
    }
    

    return 0;
}