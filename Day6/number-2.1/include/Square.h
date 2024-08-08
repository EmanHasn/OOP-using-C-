#ifndef SQUARE_H
#define SQUARE_H
#include "Geoshape.h"


class Square : protected Geoshape
{
    public:
        float x;
        float y;
        float z;
        Square();
        Square(int);
        float CalcArea();
        float sumOfAllShapesArea( float, float, float);
        ~Square();

    protected:

    private:
};

#endif // SQUARE_H
