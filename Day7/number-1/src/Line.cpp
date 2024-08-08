#include "Line.h"

Line::Line(){}
Line::Line(int a,int b,int c,int d):Start(a,b), End(c,d){}
Line::Line(Point p1,Point p2)
{
    Start.setX(p1.getX());
    Start.setY(p1.getY());

    End.setX(p2.getX());
    End.setY(p2.getY());
}
void Line::Draw()
{
    line(Start.getX(), Start.getY(), End.getX(), End.getY());
}
Line::~Line(){}
