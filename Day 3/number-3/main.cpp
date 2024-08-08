#include <iostream>
#include <Employee.h>
#include<Department.h>
using namespace std;

int main()
{
    /*Employee e1(1,"Ahmed", 1200);
    e1.showDetails() ;

    Employee e2(2,"Asmaa", 2000);
    e2.showDetails() ;

    Employee e3(3,"Moahmed", 3000.25);
    e3.showDetails() ;


    Employee E1;
    Employee E2;
    string name;
    int s;
    cout << "Enter name : " ;
    cin >> name;
    E1.setName(name);
    cout << "Enter Salary : " ;
    cin >> s;
    E1.setSal(s);
    */
    Employee *ptr[3];
    Department d;
    d.setEmployees(ptr);
    return 0;
}
