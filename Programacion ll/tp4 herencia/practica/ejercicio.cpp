#include <iostream>
#include "ejercicio.h"
using namespace std;

int main()
{
    docente doc("profe","carlos", 234562);
    int n=0;
    doc.anotarEnMateria("mates",n,3456);
    n++;
    doc.anotarEnMateria("lengua",n,34567);
    
    doc.consultaMateria(n);
    return 0;
}
