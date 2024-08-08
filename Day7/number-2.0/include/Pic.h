#ifndef PIC_H
#define PIC_H
#include "Circle.h"
#include "Rect.h"
#include "Line.h"

class Pic
{
    public:
        Pic();
        Pic(c,r,l);
        void setCir(Circle* c);

        ~Pic();

    protected:

    private:
        Circle* pc;
        Rect* pr;
        Line* pl;
};

#endif // PIC_H
