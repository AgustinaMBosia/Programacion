/*Realizar una clase que permita representar una fecha.
- Definir los datos miembros de la clase.
- Definir si fuera necesario funciones de carga y muestra de los datos miembro.
- Definir un constructor que inicializa la fecha a una fecha dada.
- Definir un constructor que inicializa la fecha en 01/01/1900.
- Definir sobrecargas de los siguientes operadores:
o ++ y – incrementa o decrementa la fecha en 1 día.
o + y – suma a una fecha un cierto número de días.
 Realizar un programa principal que haga uso de la clase.*/
#include <iostream>
#include "ej1.h"

using namespace std;

int main(){
    fecha date(3, 5, 2004);
    fecha date1;

     cout << "la fecha de hoy es (c1): " << date.getDia() << "/" << date.getMes() << "/" << date.getYear() << " c2: " << date1.getDia() << "/" << date1.getMes() << "/" << date1.getYear();

    int rta=0;

    while (rta==0)
    {
        cout << "menú: " << endl;
        cout << "1. sumar c1 y c2" << endl;
        cout << "2. restar c1 - c2" << endl;
        cout << "3. sumar un dia" << endl;
        cout << "4. restar un dia" << endl;
        cout << "5. salir" << endl;
    
        cin >> rta;

        switch (rta)
        {
            case 1:
                date+date1;
                cout << "la suma de las fechas es: " << date.getDia() << "/" << date.getMes() << "/" << date.getYear() << endl;
                break;
            case 2:
                date-date1;
                cout << "la resta de las fechas es: " << date.getDia() << "/" << date.getMes() << "/" << date.getYear() << endl;
                break;
            case 3:
                ++date;
                cout << "se suma un dia: " << date.getDia() << "/" << date.getMes() << "/" << date.getYear() << endl;
                break;
            case 4:
                --date;
                cout << "se resta un dia: " << date.getDia() << "/" << date.getMes() << "/" << date.getYear() << endl;
                break;
            case 5:
                return 0;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;
        }

        cout << "desea volver al menú? (si=0 no=1)" << endl;
        cin >> rta;
    }

    return 0;
}