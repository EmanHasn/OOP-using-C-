#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(int);
        Point(int,int);
        int getX();
        void setX(int);
        int getY();
        void setY(int);
        ~Point();

    protected:

    private:
        int x;
        int y;
};

#endif // POINT_H
