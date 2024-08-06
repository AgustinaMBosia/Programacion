#include <iostream>

using namespace std;

class racional {
private:
    int numerador;
    int denominador;
public:

    int mcm(int a, int b);
    void simplificar();

    racional(int num, int denom);

    void display() ;

    void operator+( racional otro);

    void operator-( racional otro);

    void operator++();

    void operator--() ;
    void operator+=(int num);
    void operator-=(int num);
};

