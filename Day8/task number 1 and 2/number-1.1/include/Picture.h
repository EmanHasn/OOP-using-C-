#ifndef PICTURE_H
#define PICTURE_H
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
class Picture
{
private:
    Circle* cirPtr;
    Rect* RecPtr;
    Line* LinePtr;
public:
    Picture();
    Picture(Circle* , Rect*, Line* );
    void setCircle(Circle* cptr);
    void setRectangle(Rect* rptr);
    void setLine(Line* lptr);
    void setColor();
    void paint();
};
#endif // PICTURE_H
