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
        virtual void Text();
        ~Shape();
};

#endif // SHAPE_H
