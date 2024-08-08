#include <ComplexNumber.h>
#include "ComplexNumber.h"
#include <iostream>
using namespace std;

ComplexNumber::ComplexNumber()
{
    real = 1;
    img=0;
    cout<<"default constructor"<<endl;
}
ComplexNumber::ComplexNumber(float val)
{
    real = img = val;
    cout<<"one parameter constructor"<<endl;
}
ComplexNumber::ComplexNumber(float value1 , float value2)
{
    real = value1;
    img=value2;
    cout<<"two parameter constructor"<<endl;
}
void ComplexNumber::setReal(float r) // real = r
{
    real = r;
}
float ComplexNumber::getReal ()   // return real
{
    return real;
}
void ComplexNumber::setImg(float i)  // img = i
{
    img = i;
}
float ComplexNumber::getImg() // return img
{
    return img;
}

ComplexNumber ComplexNumber::addComplex(ComplexNumber c)
{
    ComplexNumber add;
    add.real = this->real + c.real;
    add.img = this->img + c.img;
    return add;
}
ComplexNumber ComplexNumber::subComplex(ComplexNumber c)
{
    ComplexNumber sub;
    sub.real = this->real - c.real;
    sub.img = this->img - c.img;
    return sub;
}
void ComplexNumber::printComplex()
{
    if(img>0)
        cout<<real<<"+"<<img<<"i"<<endl;
    else
        cout<<real<<img<<"i"<<endl;
}
ComplexNumber::~ComplexNumber()
{
    cout<<"\n Destructor"<<endl;
}
