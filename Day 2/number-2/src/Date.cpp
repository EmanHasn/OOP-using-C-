#include "Date.h"
#include"Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
    day=1;
    month=1;
    year=2000;


}

Date::Date(int d)
{
    day= d;
    month=1;
    year=2000;

}
Date::Data(int d,int m)
{
    day=d;
    month=m;
    year=2000;
}


Date::Date(int d, int m, int y)
{
    day=d;
    month=m;
    year=y;
}

void Date::setDay(int d) //day =d
{
    day=d;
}
int Date::getDay() // return day
{
    return day;
}
//month
void Date::setMonth(int m) //month =m
{
    month=m;
}
int Date::getMonth() // return month
{
    return month;
}
//year
void Date::setYear(int y) //year =y
{
    year=y;
}
int Date::getYear() // return year
{
    return year;
}
 //member function
Date Date::subtractDate(Date second){
        Date result;
        result.day = this->day - second.day;
        result.month = this->month - second.month;
        result.year = this->year - second.year;

             //negative values
        if (result.day < 0) {
            result.day *= -1;
        }
        if (result.month < 0) {
            result.month *= -1;
        }

        return result;
}
void Date::printDate(){
       cout << day << "/" << month << "/" << year << "\n";
    }
    //  function print
void Date::printAfterSub(Date result){
    cout << " days = " << result.day << "\n";
    cout << "Months = " << result.month << "\n";
    cout << "Years = " << result.year << "\n";
}

Date::~Date()
{
    cout<<"destructor"<<endl;
}
