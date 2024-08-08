#include <iostream>
#include "rectangle.h"
#include "geoshape.h"
#include "Square.h"
#include "Circle.h"


using namespace std;

int main()
{
    {
        int w, h;
        cout<<"enter width"<<endl;
        cin>>w;
        cout<<"enter height"<<endl;
        cin>>h;
        cout<<endl<<"Area of rectangle :"<<endl;
        Rectangle r1(w,h);
        cout<<r1.CalcArea();
    }
    {
        int x;
        cout<<endl<<"enter side"<<endl;
        cin>>x;
        Square s1(x);
        cout<<endl<<"Area of square :"<<endl;
        cout<<s1.CalcArea();
    }
    {
        int d;
        cout<<endl<<"enter diameter"<<endl;
        cin>>d;
        Circle c1(d);
        cout<<endl<<"Area of circle :"<<endl;
        cout<<c1.CalcArea();
    }




    return 0;
}
