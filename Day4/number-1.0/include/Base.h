#ifndef BASE_H
#define BASE_H

/*
- private members x,y
	- constrcutors & destructor
	- setters & getters
	- function sum (return summation of x and y)

*/
class Base
{
    private:
        int x;
        int y;
    public:
        Base();
        Base(int);
        Base(int,int);
        //getter&setter
        void setX(int);
        int getX();
        void setY(int);
        int getY();
        //sum
        int sum();
        ~Base();

    protected:

};

#endif // BASE_H
