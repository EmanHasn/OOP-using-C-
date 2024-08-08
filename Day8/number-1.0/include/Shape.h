#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    protected:
        int color;
    public:
        Shape();
        Shape(int );
        void setColorShape(int );
        int getColorShape();
        virtual void Draw();
        virtual void Test();
        ~Shape();
};

#endif // SHAPE_H
