/*Un semi-primo es un número natural que es el producto de dos números primos no 
necesariamente distintos. Por ejemplo, los números 4, 6, 9, 10, 14, 15, 21, 22, 25, 26, son 
semi-primos. Dado un numero entero X determinar mediante una función de retorno 
boolean si se trata de un número semi-primo. */

#include <iostream>
using namespace std;

//carga de los valores
void carga(int &a){
        cout << "ingrese el valor A"<<endl;
        cin >> a;

}

//ver que el divisor sea primo
bool primo(int n){

    int res=0;
    for(int i=1; i<=n; i++){
        if((n%i)==0){
            res ++;
        }
    }

    if (res==2){
        return true;
    }
    else{
        return false;
    }
}

bool semiprimo (int b, int res[]) {

    for (int i = 2; i < b; i++)
    {
        if(primo(i)){

            if((b%i)==0){

                int otroprim = b/i;
                if (primo(otroprim))
                {
                    res[0]=i;
                    res[1]=otroprim;
                    return true;
                }
                
            
            }
        }
    }

    return false;
    
}

//muestra resultados
void show (int a, int res[]){
    if(semiprimo(a,res)){
        cout<< "Los divisores primos que multiplicados dan A son: "<< res[0]<<" y "<< res[1];
    }
    else{
        cout<<"no hay divisores primos que multiplicados den A ";
    }
}

int main(){
    int a;
    int res[2]= {0};

    carga(a);
    show(a,res);
}