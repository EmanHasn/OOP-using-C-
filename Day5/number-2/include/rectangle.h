#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "geoshape.h"


class Rectangle : public Geoshape
{
    private:

    public:
        Rectangle();
        Rectangle(int,int);
        //CalcArea
        float CalcArea();
        ~Rectangle();
};

#endif // RECTANGLE_H
