#include <iostream>
#include "alarma.h"
using namespace std;


reloj :: reloj(){
    hora=00;
    minutos=00;
    segundos=00;
}

void reloj :: setHora(int h){
    hora=h;
}

int reloj::getHora(){
    return hora;
}

void reloj :: setMinutos(int m){
    minutos=m;
}

int reloj::getMinutos(){
    return minutos;
}

void reloj :: setSegundos(int s){
    segundos=s;
}

int reloj::getSegundos(){
    return segundos;
}

void reloj::setAlarma(){

}

void reloj::operator++(){
    segundos++;
    
    if (segundos==60){
        segundos =0;
        minutos++;
    }
    if (minutos==60){
        minutos=0;
        hora++;
    }
    if (hora==24){
        hora=0;
    }
    
}

sensor::sensor(){

}

void sensor::setKelvin(int k){
    kelvin=k;

}

int sensor::getKelvin(){
    return kelvin;
}

void sensor::setCelsius(int c){
    celsius=c;
    kelvin= c+100;
    faren= c*100;
}

int sensor::getCelsius(){
    return celsius;
}

void sensor::setFaren(int f){
    faren=f;
}

int sensor::getFaren(){
    return faren;
}

void alarma :: setHora(int h){
    hora=h;
}

int alarma::getHora(){
    return hora;
}

void alarma :: setMinutos(int m){
    minutos=m;
}

int alarma::getMinutos(){
    return minutos;
}

void alarma :: setSegundos(int s){
    segundos=s;
}

int alarma::getSegundos(){
    return segundos;
}



