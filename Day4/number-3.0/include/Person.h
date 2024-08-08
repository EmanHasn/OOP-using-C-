#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
/*
Create Class Person (parent) – Create 2 Classes Employee and Student (Childs)
Person (id, name, email, password, modifyemail() , changePassword() , Display()   )
*/
class Person
{
protected:
    int id;
    string name;
    string email;
    string password;
    public:
        //constructors
        Person();
        Person(int); //id
        Person(int, string); //id name
        Person(int, string, string); // id name email
        Person(int, string, string,string); // id name email password
        //getter&setter
        void setID(int);
        int getID ();

        void setName(string);
        string getName ();

        void setEmail(string);
        string getEmail ();

        void setPass(string);
        string getPass ();
        // member functions modifyemail() , changePassword() , Display()
        string modifyemail(string);
        string changePassword(string);
        void Display();

        ~Person();
};

#endif // PERSON_H
