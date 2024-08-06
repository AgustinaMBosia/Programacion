#include <iostream>
using namespace std;
int n;

int factorial(int num){
    int resultado;
    resultado=1;
    for(int i=1;i<=num;i++){
        resultado*=i;
    }

    return resultado;

}

int main(){
    cout<<"ingrese un número"<<endl;
    cin>>n;

    int resul=factorial(n);
    cout<<"el factorial de "<<n<<" es "<<resul;

    return 0; 
}