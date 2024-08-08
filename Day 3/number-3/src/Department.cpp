#include "Department.h"

#include<iostream>
using namespace std;
Department::Department()
{

}
 void Department::setEmployees(Employee *ptr[3])
 {
     for(int i = 0; i<=3 ; i++)
     {
         cin>>ptr[i];
         ptr.showDetails();
     }
 }

Department::~Department()
{

}
