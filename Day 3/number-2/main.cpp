// Function Overloading Sum  : standalone function
#include <iostream>
#include "Sum.h"
using namespace std;

int main() {
    Sum n;
    {
        cout<<endl<<"--------sum of 2 integers -----------"<<endl;
        cout << "Sum of integers (5 , 3) = " << n.SumInt(5 , 3) << endl; // 5+3=8
    }
    {
        cout<<endl<<"--------sum of 2 float ---------------"<<endl;
        cout << "Sum of float (5.5 , 5.1) = " << n.SumFloat(5.5 , 5.1) << endl; // 5.5+5.1=10.6
    }
    {
        cout<<endl<<"--------sum of 1 integer , 1 float , 1 double ------"<<endl;
        cout << "Sum of int , float and double (5, 5.5, 3.5) = " << n.SumIFB(5, 5.5f, 3.5) <<endl<<endl;// 5+5.5+3.5=10.5+3.5=14
    }
}
