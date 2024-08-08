#include "Employee.h"

Employee::Employee()
{
    id = 1;
    name = "not found";
    salary = 4000;
}
Employee::Employee(int _id )
{
    id=_id;
    name = "not found";
    salary = 4000;
}
Employee::Employee(int _id,string _name)
{
    id=_id;
    name = _name;
    salary = 4000;
}
Employee::Employee(int _id,string _name,float _salary)
{
    id=_id;
    name = _name;
    salary = _salary;
}
//setter & getter
void Employee::setId(int _id)
{
    this->id = _id;
}
int Employee::getId ()
{
    return id;
}
void Employee::setName(string name) // set name
{
    this->name = name;
}
string Employee::getName () // get name
{
    return name;
}
void Employee::setSal(float salary) // set sal
{
    this->salary = salary;
}
float Employee::getSal () // get sal
{
    return salary;
}
//print
Employee Employee::showDetails()
{
    Employee details;
    details.id = this->id;
    details.name = this->name;
    details.salary = this->salary;
    return details;
}


Employee::~Employee()
{
    //dtor
}
