#ifndef SUDENT_H
#define SUDENT_H
#include <iostream>
using namespace std;

class Sudent
{
     private:
        int id;
        string name;
        string email;
        int grade;
    public:
        Sudent();
        Sudent(int);
        Sudent(int,string);
        void setid(int); // id
        int getid(); // return id
        void setname(string);
        string getname();
        void setemail(string);
        string getEmail(); // return day
         void setGrade(int); // day = d
        int getGrade(); // return day
        Sudent generateStendent();
        Date operator+(Date);
        int operator==(Date);
        void print();

        ~Sudent();



};

#endif // SUDENT_H
