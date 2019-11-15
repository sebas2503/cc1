#include <iostream>
#include <Polygon.h>
#include <ArrayPolygons.h>
using namespace std;

int main()
{
    Polygon Cuadrado(1,4);
    Polygon Triangulo(6,9);
    Polygon a[]={Cuadrado,Triangulo};
    ArrayPolygons x(a,2);
    Polygon Tetraedro(9,0);
    Polygon Hexagono(5,7);
    Polygon f(8,7);
    x.InsertarFinal(Hexagono);
    x.Insertar(Tetraedro,2);
    ArrayPolygons y(x);
    y.Insertar(f,1);
    x.MostrarArr();
    y.MostrarArr();
    return 0;
}
