#ifndef VECTOR_H
#define VECTOR_H
#include "punto.h"

class vector1
{
    public:
        punto inicio, fin;
        vector1();
        void imprimir();
        void modificar_inicio(double nx,double ny);
        void modificar_fin(double nx,double ny);
        double calculo_modulo();
};

#endif // VECTOR_H
