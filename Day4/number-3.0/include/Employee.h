#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
#include <iostream>
using namespace std;

/*
Employee (salary ,  modifyemail() => @company.com, , Display()   )
*/
class Employee : public Person
{
    public:
        Employee();
        Employee(int,string,float); // id name salary
        string modifyemail(string);
        void Display();
        virtual ~Employee();
    private:
        float salary;
};

#endif // EMPLOYEE_H
