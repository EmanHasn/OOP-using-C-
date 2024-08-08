#include "derived.h"

Derived::Derived()
{
    z=0;
}
Derived::Derived(int _z, int a,int b) :Base(a, b)
{
     z=_z;
}
int Derived::sum()
{
    return z+Base::sum();
}
Derived::~Derived()
{

}
