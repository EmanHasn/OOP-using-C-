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
//overloading
Date Date::operator+(Date second) //d1=d2+d3;
{
    Date result;
    result.day = this->day + second.day;
    result.month = this->month + second.month;
    result.year = this->year + second.year;
    return result;
}

Date Date::operator-(Date second) //d1=d2-d3;
{
    Date result;
    result.day = this->day - second.day;
    result.month = this->month - second.month;
    result.year = this->year - second.year;
    return result;
}
Date Date::operator+(int num)
{
    Date result;
    result.day = this->day + num;
    result.month = this->month;
    result.year = this->year;
    return result;
}
Date Date::operator=(Date second)
{
    this->day = second.day;
    this->month = second.month;
    this->year = second.year;
    return *this;
}
int Date::operator==(Date second)
{
    if(this->day == second.day && this->month == second.month && this->year == second.year)
    {
        cout << "date1 && date2 are matching";
        return 1;
    }
    else
    {
        cout << "date1 && date2 are not matching \n";
        return 0;
    }
}
int Date::operator[] (char d)
{
    if(d=='d' || d == 'D')
        return this->day;
    else if(d=='m' || d=='M')
        return this->month;
    else if(d=='y' || d=='Y')
        return this->year;
    else
        return -1;
}
Date::~Date()
{

}
