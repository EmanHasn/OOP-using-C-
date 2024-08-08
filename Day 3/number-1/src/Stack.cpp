#include "Stack.h"
#include <iostream>


Stack::Stack() {
    tos=-1; // out of stack
    Size=10; // size of stack
    ptr = new int[Size]; // stack using pointer
}

Stack::Stack(int s)
{
    tos=-1;
    Size=s;
    ptr = new int[Size];
}

Stack::~Stack()
{
     delete[] ptr;
}
// push
void Stack::push(int value) {
    if (tos == Size) {
        std::cout << "Stack Overflow! Cannot push element.\n";
    } else {
        ptr[++tos] = value;
        std::cout << "Pushed " << value << " onto the stack.\n";
    }
}
// pop
void Stack::pop() {
    if (tos == -1) {
        std::cout << "Stack Underflow! Cannot pop element.\n";
    } else {
        std::cout << "Popped " << ptr[tos--] << " from the stack.\n";
    }
}

int Stack::getSize() {
    return Stack::Size;
}
