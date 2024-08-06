#include <iostream>

using namespace std;

float f_suma (float num1, float num2){

    float suma;
    suma=num1+num2;
    return (suma);
    
}

float resta (float num1, float num2){

    float resta;
    resta=num1-num2;
    return (resta);
    
}
float division (float num1, float num2){

    float division;
    division=num1/num2;
    return (division);
    
}

float multip (float num1, float num2){

    float multip;
    multip=num1+num2;
    return (multip);
    
}


int res;
float num1,num2;

int main (){
    

    cout<<"ingrese dos numeros:"<<endl;
    cin>>num1;
    cin>>num2;

    cout << "que operación desea ejecutar?"<< endl;
    cout << "1- suma"<<endl;
    cout << "2- resta"<<endl;
    cout << "3- división"<<endl;
    cout << "4- multiplicación"<<endl;
    cin>>res;

    while (res!=1 and res!=2 and res!=3 and res!=4){
        cout<<"ingrese un número dentro del parametro dado: (1/2/3/4)"<<endl;
        cin>>res;
    }

    float resuls= f_suma(num1,num2);

    float resulr= resta(num1,num2);

    float resuld= division(num1,num2);

    float resulm= multip(num1,num2);

    switch (res){

    case 1:
        cout <<"la suma entre "<<num1<<" y "<<num2<<" es igual a "<<resuls;

        break;

    case 2:
        cout<<"la resta entre "<<num1<<" y "<<num2<<" es igual a "<<resulr<<endl;

        break;

    case 3:
        cout<<"la división entre "<<num1<<" y "<<num2<<" es igual a "<<resuld<<endl;

        break;

    case 4:
        cout<<"la multiplicación entre "<<num1<<" y "<<num2<<" es igual a "<<resulm<<endl;
        break;
    }
    return 0;
}

