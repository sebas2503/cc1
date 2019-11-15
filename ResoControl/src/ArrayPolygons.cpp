#include "ArrayPolygons.h"
#include <iostream>
#include <Polygon.h>
using namespace std;
ArrayPolygons::ArrayPolygons()
{
    size1=0;
    arr= new Polygon[0];
}
ArrayPolygons::ArrayPolygons(Polygon a[],int size1)
{
    this->size1=size1;
    arr=new Polygon[size1];
    for(int i=0;i<size1;i++)
        arr[i]=a[i];
}
ArrayPolygons::ArrayPolygons(ArrayPolygons &s)
{
    size1=s.size1;
    arr=new Polygon[s.size1];
    for(int i=0;i<s.size1;i++)
        arr[i]=s.arr[i];
}
ArrayPolygons::~ArrayPolygons()
{
    cout<<"Destructor invocado"<<endl;
    delete [] arr;
}
void ArrayPolygons::RediArr(int x)
{
    size1=x;
    Polygon *tmp=new Polygon[size1];
    for(int f=0;f<size1;f++)
        tmp[f]=arr[f];
    delete [] arr;
    arr=tmp;
}
void ArrayPolygons::InsertarFinal(Polygon q)
{
    RediArr(++size1);
    arr[size1-1]=q;
}
void ArrayPolygons::Insertar(Polygon e,int pos)
{
    RediArr(++size1);
    int m=size1-1;
    for(int x=pos;x<size1;x++)
    {
        arr[m]=arr[m-1];
        m--;
    }
    arr[pos]=e;
}
void ArrayPolygons::Eliminar()
{
    RediArr(--size1);

}
void ArrayPolygons::MostrarArr()
{
    for(int i=0;i<size1;i++)
        {
            cout<<arr[i].GetWidht()<<endl;
        }
}
