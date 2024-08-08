#include "Circle.h"
#include "graphics.h"
    Circle::Circle()
    {
        raduis=25;
    }
    Circle::Circle(int x, int y, int r):center(x,y)
    {
        raduis = r;
    }
    Circle::Circle(Point _center, int r)
    {
        center.setX(_center.getX());
        center.setY(_center.getY());
        raduis = r;
    }
    void Circle::setColor()
    {
        setcolor(10);
    }
    void Circle::Draw()
    {
        setcolor(9);
        circle(center.getX(), center.getY(),raduis);
    }
