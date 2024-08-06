#include <iostream>
using namespace std;

class Base
{
    public:
        Base(){cout << "Constructor Base" << endl;}
        ~Base(){cout << "Destructor Base" << endl;}
};

class Derivada : public Base
{
    public:
        Derivada(){cout << "Constructor Derivada" << endl;}
        ~Derivada(){cout << "Destructor Derivada" << endl;}
};

int main()
{
    Base *ptr = new Derivada;
    delete ptr;
    return 0;
}