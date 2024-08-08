#include <iostream>
#include <ComplexNumber.h>

using namespace std;

int main()
{
    ComplexNumber c1 , c2 , add , sub;
    c1.setImg(5);
    c2.setImg(2);
    c2.setReal(10);
    c1.setReal(6);
    cout<<endl<<endl<<endl;
    cout<<"c1 \n";
    c1.printComplex();

    cout<<endl<<endl<<endl;
    cout<<"c2 \n";
    c2.printComplex();

    cout<<endl<<endl<<endl;
    cout<<"addition"<<endl;
    add = c1.addComplex(c2);
    add.printComplex();
    cout<<endl<<endl<<endl;

     cout<<"sub"<<endl;
    sub = c1.subComplex(c2);
    sub.printComplex();
    return 0;
}
