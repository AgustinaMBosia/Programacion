#include <iostream>

using namespace std;

float num1,num2,done;

float div(float num1,float num2){
    float div;
    div=num1/num2;
    if (div<0){
        div=div*-1;
    }
    return(div);
}

int main(){

    cout<<"ingrese dos números y se verá cuantas veces está contenido en otro: "<<endl;
    cin>>num1;
    cin>>num2;

    if (num1<num2){
        done=num1;
        num1=num2;
        num2=done;
    }

    float resul=div(num1,num2);

    if (resul==1){
        cout<<"el nro "<<num2<<" está contenido "<<resul<<" vez en el nro "<<num1;
    }
    else {
        cout<<"el nro "<<num2<<" está contenido "<<resul<<" veces en el nro "<<num1;
    }
    return 0;
}

