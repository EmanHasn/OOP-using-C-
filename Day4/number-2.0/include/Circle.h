#ifndef CIRCLE_H
#define CIRCLE_H
#include "Geoshape.h"


class Circle : public Geoshape
{
    public:
        Circle();
        Circle(int);
        float CalcArea();
        ~Circle();

    protected:

    private:
};

#endif // CIRCLE_H
