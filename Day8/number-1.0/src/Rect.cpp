#include "Rect.h"
#include<graphics.h>
Rect::Rect(int x1,int y1, int x2,int y2): UL(x1,y1), LR(x2,y2)
{}
Rect::Rect(Point p1, Point p2)
{
    UL.setX(p1.getX());
    UL.setY(p1.getY());
    LR.setX(p2.getX());
    LR.setY(p2.getY());
}
void Rect::setColor()
{
    setcolor(10);
}

void Rect::Draw()
{
    rectangle(UL.getX(), UL.getY(), LR.getX(),LR.getY());
}
void Rect::Text()
{
    outtextxy(130,30,"Rectangle");
}
