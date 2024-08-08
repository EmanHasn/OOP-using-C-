#ifndef DERIVED_H
#define DERIVED_H
#include "base.h"

/*
- private members z
	- constrcutors & destructor
	- setters & getters
	- override function sum in derived to add functionality to the base sum function:
	(return summation of x and y and z)

*/
class Derived : public Base
{
    private:

    public:
        int z;
        Derived();
        Derived(int,int,int);
        Derived(int);
        //getter&setter
        void setZ(int);
        int setZ();
        //sum
        int sum();
        ~Derived();

};

#endif // DERIVED_H
