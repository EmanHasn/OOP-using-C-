#include "Sudent.h"

Sudent::Sudent()
{
    //ctor
}
Sudent::Sudent(int id)
{

}
Sudent::Sudent(int id,string name)
{

}
Sudent Sudent::generateStendent()
{

}
Sudent Sudent::operator+(Sudent second)
{
    Sudent result;
    result.name = this->name +" "+ second.name;
    result.email = this->email +" "+ second.email;
    result.grade = this->grade + second.grade;
    return result;
}


void Sudent::print()
{

}


Sudent::~Sudent()
{
    //dtor
}
