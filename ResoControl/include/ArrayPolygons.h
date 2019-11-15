#ifndef ARRAYPOLYGONS_H
#define ARRAYPOLYGONS_H
#include <Polygon.h>
class ArrayPolygons
{
    public:
        ArrayPolygons();
        ArrayPolygons(Polygon [],int);
        ArrayPolygons(ArrayPolygons &);
        void InsertarFinal(Polygon);
        void Insertar(Polygon,int);
        void Eliminar();
        ~ArrayPolygons();
        void MostrarArr();
    private:
        Polygon *arr;
        int size1;
        void RediArr(int);
};

#endif // ARRAYPOLYGONS_H
