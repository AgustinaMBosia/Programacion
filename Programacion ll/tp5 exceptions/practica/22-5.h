#include <iostream>
#include <cmath>
using namespace std;

class figura{
        
    public:

        int altura;
        int base; 
        int radio;


        figura(){
            altura=0;
            base=0;
            radio=0;
        }

        figura (int a, int b,int r){
            altura=a;
            base=b;
            radio=r;
        }

        virtual int area(int cosa){
            int are=0;
            switch (cosa)
            {
            case 1:
                 are= altura*altura;
                break;
            
            case 2:
                 are=(base*altura)/2;
                break;
            
            default: 
                cout<<"no";
                break;
            } 
            return are;
        }

};


class tridim: public figura{
    private:
        int profundidad;
    public: 
        tridim(){
            profundidad=1;
            altura=2;
            base=3;
        }

        tridim(int a, int b, int p,int r){
            altura=a;
            base=b;
            profundidad=p;
            radio=r;
        }
        int areacuadrado(){
            int are= 6* pow(altura,2);
            return are;
        }

        int area(int cosa) override{
            int are=0;
            switch (cosa)
            {
            case 1:
                are= 6* pow(altura,2);
                break;
            
            case 2:
                are=altura*3.14159*pow(radio,2);
                break;
            default: 
                cout<<"no";
                break;

            
            }

            return are;
        }
        

};