#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Address.h"
using namespace std;


class Employee
{
    private:
        Address* address;
    public:
        int id;
        string name;
        Employee(int, string , Address*);
        //setter&getter
        void display();
        Employee();
        ~Employee();
};

#endif // EMPLOYEE_H
