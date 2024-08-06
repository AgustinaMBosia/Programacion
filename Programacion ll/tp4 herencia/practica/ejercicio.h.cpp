#include <iostream>
using namespace std;
#include "ejercicio.h"

// definicion Persona
persona::persona(){
    nombre= "n";
    dni= 0;
}

void persona::setTitular(string t){
    nombre=t;
}

void persona::setDni(int d){
    dni=d;
}

string persona::getTitular(){
    return nombre;
}

int persona::getDni(){
    return dni;
}


//Definición Docente



docente::docente(string ti, string nom, int dni_){
    titulo= ti;
    nombre= nom;
    dni=dni_;
}


void docente::anotarEnMateria(string mate, int n, int cod){
    materiasDictadas[n].setNombre(mate);
    materiasDictadas[n].setCodigo(cod);
}

void docente::consultaMateria(int n){
    for (int i=0; i<n+1; i++){
        cout<<materiasDictadas[i].getnombre()<<": codigo: "<< materiasDictadas[i].getCodigo()<<endl;
    }
}


void docente::setTitulo(string ti){
    titulo=ti;
}

string docente::getTitulo(){
    return titulo;
}

void docente::setMail(string m){
    mail=m;
}

string docente::getMail(){
    return mail;
}


//Definicion Alumno

alumno::alumno(){

}

void alumno::setEdad(int eda){
    edad=eda;
}

int alumno::getEdad(){
    return edad;
}

void alumno::setCarrera(string c){
    carrera=c;
}

string alumno::getCarrera(){
    return carrera;
}

//Definición Materia


materia::materia(){

}

void materia::setNombre(string nom){
    nombre=nom;
}

string materia::getnombre(){
    return nombre;
}

void materia::setCodigo(int cod){
    codigo=cod;
}

int materia::getCodigo(){
    return codigo;
}

void materia::setNota(int no){
    nota=no;
}

int materia::getNota(){
    return nota;
}