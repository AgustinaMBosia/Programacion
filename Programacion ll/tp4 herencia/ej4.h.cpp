#include <iostream>
#include "ej4.h"
using namespace std;



    Persona::Persona(const string& _nombreApellido, const string& _DNI, const string& _estadoCivil)
         {
            nombreApellido=_nombreApellido;
             DNI=_DNI;
            estadoCivil=_estadoCivil;
         }

    void Persona::cambiarEstadoCivil(const string& nuevoEstadoCivil) {
        estadoCivil = nuevoEstadoCivil;
    }


    Estudiante::Estudiante(const string& _nombreApellido, const string& _DNI, const string& _estadoCivil, const string& _cursoMatriculado)
        : Persona(_nombreApellido, _DNI, _estadoCivil) {
            cursoMatriculado=_cursoMatriculado;
        }

    void Estudiante::matricularEnCurso(const string& nuevoCurso) {
        cursoMatriculado = nuevoCurso;
    }

    void Estudiante::imprimirInformacion() const  {
        cout << "Nombre y Apellido: " << nombreApellido << endl;
        cout << "DNI: " << DNI << endl;
        cout << "Estado Civil: " << estadoCivil << endl;
        cout << "Curso Matriculado: " << cursoMatriculado << endl;
    }



    Profesor::Profesor(const string& _nombreApellido, const string& _DNI, const string& _estadoCivil, const string& _departamento)
        : Persona(_nombreApellido, _DNI, _estadoCivil), departamento(_departamento) {}

    void Profesor::cambiarDepartamento(const string& nuevoDepartamento) {
        departamento = nuevoDepartamento;
    }

    void Profesor::imprimirInformacion() const  {
        cout << "Nombre y Apellido: " << nombreApellido << endl;
        cout << "DNI: " << DNI << endl;
        cout << "Estado Civil: " << estadoCivil << endl;
        cout << "Departamento: " << departamento << endl;
    }



    PersonalServicio::PersonalServicio(const string& _nombreApellido, const string& _DNI, const string& _estadoCivil, const string& _seccionAsignada)
        : Persona(_nombreApellido, _DNI, _estadoCivil), seccionAsignada(_seccionAsignada) {}

    void PersonalServicio::trasladarSeccion(const string& nuevaSeccion) {
        seccionAsignada = nuevaSeccion;
    }

    void PersonalServicio::imprimirInformacion() const  {
        cout << "Nombre y Apellido: " << nombreApellido << endl;
        cout << "DNI: " << DNI << endl;
        cout << "Estado Civil: " << estadoCivil << endl;
        cout << "Sección Asignada: " << seccionAsignada << endl;
    }

