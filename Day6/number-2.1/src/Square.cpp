#include "geoshape.h"
#include"Square.h"
Square::Square()
{

}
Square::Square(int a):Geoshape(a)
{

}
float Square::CalcArea()
{
    return dim1*dim2;
}
/*float sumOfAllShapesArea( float x, float y, float z)
{
    return x + y +z;
}*/
Square::~Square()
{

}
