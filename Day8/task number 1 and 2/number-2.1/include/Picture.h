#ifndef PICTURE_H
#define PICTURE_H
#include <graphics.h>

#include "Shape.h"

class Picture
{
private:
    Shape** pShapes;
    int ShSize;
public:
    Picture();
    Picture(int, Shape** );
    void setShapes(int, Shape**  );
    void paint();
};

#endif // PICTURE_H
