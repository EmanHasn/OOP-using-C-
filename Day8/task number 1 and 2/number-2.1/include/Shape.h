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
    virtual void Draw() = 0;
    virtual void Text() = 0;
    ~Shape();
};

#endif // SHAPE_H
