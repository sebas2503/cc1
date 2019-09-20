#include "punto.h"
#include <iostream>
using namespace std;

punto::punto()
{
    x=0;
    y=0;
}

punto::punto(double nx, double ny)
{
    x=nx;
    y=ny;

}
void punto::modificar(double nx, double ny){
    x +=nx;
    y +=ny;
};
void punto::imprimir(){
    cout<<"("<<x<<","<<y<<")";
};
