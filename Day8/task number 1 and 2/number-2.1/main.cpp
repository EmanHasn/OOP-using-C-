#include <iostream>
#include "Circle.h"
#include "Shape.h"
#include "Point.h"
#include "Rect.h"
#include "Line.h"
#include "Picture.h"
#include <graphics.h>
using namespace std;
/*
* Continue the Picture Example:
      - Make function "draw( )", a pure virtual function, and make necessary changes to other classes.
      - Simplify the Picture class, so as to only be constructed by an array of Shapes (array of pointers to Shape),
	then use the pointer of base class to call the draw( ) function of Circle, Rect, and Line.

*/
int main()
{
    initwindow(500,500);
    Point p1(80,100);
    Point p2(250,200);

    Rect* Rptr = new Rect(p1,p2,13);

    Line* Lptr = new Line(320,50,200,300,10);
    Circle* Cptr = new Circle(300,200,40,14);

    Shape* sh[3];
    sh[0] = Rptr;
    sh[1] = Lptr;
    sh[2] = Cptr;
    Picture pic;
    pic.setShapes(3,sh);
    pic.paint();
    getch();
    closegraph();
    return 0;
}
