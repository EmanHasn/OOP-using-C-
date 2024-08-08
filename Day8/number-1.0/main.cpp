#include <iostream>
#include <graphics.h>
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
#include "Picture.h"
#include "Shape.h"
using namespace std;

int main()
{
     initwindow(500,500);
    Picture pic;

    Circle c(80,60,40);
    pic.setCircle(&c);
      c.Draw();
      c.Text();

    Rect r(50,50,250,100);
    pic.setRectangle(&r);
      r.Draw();
      r.Text();
    Line l = Line(320,50,200,300);
    pic.setLine(&l);
      l.Draw();
      l.Text();

    pic.setColor();
    pic.paint();
    getch();
    closegraph();
    return 0;
}


