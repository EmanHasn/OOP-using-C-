#include "Circle.h"
#include "Geoshape.h"

Circle::Circle()
{
}
Circle::Circle(int a) : Geoshape(a)
{

}
float Circle::CalcArea()
{
    return (3.14*dim1*dim2)/4;
}

Circle::~Circle()
{

}
