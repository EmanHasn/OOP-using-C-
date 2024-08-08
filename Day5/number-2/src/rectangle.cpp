#include "rectangle.h"
#include "geoshape.h"
Rectangle::Rectangle(int w,int h) : Geoshape(w,h)
{}

float Rectangle::CalcArea()
{
    return dim1*dim2;
}
Rectangle::~Rectangle(){}
