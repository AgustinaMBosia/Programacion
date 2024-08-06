/*Un número primo es un número entero positivo X que tiene solamente dos divisores 
distintos: 1 y X. Los primeros números enteros primos son 2, 3, 5, 7, 11 y 13. 
Un numero primo D se llama divisor primo de un entero positivo P si existe un entero 
positivo K tal que D * K = P. Por ejemplo, 2 y 5 son divisores primos de 20. 
Suponiendo que se dan dos enteros positivos N y M, obtener una función de retorno 
boolean que permita verificar N y M tienen el mismo conjunto de divisores primos.*/

#include <iostream>
using namespace std;


//carga de los valores
void carga(int &a, int &b){
        cout << "ingrese el valor A"<<endl;
        cin >> a;

        cout << "ingrese el valor B"<<endl;
        cin >> b;

        if(b<a){
            int num;
            num=a;
            a=b;
            b=num;
        }

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

//si es primo verifica que sea divisor de ambos y los guarda en el archivo res
bool funcion (int a, int b, int res[], int &num) {

    for (int i = 1; i < b; i++)
    {
        if(primo(i)){

            if((b%i)==0){

                if((a%i)==0){

                    res[num]=i;
                    num++;

                }
                if((a%i)!=0){
                    num=0;
                    return false;
                }
            
            }

            if((a%i)==0){

                if((b%i)!=0){
                    num=0;
                    return false;
                }
            
            }
        }
    }

    return true;
    
}

//muestra resultados
void show (int res[], int cant){
    if(cant!=0 and funcion){
        cout<< "Los divisores primos comunes son: ";

        for (int i = 0; i < cant; i++)
        {
            cout<<res[i]<<" ";
        }
    }
    else{
        cout<<"no hay divisores primos comunes entre A y B";
    }
}

int main(){
    int a,b;
    int num=0;
    int res[100]= {0};

    carga(a,b);
    funcion(a,b,res,num);
    show(res,num);
}

