#ifndef DATE_H
#define DATE_H

class Date
{
    private:
        int day;
        int month;
        int year;
    public:
        Date();
        Date(int);
        Data(int,int);
        Date(int,int,int);
        void setDay(int); // day = d
        int getDay(); // return day
        void setMonth(int); // month = m
        int getMonth(); // return month
        void setYear(int); // year = y
        int getYear(); // return year
        //member function
        Date subtractDate(Date second);
        void printDate();
        void printAfterSub(Date result);
        //overloading
        Date operator+(Date); //d1=d2+d3;
        Date operator-(Date); //d1=d2-d3;
        Date operator+(int); //d1=d2+10;
        Date operator=(Date); //d1=d2;
        int operator==(Date); //if(d1==d2);
        int operator[] (char d);//int day=d1['d'];  //int month=d1['m'];  //int year=d1['y'];
        ~Date();

};

#endif // DATE_H
