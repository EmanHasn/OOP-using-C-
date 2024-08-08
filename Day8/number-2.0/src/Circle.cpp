#include <iostream>
#include "Circle.h"
#include <graphics.h>
#include "Shape.h"

using namespace std;

    Circle::Circle()
    {
        raduis=30;
    }
    Circle::Circle(int x, int y, int a , int b):center(x,y) , Shape(b)
    {
        raduis = a;
    }
    Circle::Circle(Point _center, int a , int c)
    {
        center.setX(_center.getX());
        center.setY(_center.getY());
        raduis = a;
        color = c;
    }
    void Circle::Draw()
    {
        setcolor(color);
        circle(center.getX(), center.getY(),raduis);
    }
    void Circle::Text()
{
    outtextxy(20,10," Circle ");
}
Circle::~Circle()
{
    //dtor
}
