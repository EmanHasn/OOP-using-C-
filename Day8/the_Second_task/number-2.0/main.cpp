#include <iostream>
#include "Circle.h"
#include "Shape.h"
#include "Point.h"
#include "Rect.h"
#include "Line.h"
#include "Picture.h"
#include <graphics.h>
using namespace std;

int main()
{
    initwindow(500,500);

    Rect* Rptr = new Rect(50,50,250,100,13);

    Line* Lptr = new Line(320,50,200,300,10);
    Circle* Cptr = new Circle(300,200,40,14);

    Shape* sh[3];
    sh[0] = Rptr;
    sh[1] = Lptr;
    sh[2] = Cptr;
    Picture p1;
    p1.setShapes(3,sh);
    p1.paint();
    getch();
    closegraph();
    return 0;
}
