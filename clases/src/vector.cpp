#include "vector.h"
#include <iostream>
#include <cmath>
using namespace std;
vector1::vector1()
{

};
 void vector1::imprimir(){
    inicio.imprimir();
    cout<<"-->";
    fin.imprimir();
};
void vector1::modificar_inicio(double nx,double ny){
    inicio.modificar(nx,ny);
};
void vector1::modificar_fin(double nx,double ny){
    fin.modificar(nx,ny);
};
double vector1::calculo_modulo(){
    int re_x= (fin.x - inicio.x)*(fin.x - inicio.x);
    int re_y = (fin.y - inicio.y)*(fin.y - inicio.y);
    double modulo = pow(re_x+re_y,0.5);
    return modulo;
};

