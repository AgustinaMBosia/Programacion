/*Leer los n elementos de un vector y ordenarlo de mayor a menor*/
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> v){
    for (int i=0; i<v.size()-1; i++){
        for (int j=0; j<4-1-i; j++){
            if(v[j]<v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

void show(vector<int> v){
    for (int i =0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> v={8,3,9,1};
    bubbleSort(v);
    show(v);

    return 0;

}