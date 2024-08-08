#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"

class Circle
{
    private:
        Point center;
        int raduis;
    public:
        Circle();
        Circle(int, int, int);
        Circle(Point , int);
        void setColor();
        void Draw();
         void Text();
};

#endif // CIRCLE_H
