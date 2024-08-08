#ifndef DATE_H
#define DATE_H


class Date
{
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

        ~Date();

    protected:

    private:
        int day;
        int month;
        int year;
};

#endif // DATE_H
