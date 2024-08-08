#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include "Shape.h"

class Circle : public Shape
{
private:
    Point center;
    int raduis;
public:
    Circle();
    Circle(int, int, int, int);
    Circle(Point,int, int );
    void setColor();
    void Draw();
    void Text();
    ~Circle();
};

#endif // CIRCLE_H
