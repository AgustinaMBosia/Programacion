#include <iostream>
using namespace std;

class rectangulo{
private:
	int base;
    int altura;
public:
	void setBase (int b);
	void setAltura (int h);
int getBase ();
	int getAltura ();
	int Superficie();

};

void rectangulo::setBase(int b){
    base=b;
}

void rectangulo::setAltura(int h){
    altura=h;
}

int rectangulo::getAltura(){
    return altura;
}

int rectangulo::getBase(){
    return altura;
}

int rectangulo::Superficie(){
    return base*altura;
}

