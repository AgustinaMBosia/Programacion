#include <iostream>
#include <fstream>
using namespace std;

int archivo(){
    ifstream variable ("ejercicio4.txt");

    if (!variable.is_open()){
        cout << "error";
        exit(EXIT_FAILURE);
    }
    string valor;
    int i = 0 ;

    while (variable>>valor){
        i++;
    }

    return i;
}

int main (){
    int algo = archivo();
    cout<< "hay "<<algo<<" datos";
}