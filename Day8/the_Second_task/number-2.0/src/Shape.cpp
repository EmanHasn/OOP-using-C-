#include "Shape.h"
#include <iostream>
#include <graphics.h>
using namespace std;
Shape::Shape()
{
    color = 15;
}
Shape::Shape(int c)
{
    color =c;
}
void Shape::setColorShape(int c)
{
    color =c;
}
int Shape::getColorShape()
{
    return color;
}
void Shape::Draw()
{
    cout << "Draw " ;
}
void Shape::Text()
{
     outtextxy(10,10,"Shape");
}
Shape::~Shape()
{
    //dtor
}

