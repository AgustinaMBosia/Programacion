/*Dado un arreglo y un número k determinar si el número está presente dentro del arreglo,
en ese caso dar su ubicación.*/

#include <iostream>
#include <vector>
using namespace std;

int lugar(vector<int> v, int n){

    for (int i=0; i<v.size();i++){
        if(v[i]==n){
            return i;
        }

    }

    return 0;

}

int main(){
    int n;
    vector<int> v={1,3,4,5};
    cout<<"que valor quiere buscar?";
    cin>>n;
    cout<< "el número k aparece en el espacio "<<lugar(v,n)<< " del arreglo";
}