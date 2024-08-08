#include <iostream>
#include "base.h"
#include "derived.h"
using namespace std;

int main()
{
    {
        Base b1(2,5);
        Derived d1(2,4,8); // 2+4+8 = 14
        cout<<"sum of 3 (2+4+8) numbers"<<endl;
        cout<<d1.sum();
    }
    {
        //make pointer from parent
        Base *ptr;
        Derived d(2,5,2); // 9
        //point to specific shape
        ptr=&d;
        cout<<endl<<"sum of numbers"<<endl;
         cout<< ptr->sum();
    }

    return 0;
}
