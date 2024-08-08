#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"
#include <graphics.h>

class Rect
{
    public:
        Rect();
        Rect(int,int,int,int);
        Rect(Point,Point);
        void Draw();
        ~Rect();
    private:
        Point P1;
        Point P2;
};

#endif // RECTANGLE_H
