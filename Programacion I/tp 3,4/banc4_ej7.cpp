#include <iostream>

using namespace std;
string resul;
int n;

string triangular(int num){
    string res;
    int comp,i;
    comp=0;
    i=1;


    while (comp<num){
            comp=comp+i;
            i++;
    }


    if (comp!=num){
         res= " no es triangular";
    }
    else if (comp==num){
         res=" es triangular";
    }

    return res;
}
int main(){

    cout <<"ingrese un num para saber si es triangular:";
    cin>>n;

     resul=triangular(n);

    cout<<"el número "<<n<<resul;


}