#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    string name;
    int id;
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"enter your id"<<endl;
    cin>>id;
    Address d("Cairo","Egypt");
    Employee e(id,name, &d);
    e.display();
    return 0;
}
