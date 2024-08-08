#include <iostream>
#include<Date.h>

using namespace std;

/*
1- Class date: (Date more than Date)     d2 = 9/5/2023     ,        d3 = 2/4/1990
	re-write The same "date class" from previous assignment, with applying operator overloading for:

	date operator+(date);			//d1=d2+d3;
	date operator-(date);			//d1=d2-d3;
	date operator+(int);			//d1=d2+10;
	date operator=(date); 		 	//d1=d2;
	int operator==(date);			//if(d1==d2);
	int operator [] (char ch);		//int day=d1['d'];  //int month=d1['m'];  //int year=d1['y'];

*/
int main()
{
    Date date1(5, 1, 2023);
    Date date2(20, 6, 2019);

    {//print 2 dates
        cout<<"========= date1 && date2 ============= \n";
        // print first date
        cout << "date 1: ";
        date1.printDate();

        cout << "\ndate 2: ";
        date2.printDate();
    }
    { //sub operation
    cout<<"=========sub operation============= \n";
    //sub
     Date result = date1.subtractDate(date2);
     // Print result of sub
    cout<<"==========result of sub============ \n";
    cout << "\nresult after sub:\n";
    result.printAfterSub(result);
    cout<<"==================================== \n";
    }
    {//Test case operator+
        cout << "----------Operator + ---------" << endl;
        Date sum;
        sum = date1 + date2; // sum = date1+date2;
        sum.printDate();
    }
    {//Test case operator-
        cout << "----------Operator + ---------" << endl;
        Date sub;
        sub = date1 - date2; // sum = date1+date2;
        sub.printDate();
    }
    {//Test Case Operator + int
        cout << "----------Operator + int ---------" << endl;
        Date res = date1 + 3;
        res.printDate();
    }
    {//Test Case Operator =
         cout << "----------Operator = ---------" << endl;
        cout<<"date 1 \t";
        date1.printDate();
        cout<<"date 2 \t";
        date2.printDate();
        date2 = date1;
        cout<<"date 1 \t";
        date1.printDate();
        cout<<"date 2 \t";
        date2.printDate();
    }

    {//Test Case Operator []
        cout << "----------Operator [] ---------" << endl;
        cout << date1['k'] << endl;
        cout <<"day: "<< date1['d'] << endl;
        cout <<"month: "<< date1['m'] << endl;
        cout <<"year: "<< date1['y'] << endl;

    }

    {//Test Case Operator ==
        cout << "----------Operator == ---------" << endl;
        bool test = (date1 == date2);
        cout << "result " <<test << endl;
    }
    return 0;
}
