#include <iostream>
using namespace std;

void carga(string *titulo, string *autor, int n){
    string t,a;
    for (int i = 0; i < n; i++) {
        cout<< "introduzca el titulo del libro nro "<<i+1<<": ";
        cin>>t;
        cout<< "introduzca el autor del libro nro "<<i+1<<": ";
        cin>>a;

        titulo[i] = t;
        autor[i] = a;
    }
}

void show(string *titulo, string *autor, int n) {
    cout<<"arreglo final: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << *titulo << ", de ";
        cout<<*autor<<endl;
        *titulo++;
        *autor++;
    }
}

int main(){
    int n;
    n=3;


    string *titulo = new string[n];
    string *autor = new string[n];

    
    carga(titulo, autor, n);

    show(titulo,autor, n);

    delete[] titulo;
    delete[] autor;

    return 0;
}