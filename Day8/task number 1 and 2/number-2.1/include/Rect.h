#ifndef RECT_H
#define RECT_H
#include "Point.h"
#include "Shape.h"
class Rect : public Shape
{
private:
    Point UL;
    Point LR;
public:
    Rect();
    Rect(int,int, int,int,int);
    Rect(Point, Point,int );
    void setColor();
    void Draw();
    void Text();
    ~Rect();
};

#endif // RECT_H
