#include "sqare.h"
#include "geoshape.h"

Sqare::Sqare()
{
}
Sqare::Sqare(int a):Geoshape(a)
{
}
float Sqare::CalcArea()
{
    return dim1*dim2;
}

Sqare::~Sqare()
{
}
