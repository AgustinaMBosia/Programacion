#include <iostream>
#include <vector>
using namespace std;

/*Realizar un programa que permita gestionar los datos de docentes, alumnos y sus inscripciones en
materia de una Universidad.
Datos Docentes: DNI, Apellido, Nombres, mail, título
Datos Alumnos: DNI, Apellido, Nombres, Carrera, mail, edad
Materia: Código, Nombre, Nota
Acciones a desarrollar:
Docentes:
- Anotar en Materia
- Consulta de las materias que enseña
- Modificación de datos - Consulta
Alumnos:
- Modificación de datos - Consulta
- Inscripción en materia - Carga de Nota
Sistema de Gestión:
1. Alta (Alumnos y Docentes)
2. Inscribir a materia (Alumnos)
3. Anotar titular (Docente)
4. Cargar Nota (Alumnos)
5. Modificar Datos (Alumnos y Docentes)
6. Salir

*/

class persona{

    public:
        string nombre;
        int dni;
        persona();
        void setTitular(string t);
        void setDni(int d);

        string getTitular();
        int getDni();
};


class materia{
    private:
        int codigo, nota;
        string nombre;
    public:
        materia();
        void setNombre(string nom);
        string getnombre();
        void setCodigo(int cod);
        int getCodigo();
        void setNota(int no);
        int getNota();
};


/*
Formas: 
persona p;
persona P("x", 17);

*/

class docente:public persona{
    private:
        string titulo;
        string mail;
        materia materiasDictadas[100];

    public:
        docente();
        docente(string ti, string nom, int dni_);
        void anotarEnMateria(string mate, int n, int cod);
        void consultaMateria(int n);

        
        void setTitulo(string ti);
        string getTitulo();
        void setMail(string m);
        string getMail();
};







class alumno:public persona{
    private:
        int edad;
        string carrera;
        materia materiasTomadas[100];
    public:
        alumno();
        void setEdad(int eda);
        int getEdad();
        void setCarrera(string c);
        string getCarrera();
};






