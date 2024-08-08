#include "Employee.h"

Employee::Employee()
{
    //ctor
}
Employee::Employee(int _id, string _name, Address* _address)
{
    id = _id;
    name = _name;
    address = _address;
}
void Employee::display()
{
    cout << "id : " << id << endl;
    cout << "name : " << name << endl;
    cout << "city : " << address->city << endl;
    cout<< "country : " << address->country << endl;
}
Employee::~Employee()
{
    //dtor
}
