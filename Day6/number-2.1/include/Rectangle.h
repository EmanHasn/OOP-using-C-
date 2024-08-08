#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "geoshape.h"


class Rectangle : public Geoshape
{
    public:
        float x;
        float y;
        float z;
        Rectangle();
        Rectangle(int,int);
        //CalcArea
        float CalcArea();
        float sumOfAllShapesArea( float, float, float);
        ~Rectangle();
};

#endif // RECTANGLE_H
