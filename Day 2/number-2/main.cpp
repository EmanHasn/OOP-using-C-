#include <iostream>
#include<Date.h>

using namespace std;

int main()
{
    Date date1(5, 1, 2023);
    Date date2(20, 6, 2019);

    cout<<"========= date1 && date2 ============= \n";
    // print first date
    cout << "date 1: ";
    date1.printDate();

        cout << "\ndate 2: ";
    date2.printDate();
    cout<<"=========sub operation============= \n";
    //sub
     Date result = date1.subtractDate(date2);

    // Print result
    cout<<"==========result of sub============ \n";
    cout << "\nresult after sub:\n";
    result.printAfterSub(result);
    cout<<"==================================== \n";
    return 0;
}
