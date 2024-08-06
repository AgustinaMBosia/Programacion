#include <iostream>
#include <fstream>

using namespace std;

void escritura (){
    ofstream salida ("mediciones.txt");

    if (!salida.is_open()){
             cout<< "error";

        exit(EXIT_FAILURE);
    }

    salida<<"Región 1: "<<"25"<<" "<<"17"<<" "<<"52"<<" "<<"12"<<" "<<"20"<<" "<<"0"<<" "<<"17"<<endl;
    salida<<"Región 2: "<<"26"<<" "<<"19"<<" "<<"25"<<" "<<"35"<<" "<<"15"<<" "<<"30"<<" "<<"15"<<endl;
    salida<<"Región 3: "<<"32"<<" "<<"0"<<" "<<"21"<<" "<<"23"<<" "<<"30"<<" "<<"0"<<" "<<"20"<<endl;    
}

int main(){
    escritura();

    return 0;
}

