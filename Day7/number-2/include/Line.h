#ifndef LINE_H
#define LINE_H


class Line
{
    private:
        Point Start;
        Point End;
    public:
        Line() {}
        Line(int a, int b,int c,int d): Start(a,b) , End(c,d) {}
        Line(Point p1, Point p2)
        {
            Start.setX(p1.getX());
            Start.setY(p1.getY());

            End.setX(p2.getX());
            End.setY(p2.getY());
        }
        void Draw()
        {
            setcolor(8);
            line(Start.getX(), Start.getY(), End.getX(), End.getY());
        }
};

#endif // LINE_H
