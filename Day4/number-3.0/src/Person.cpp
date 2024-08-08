#include "Person.h"


Person::Person()
{
    id = 0;
    name = "not found";
    email= "not found";
    password = "not found";

}
Person::Person(int _id) //id
{
    id = _id;
    name = "not found";
    email= "not found";
    password = "not found";
}
Person::Person(int _id, string _name) //id name
{
     id = _id;
    name = _name;
    email= "not found";
    password = "not found";

}
Person::Person(int _id, string _name, string _email)// id name email
{
    id = _id;
    name = _name;
    email= _email;
    password = "not found";
}
Person::Person(int _id, string _name, string _email,string _pass) // id name email password
{
    id = _id;
    name = _name;
    email= _email;
    password = _pass;
}
//getter&setter
void Person::setID(int _id)
{
    id = _id;
}
int Person::getID ()
{
    return id;
}
void Person::setName(string _name )
{
    name = _name;
}
string Person::getName ()
{
    return name;
}
void Person::setEmail(string _email)
{
    email=_email;
}
string Person::getEmail ()
{
    return email;
}
void Person::setPass(string _pass)
{
    password = _pass;
}
string Person::getPass ()
{
    return password;
}
// member functions modifyemail() , changePassword() , Display()
string Person::modifyemail(string newEmail)
{
    email = newEmail;

}
string Person::changePassword(string _Newpass)
{
    password = _Newpass;

}
void Person::Display()
{
    cout<<"This person: "<<endl<<"id: "<<id<<endl<< "name: "<< name<<endl<<
    "password"<< password<< endl<< "email"<< email<< endl;

}
Person::~Person()
{

}
