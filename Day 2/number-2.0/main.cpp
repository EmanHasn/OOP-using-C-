#include <iostream>
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        day=1;
        month=1;
        year=2000;
    }

    Date(int d, int m, int y)
    {
        day=d;
        month=m;
        year=y;
    }

    // Setters
    void setDay(int d) {
        this->day = d;
    }
      int getDay(){
        return this->day;
    }

    void setMonth(int m) {
        this->month = m;
    }
    int getMonth(){
        return this->month;
    }

    void setYear(int y) {
        this->year = y;
    }

    int getYear(){
        return this->year;
    }

    // function sub
    Date subtractDate(Date second){
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

     //  print the date
    void printDate(){
       cout << day << "/" << month << "/" << year << "\n";
    }

    //  function print
    void printAfterSub(Date result){
        cout << " days = " << result.day << "\n";
        cout << "Months = " << result.month << "\n";
       cout << "Years = " << result.year << "\n";
    }

};

int main() {

    Date date1(5, 1, 2023);
    Date date2(20, 6, 2019);

    // sub
    Date result = date1.subtractDate(date2);

    // print first date
    cout << "date 1: ";
    date1.printDate();

    cout << "\ndate 2: ";
    date2.printDate();

    // Print result
    cout << "\nresult after sub:\n";
    result.printAfterSub(result);

    return 0;
}
