#ifndef RECT_H
#define RECT_H
#include "Point.h"

class Rect
{
    private:
        Point UL;
        Point LR;
        Point p1;
        Point p2;
    public:
        Rect();
        Rect(int,int, int,int);
        Rect(Point p1, Point p2);
        void setColor();
          void Draw();
         void Text();
};

#endif // RECT_H
