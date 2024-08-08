#include <iostream>
#include "Stack.h"
using namespace std;

int main() {

    Stack stack1(10);

    stack1.push(10);
    stack1.push(5);
    stack1.push(3);
    cout<<"\n let's pop our stack"<<endl;
    stack1.pop(); //10
    stack1.pop(); //5
    stack1.pop(); //10
    stack1.pop(); // out

    // Size of stack
    cout << "\nCurrent count of stack objects: " << stack1.getSize() << "\n";

    return 0;
}
