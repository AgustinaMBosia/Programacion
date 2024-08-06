/*Generar un mecanismo de herencia para gestionar una serie de productos.
Los productos tienen los siguientes atributos:
 Nombre
 Precio
Hay dos tipos de productos:
 Perecedero: tiene un atributo llamado días a caducar
 No perecedero: tiene un atributo llamado tipo
Definir los ructores necesarios y los métodos de carga y visualización de los
atributos
Definir el método calcularMonto con un parámetro entero que corresponde a la
cantidad de productos:
 En Producto, se calcula como el precio por la cantidad.
 En Perecedero, además de lo anterior, el precio se reducirá según los días a
caducar:
o Si le queda 1 día para caducar, se reducirá 4 veces el precio final.
o Si le quedan 2 días para caducar, se reducirá 3 veces el precio final.
o Si le quedan 3 días para caducar, se reducirá a la mitad de su precio
final.
 En NoPerecedero, el cálculo es igual que en Producto
Realizar un programa principal que haga uso de las clases.*/

#include <iostream>

using namespace std;

class Producto {
protected:
    string nombre;
    double precio;

public:
    Producto( string& _nombre, double _precio)
        : nombre(_nombre), precio(_precio) {}

    virtual double calcularMonto(int cantidad)  = 0;

    virtual void cargarDatos();

    virtual void mostrarDatos() ;
};







class Perecedero : public Producto {
private:
    int diasACaducar;

public:
    Perecedero( string& _nombre, double _precio, int _diasACaducar)
        : Producto(_nombre, _precio), diasACaducar(_diasACaducar) {}

    double calcularMonto(int cantidad)  override ;
    void cargarDatos() override ;
    void mostrarDatos()  override;
};





class NoPerecedero : public Producto {
private:
    string tipo;

public:
    NoPerecedero( string& _nombre, double _precio,  string& _tipo) : Producto(_nombre, _precio), tipo(_tipo) {}

    double calcularMonto(int cantidad)  override ;
    void cargarDatos() override ;

    void mostrarDatos()  override ;
};


