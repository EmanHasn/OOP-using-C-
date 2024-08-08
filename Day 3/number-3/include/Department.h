#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <Employee.h>
#include <iostream>
using namespace std;

class Department
{
     private:
        int idOfDep;
        string name;
        Employee *ptr[3] ; //(array of employee)
    public:
        Department();
        Department(int);
        Department(int,string);
        //setter & getter
        void setId(int); // set id
        int getId (); // get id
        void setName(string); // set name
        string getName (); // get name
        void setEmployees(Employee *ptr[3]); // set name
        Employee setEmployees(); // get name
        //print
        Employee showDetails();

        ~Department();
};

#endif // DEPARTMENT_H
