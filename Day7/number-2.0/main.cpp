#include <iostream>
#include <graphics.h>
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
#include "Picture.h"
using namespace std;

int main()
{
     initwindow(500,500);
    Picture pic;

    Circle c(100,100,100);
    pic.setCircle(&c);

    Rect r(50,50,170,100);
    pic.setRectangle(&r);

    Line l = Line(320,50,200,300);
    pic.setLine(&l);

    pic.setColor();
    pic.paint();
    getch();
    closegraph();
    return 0;
}

