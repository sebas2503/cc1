#ifndef POLYGON_H
#define POLYGON_H


class Polygon
{
    public:
        Polygon();
        Polygon(int,int);
        int area();
        void printarea();
        int GetWidht();
        int GetHeight();
        void mostrar();
    protected:
        int widht,height;
};

#endif // POLYGON_H
