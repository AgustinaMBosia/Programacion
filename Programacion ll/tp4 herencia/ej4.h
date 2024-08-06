/*Se desea realizar una aplicación para gestionar la información sobre las
personas vinculadas a una facultad.
Las personas se pueden clasificar en tres tipos:
 Estudiantes
 Profesores
 Personal de servicio.
A continuación, se detalla qué tipo de información debe gestionarse:
Por cada persona, se tiene:
 Nombre y Apellido
 DNI
 Estado civil.
Con respecto a los empleados, sin importar de que tipo que sean, se tiene el año
de incorporación a la facultad y el número de oficina asignado.
Para los estudiantes, se requiere almacenar el curso en el que están
matriculados.
Para los profesores, es necesario gestionar a qué departamento pertenecen
(lenguajes, matemáticas, arquitectura, etc.).
Para el personal de servicio, se debe registrar en que sección están asignados
(biblioteca, decanato, secretaría, etc.)
Se pide:
Definir la jerarquía de clases.
Generar las clases definidas en las que, además de los constructores, hay que
desarrollar los métodos para:
 Cambio del estado civil de una persona.
 Reasignación de despacho a un empleado.
 Matriculación de un estudiante en un nuevo curso.
 Cambio de departamento de un profesor.
 Traslado de sección de un empleado del personal de servicio.
 Imprimir toda la información de cada tipo de individuo.
Generar un programa de prueba que instancie objetos de los distintos tipos y
pruebe los métodos desarrollados.*/


#include <iostream>
#include <string>

using namespace std;

// Clase base Persona
class Persona {
protected:
    string nombreApellido;
    string DNI;
    string estadoCivil;

public:
    Persona(const string& _nombreApellido, const string& _DNI, const string& _estadoCivil);

    void cambiarEstadoCivil(const string& nuevoEstadoCivil) ;

    virtual void imprimirInformacion() const = 0;
};


// Clase Estudiante q sale de persona
class Estudiante : public Persona {
private:
    string cursoMatriculado;

public:
    Estudiante(const string& _nombreApellido, const string& _DNI, const string& _estadoCivil, const string& _cursoMatriculado) ;

    void matricularEnCurso(const string& nuevoCurso) ;

    void imprimirInformacion() const override ;
};






// Clase derivada de Profesor
class Profesor : public Persona {
private:
    string departamento;

public:
    Profesor(const string& _nombreApellido, const string& _DNI, const string& _estadoCivil, const string& _departamento);

    void cambiarDepartamento(const string& nuevoDepartamento) ;

    void imprimirInformacion() const override ;
};




// Clase derivada PersonalServicio
class PersonalServicio : public Persona {
private:
    string seccionAsignada;

public:
    PersonalServicio(const string& _nombreApellido, const string& _DNI, const string& _estadoCivil, const string& _seccionAsignada);

    void trasladarSeccion(const string& nuevaSeccion) ;

    void imprimirInformacion() const override;
};

