#include "geoshape.h"
#include<iostream>
using namespace std;
Geoshape::Geoshape()
{
    dim1=dim2=0;
}
Geoshape::Geoshape(int val)
{
    dim1=dim2=val;
}
Geoshape::Geoshape(int _dim1,int _dim2)
{
    dim1=_dim1;
    dim2=_dim2;
}
//getter&setter
void Geoshape::setDim1(int _dim1)
{
    dim1=_dim1;
}
int Geoshape::getDim1()
{
    return dim1;
}
void Geoshape::setDim2(int _dim2)
{
    dim2=_dim2;
}
int Geoshape::getDim2()
{
    return dim2;
}
//CalcArea
float Geoshape::CalcArea()
{
   return 0;
}

Geoshape::~Geoshape()
{
}
