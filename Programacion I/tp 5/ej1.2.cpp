#include <iostream>
#include <fstream>
using namespace std;

int main (){

    ifstream pel ("resultado1.txt");
    // verifica erchivo 

    if (!pel.is_open()){
        cout << "error" <<endl;
        exit (EXIT_FAILURE);
    }

    int valor;

    int i = 0;

    // lee datos en archivo

    while (pel>> valor){
        cout << valor;
        cout<<" ";  
        i++;

        if (i%3==0){
            cout<<endl;
        }
    }
}
     
