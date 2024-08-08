/*
* Composition Example: Point, Rect, Circle, Line + drawing graphics.
	- each class should have: attributes, constructors, setters, Draw()

*/
#include <iostream>
#include <graphics.h>
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
using namespace std;

int main()
{
    //graph
    initwindow(500,400);
    //draw line
    Point p1(50,50);
    Point p2(150,150);

    Line l1(p1,p2);
    l1.Draw();

    //draw circle
    Point center(250,250);
    Circle c1(center, 100);
    c1.Draw();

    Rect r1(p1,p2);
    r1.Draw();

    getch();
    closegraph();
    return 0;
}
