#include "Picture.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
Picture::Picture()
{

}
Picture::Picture(Circle* pc, Rect* pr, Line* pl)
{
    cirPtr = pc;
    RecPtr = pr;
    LinePtr=pl;
}
void Picture::setCircle(Circle* cptr)
{
    cirPtr = cptr;
}
void Picture::setRectangle(Rect* rptr)
{
    RecPtr = rptr;
}
void Picture::setLine(Line* lptr)
{
    LinePtr = lptr;
}
void Picture::setColor()
{
    RecPtr->setColor();
    cirPtr->setColor();
    LinePtr->setColor();

}
void Picture::paint()
{
    RecPtr->Draw();
    cirPtr->Draw();
    LinePtr->Draw();
}
