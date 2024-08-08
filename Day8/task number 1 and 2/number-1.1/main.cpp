#include <iostream>
#include <graphics.h>
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
#include "Picture.h"
#include "Shape.h"
using namespace std;
/*
* Continue the Picture Example:
      - Write new class Shape with variable color + setter and getter.
      - Rect, Circle, and Line to Inherit from it.

*/
int main()
{
    initwindow(1000,1000);
    Picture pic;
    Point p1(50,50);
    Point p2(250,250);

    Circle c(p1,40);
    pic.setCircle(&c);
      c.Draw();
      c.Text();

    Rect r(p1,p2);
    pic.setRectangle(&r);
      r.Draw();
      r.Text();
    Line l = Line(p1,p2);
    pic.setLine(&l);
      l.Draw();
      l.Text();

    pic.setColor();
    pic.paint();
    getch();
    closegraph();
    return 0;
}
