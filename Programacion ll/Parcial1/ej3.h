#include <iostream>
using namespace std;


class banco{
public:
    string nombre;
    banco();
};


class codigo{
    private:
        int codig;
    public:
        codigo();
        void setCodigo(int r);
        int getCodigo();
};

    



class sucursal: public banco{
    private:
        int numero;
        string responsable;
        codigo cod;
    public:

        sucursal(string nom, int num, string respo, int co);
        string getNombre();
        string getRespo();
        int getNum();
        int getCodigo();

};

    
