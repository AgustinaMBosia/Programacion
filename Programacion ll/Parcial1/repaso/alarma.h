#include <iostream>
using namespace std;


class reloj{
    private:
    int hora, minutos, segundos;
    int duracionAlarma;

    public:

    reloj();
    void setHora(int h);
    int getHora();

    void setMinutos(int m);
    int getMinutos();

    void setSegundos(int s);
    int getSegundos();

    void operator++();

    void setAlarma();

};

class alarma{
    private:
    int hora, minutos, segundos;
    int duracionAlarma;

    public:

    alarma(){};
    void setHora(int h);
    int getHora();

    void setMinutos(int m);
    int getMinutos();

    void setSegundos(int s);
    int getSegundos();

};

class sensor{
    private:
    int kelvin;
    int celsius;
    int faren;

    public:
    sensor();
    void setKelvin(int k);
    int getKelvin();

    void setCelsius(int c);
    int getCelsius();

    void setFaren(int f);
    int getFaren();
};

class aparato{
    public:
        reloj hora;
        sensor temp;
        alarma buzz;
};