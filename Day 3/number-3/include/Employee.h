#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee
{
    private:
        int id;
        string name;
        float salary;
    public:
        //constructor
        Employee();
        Employee(int);
        Employee(int,string);
        Employee(int,string,float);
        //setter & getter
        void setId(int); // set id
        int getId (); // get id
        void setName(string); // set name
        string getName (); // get name
        void setSal(float); // set name
        float getSal (); // get name
        //print
        Employee showDetails();
        ~Employee();

};

#endif // EMPLOYEE_H
