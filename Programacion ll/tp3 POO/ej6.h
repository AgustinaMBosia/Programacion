#include <iostream>
#include <string>

using namespace std;

class password {
private:
    int longitud;
    string contra;

public:
    password(int len) ;

    password() ;

    void generarPassword() ;

    int esFuerte() ;

    void mostrar();
};