#include "Sum.h"
#include <iostream>
using namespace std;
Sum::Sum()
{
    int num1 = 0;
    int num2 = 0;
    float Fnum1 = 0.0;
    float Fnum2=0.0;
    double Dnum1 = 0.0;
}
int Sum::SumInt (int num1 , int num2)
{
    return  num1 + num2;
}
float Sum::SumFloat (float Fnum1, float Fnum2)
{
    return Fnum1 + Fnum2;
}
double Sum::SumIFB (int num1 , float Fnum1, double Dnum1)
{
    return num1 + Fnum1 + Dnum1;

}

Sum::~Sum()
{
    cout<<"--------------Destructor--------";
    cout<<"Destructor"<<endl;
}
