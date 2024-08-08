#ifndef LINE_H
#define LINE_H
#include "Point.h"
#include "Shape.h"

class Line : public Shape
{
private:
    Point Start;
    Point End;
public:
    Line();
    Line(int,int,int,int,int);
    Line(Point, Point, int );
    void Draw();
    void Text();
    ~Line();
};

#endif // LINE_H
