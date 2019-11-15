#include "Polygon.h"
#include <iostream>
using namespace std;
Polygon::Polygon()
{
    widht=0;
    height=0;
}
Polygon::Polygon(int a,int b)
{
    widht=a;
    height=b;
}
int Polygon::GetWidht()
{
    return widht;
}
int Polygon::GetHeight()
{
    return height;
}
int Polygon::area()
{
    return 0;
}
void Polygon::printarea()
{
    cout<<this->area()<<endl;
}
