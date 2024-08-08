#include "rectangle.h"
#include "geoshape.h"
Rectangle::Rectangle(int w,int h) : Geoshape(w,h)
{}

float Rectangle::CalcArea()
{
    return dim1*dim2;
}
float Rectangle::sumOfAllShapesArea( float x, float y, float z)
{
    return x + y +z;
}
Rectangle::~Rectangle(){}
