#include <iostream>
#include "ej1.h"
using namespace std;

fecha::fecha(int d, int m, int a):dia(d), mes(m), year(a){}

fecha::fecha():dia(1), mes(1), year(1900){}


void fecha ::operator+( fecha fecha2){
        dia=dia+fecha2.dia;
        mes=mes+fecha2.mes;
        year=year+fecha2.year;

        if(dia>=31){
            dia=dia-30;
            mes++;
        }

        if(mes>12){
            mes=mes-12;
            year++;
        }
}

void fecha ::operator-( fecha fecha2){
        dia=dia-fecha2.dia;
        mes=mes-fecha2.mes;
        year=year-fecha2.year;

        if(dia<1){
            dia=30+dia;
            mes--;
        }

        if(mes<1){
            mes=12+mes;
            year--;
        }
}

void fecha :: operator++ (){
    dia++;

    if(dia>=31){
            dia=dia-30;
            mes++;
        }

    if(mes>12){
            mes=mes-12;
            year++;
        }
}

void fecha :: operator-- (){
    dia--;

    if(dia<1){
            dia=30+dia;
            mes--;
        }

    if(mes<1){
            mes=12+mes;
            year--;
    }
}


