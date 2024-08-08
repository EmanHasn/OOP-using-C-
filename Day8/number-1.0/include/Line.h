#ifndef LINE_H
#define LINE_H
#include "Point.h"

class Line
{
    private:
        Point Start;
        Point End;
    public:
        Line();
        Line(int,int,int ,int );
        Line(Point p1, Point p2);
        void setColor();
        void Draw();
         void Text();
};

#endif // LINE_H
