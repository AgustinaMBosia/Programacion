#include <iostream>
#include "ej4.h"
using namespace std;

    cronometro::cronometro() {
        horas=0;
        min=0;
        seg=0; 
    }

    void cronometro::show()  {
        cout << horas << "h(s) " << min << "m(s) " << seg << "s(s)"<<endl;
    }

    void cronometro::reset() {
        horas = 0;
        min = 0;
        seg = 0;
    }

    void cronometro::operator++() {
        for (int i=0; i<100; i++){
            for (int j=0; j<36000000;j++){

            }

            seg++;
            if (seg >= 60) {
            seg = 0;
            min++;
            if (min >= 60) {
                min = 0;
                horas++;
            }
            }
            show();

        }
        
    }