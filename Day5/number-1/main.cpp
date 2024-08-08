#include <iostream>
#include "base.h"
#include "derived.h"
using namespace std;

int main()
{
    Base b1(2,5);
    Derived d1(2,4,8);
    cout<<d1.sum();

    return 0;
}
