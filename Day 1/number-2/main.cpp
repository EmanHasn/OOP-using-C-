#include<iostream>
 using namespace std;
  //2- Convert struct Employee to class Employee and make member function to print Employee data.
 class Employee
 {
      public:
         int id;
         char name[20];
         int salary;

         void details()
         {
              cout<<"Enter the employee id: ";
              cin>>id;
              cout<<"Enter the employee name: ";
              cin>>name;
              cout<<"Enter the employee salary: ";
              cin>>salary;
         }
         void show()
         {
             cout<<"the employee id:" <<endl;
             cout<<id<<endl;
             cout<<" the employee name: "<<endl;
             cout<<name<<endl;
             cout<<"the employee salary: "<<endl;
             cout<<salary<<endl;

         }
 };

 int main()
 {
     int numberOfEmployee;
    cout<<"Enter the number of employee: "<<endl;
    cin>>numberOfEmployee;
     Employee e[numberOfEmployee];
     cout<<"Enter the employee info:"<<endl;
     for(int i=0;i<numberOfEmployee;i++)
     {
         e[i].details();
     }
     cout<<endl<<"The employee information is:";
     for(int i=0; i<3;i++)
     {
         e[i].show();
     }
 }
