#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H


class ComplexNumber
{
    public:
        ComplexNumber();
        ComplexNumber(float); //real
        ComplexNumber(float,float); //real - img
        void setReal(float); // real = r
        float getReal(); // return real
        void setImg(float); // img = i
        float getImg(); // return img
        ComplexNumber addComplex(ComplexNumber);
        ComplexNumber subComplex(ComplexNumber);
        void printComplex();
        ~ComplexNumber();

    protected:

    private:
        float real;
        float img;
};

#endif
