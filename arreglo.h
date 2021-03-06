#ifndef ARREGLO_H
#define ARREGLO_H
#include <iostream>
using namespace std;
#include "Empleado.h"

class Arreglo
{
    public:
        int cont;
        Empleado *empleados[50];
        bool insertar(int pos, Empleado *emp);
        Empleado* inicio();
        Empleado* fin();
        Empleado* siguiente(int pos);
        Empleado * recuperar(int pos);
        bool eliminar(int pos);
        bool mover(int from, int to);
        void imprimir();
        Arreglo();
        virtual ~Arreglo();
    protected:
    private:
};

#endif // ARREGLO_H
