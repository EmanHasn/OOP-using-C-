#ifndef CIRCLE_H
#define CIRCLE_H
#include "Geoshape.h"


class Circle : protected Geoshape
{
    public:
        float x;
        float y;
        float z;
        Circle();
        Circle(int);
        float CalcArea();
        float sumOfAllShapesArea( float, float, float);
        ~Circle();
};

#endif // CIRCLE_H
