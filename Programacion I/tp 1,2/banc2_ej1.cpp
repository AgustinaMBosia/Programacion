#include <iostream>

using namespace std;
int a,b,area,perim;

int main (){
    cout << "Ingrese la base del rectangulo"<< endl;
    cin >> a ;

   while (a<0){
        cout<<"ingresar nuevamente una base positiva"<<endl;
        cin >>a;

    }
   

    cout << "ingrese la altura del rectangulo" << endl;
    cin >> b ;

    while (b<0){
        cout<<"ingresar nuevamente una altura positiva"<<endl;
        cin >> b;

    }

    perim=a*2+b*2;

    area=a*b;

    cout<<"el perimetro es de: "<<perim<<endl;

    cout<<"el area es de: "<<area<<endl;


    


    return 0;


}