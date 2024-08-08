#ifndef STACK_H
#define STACK_H


class Stack
{
    private:
        static int Counter ;
        int tos ; // top of stack
        int Size ; // size of stack
        int *ptr ; // pointer to stack
    public:
         Stack();
         Stack(int);

        void push(int);
        void pop();
        int getSize();

    ~Stack();
};

#endif // STACK_H
