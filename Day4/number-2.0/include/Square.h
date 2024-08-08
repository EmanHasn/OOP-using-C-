#ifndef SQUARE_H
#define SQUARE_H


class Square : public Geoshape
{
    public:
        Square();
        Square(int);
        float CalcArea();
        ~Square();

    protected:

    private:
};

#endif // SQUARE_H
