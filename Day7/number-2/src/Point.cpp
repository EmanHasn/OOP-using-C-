#include "Point.h"
class Point
{
        Point() {x=y=0;}
        Point(int l) {x=y=l;}
        Point(int _x, int _y) {x=_x; y=_y;}
        void setX(int _x) {x=_x;}
        int getX() {return x;}
        void setY(int _y) {y = _y;}
        int getY(){return y;}
};
