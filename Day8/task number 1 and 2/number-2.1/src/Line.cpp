#include <iostream>
#include "Line.h"
#include "graphics.h"

#include "Point.h"
using namespace std;
Line::Line() {}
Line::Line(int a, int b,int c,int d, int e): Start(a,b), End(c,d),Shape(e) {}

Line::Line(Point p1, Point p2, int c)
{
    Start.setX(p1.getX());
    Start.setY(p1.getY());

    End.setX(p2.getX());
    End.setY(p2.getY());
    color = c;
}
void Line::Draw()
{
    setcolor(8);
    line(Start.getX(), Start.getY(), End.getX(), End.getY());
}
void Line::Text()
{
    outtextxy(180,230," Line ");
}

