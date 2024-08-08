#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
using namespace std;

class Address
{
    public:
        string city, country;
        Address(string, string);
        ~Address();
};

#endif // ADDRESS_H
