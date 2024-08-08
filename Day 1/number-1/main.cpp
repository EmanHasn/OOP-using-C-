//Write Structure Employee (ID, Name, and Salary).
//- Allocate an array of Employee using flexible declaration.
//- Fill function in structure the allocated array from user and then print it with standalone function.
#include <iostream>
#include <string.h>
using namespace std;

struct Employee
{
    int id=0;
    char name[20];
    float salary;

    void data()
    {
            cout<<"the employee id:" <<endl;
            cout<<id<<endl;
            cout<<" the employee name: "<<endl;
            cout<<name<<endl;
            cout<<"the employee salary: "<<endl;
            cout<<salary<<endl;
    }
};

// standalone function
// print employees
void printemp(Employee *e , int x)
{
    for(int i =0;i<x;i++)
    {
        cout<<"id of employee"<<endl;
        cout<<e[i].id<<endl;
        cout<<"name of employee"<<endl;
        cout<<e[i].name<<endl;
        cout<<"salary of employee"<<endl;
        cout<<e[i].salary<<endl;
    }

}

int main()
{
    int numberOfUsers;
    cout<<"enter number of employees"<<endl;
    cin>>numberOfUsers;
    Employee* ptr = new Employee [numberOfUsers];
        for(int i =0 ; i<numberOfUsers ; i++)
        {
            ptr[i].data();
        }
            printemp(ptr,numberOfUsers);

        delete[] ptr;

    return 0;
}

/* Another answer
#include <iostream>

using namespace std;
struct Employee
{
    int id;
    char Name[50];
    float Salary;
// function in structure the allocated array from user
     void  EmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> id;

           cout << "Enter Employee Name: ";
        cin >> Name;

         cout << "Enter Employee Salary: ";
        cin >> Salary;
    }
};
// standalone function
void printEmployee (const Employee* employees , int size){
    cout << "\n Employee Details:\n" ;
    for(int i =0 ; i< size ; i++){
         cout <<  " Employee id : " << employees[i].id ;
          cout << "\n Employee Name : " << employees[i].Name;
           cout << "\n Salary: " << employees[i].Salary ;
            cout << "\n ------------------  \n" ;
    }
}
int main()
{
     int size;
     cout <<"Enter the number of employees: ";
      cin >> size ;
  Employee* employeeArray = new Employee[size];

   for(int i = 0 ; i<size ; i++){
      employeeArray[i].EmployeeDetails();
   }

 printEmployee(employeeArray , size) ;
 delete[] employeeArray;
    return 0;
}
*/
