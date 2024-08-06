#include <iostream>

using namespace std;

int edad,com,beb, agua1,agua2,agua3,gas1,gas2,gas3,vino1,vino2,vino3,cer1,cer2,cer3,asa1,asa2,asa3,pas1,pas2,pas3,ensa1,ensa2,ensa3;
string ans;

int main(){

    ans="y";

    while (ans=="y"){

    cout<<"ingrese su edad: "<<endl;
    cin>>edad;

    if (edad<18){
        cout<<"se deben tener al menos 18 años para esta prueba."<<endl;
            cout<<"Desea agregar otra persona a la encuesta? (y/n)";
            cin>>ans;
    }
    

    if (edad>=18){

    cout<<"ingrese su bebida preferida (1- agua, 2- gaseosa, 3- vino, 4- cerveza):"<<endl;
    cin>>beb;

    cout<<"ingrese su comida Preferida (1- asado, 2- pastas, 3- ensaladas):"<<endl;
    cin>>com;
    




    if (edad<25 and edad>=18){
          switch(beb){
        case 1:

        agua1=agua1+1;
         
         break;

        case 2:

        gas1=gas1+1;
         
         break;

        case 3:

        vino1=vino1+1;
         
         break;

        case 4:

        cer1=cer1+1;
         
         break;

    }

    switch(com){
        case 1:

        asa1=asa1+1;
         
         break;

        case 2:

        pas1=pas1+1;
         
         break;

        case 3:

        ensa1=ensa1+1;
         
         break;
    }

    }

    if(edad<=50 and edad>=25){

       switch(beb){
        case 1:

        agua2=agua2+1;
         
         break;

        case 2:

        gas2=gas2+1;
         
         break;

        case 3:

        vino2=vino2+1;
         
         break;

        case 4:

        cer2=cer2+1;
         
         break;

    }

    switch(com){
        case 1:

        asa2=asa2+1;
         
         break;

        case 2:

        pas2=pas2+1;
         
         break;

        case 3:

        ensa2=ensa2+1;
         
         break;
    }


    }

    if(edad>50){

             switch(beb){
        case 1:

        agua3=agua3+1;
         
         break;

        case 2:

        gas3=gas3+1;
         
         break;

        case 3:

        vino3=vino3+1;
         
         break;

        case 4:

        cer3=cer3+1;
         
         break;

    }

    switch(com){
        case 1:

        asa3=asa3+1;
         
         break;

        case 2:

        pas3=pas3+1;
         
         break;

        case 3:

        ensa3=ensa3+1;
         
         break;
    }
    }

    cout<<"Desea agregar otra persona a la encuesta? (y/n)";
    cin>>ans;
    
    
    }
    }

    cout<<"-----------------------------------------"<<endl;
    
    cout<<"<25"<<endl;
    cout<<"agua:"<<agua1<<" gaseosa: "<<gas1<<" vino: "<<vino1<<" cerveza: "<<cer1<<endl;
    cout<<" "<<endl;
    cout<<"asado: "<<asa1<<" pastas: "<<pas1<<" ensaladas: "<<ensa1<<endl;
    cout<<" "<<endl;

        cout<<"entre 25 y 50"<<endl;
    cout<<"agua:"<<agua2<<" gaseosa: "<<gas2<<" vino: "<<vino2<<" cerveza: "<<cer2<<endl;
    cout<<" "<<endl;
    cout<<"asado: "<<asa2<<" pastas: "<<pas2<<" ensaladas: "<<ensa2<<endl;
    cout<<" "<<endl;

        cout<<">50"<<endl;
    cout<<"agua:"<<agua3<<" gaseosa: "<<gas3<<" vino: "<<vino3<<" cerveza: "<<cer3<<endl;
    cout<<" "<<endl;
    cout<<"asado: "<<asa3<<" pastas: "<<pas3<<" ensaladas: "<<ensa3<<endl;
    cout<<" "<<endl;
    

}
