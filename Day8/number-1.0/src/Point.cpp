#include "Point.h"

Point::Point()
{
    x=y=0;
}
Point::Point(int l)
{
    x=y=l;
}
Point::Point(int _x, int _y)
{
    x=_x;
    y=_y;
}
void Point::setX(int _x)
{
    x=_x;
}
int Point::getX()
{
    return x;
}
void Point::setY(int _y)
{
    y = _y;
}
int Point::getY()
{
    return y;
}
