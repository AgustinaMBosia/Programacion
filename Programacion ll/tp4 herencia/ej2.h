/* Obtener un programa para gestionar los empleados de un comercio.
Los empleados se definen por:
 Nombre
 Edad
 Salario
Existen dos tipos de empleados: repartidor y comercial.
El comercial, aparte de los atributos anteriores, tiene uno más llamado comisión
(número real).
El repartidor, aparte de los atributos de empleado, tiene otro llamado zona
(número entero).
Se debe generar un mecanismo de Herencia con Empleado (clase padre
abstracta) y Comercial y Repartidor (clases hijas).
Crear los ructores, métodos para cargar y visualizar atributos y un método
llamado toString para mostrar la información completa del individuo.
Definir también un método llamado plus, que aumenta el salario del empleado en
3000$ según las siguientes condiciones:
 En comercial, si tiene más de 30 años y cobra una comisión de más del 12%
se le aplicara el plus.
 En repartidor, si tiene menos de 25 años y reparte en la zona 3
Realizar un programa principal que haga uso de las clases.*/
#include <iostream>
#include <string>

using namespace std;

class Empleado {
public:
    string nombre;
    int edad;
    double salario;


    Empleado( const string& _nombre, int _edad, double _salario);

    virtual void cargarDatos() = 0;

    virtual void mostrarDatos();

    virtual string toString()  = 0;

    virtual void plus() = 0;
};

class Comercial : public Empleado {
private:
    double comision;

public:
    Comercial(const string& _nombre, int _edad, double _salario, double _comision);

    void cargarDatos() override ;

    void mostrarDatos()  override ;

    string toString()  override ;
    void plus() override ;
};

class Repartidor : public Empleado {
private:
    int zona;

public:
    Repartidor( const string& _nombre, int _edad, double _salario, int _zona);
    void cargarDatos() override;
    void mostrarDatos()  override ;

    string toString()  override;
    
    void plus() override;
};

