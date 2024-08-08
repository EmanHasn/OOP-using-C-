#include <iostream>
#include "rectangle.h"
#include "geoshape.h"
#include "sqare.h"

using namespace std;

int main()
{
    /*Geoshape g1(7,8);
    cout<<g1.CalcArea();*/
    cout<<"Area of rectangle :"<<endl;
    Rectangle r1(5,5);
    cout<<r1.CalcArea();
Sqare s1(4);
 cout<<endl<<"Area of square :"<<endl;
cout<<s1.CalcArea();


    return 0;
}
