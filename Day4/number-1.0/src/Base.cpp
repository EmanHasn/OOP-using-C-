#include "base.h"

Base::Base()
{
    int x = 0;
    int y = 0;
}
Base::Base(int _x)
{
    x = _x;
    y = 0;
}
Base::Base(int _x,int _y)
{
    x = _x;
    y = _y;
}
//getter&setter
void Base::setX(int _x)
{
     x = _x;
}
int Base::getX()
{
    return x;
}
void Base::setY(int _y)
{
    y = _y;
}
int Base::getY()
{
    return y;
}
//sum
int Base::sum()
{
    return x+y;
}
Base::~Base()
{

}
