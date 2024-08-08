#ifndef SQARE_H
#define SQARE_H
#include "geoshape.h"

class Sqare : public Geoshape
{
    public:
        Sqare();
        Sqare(int);
        float CalcArea();
        ~Sqare();

    protected:

    private:
};

#endif // SQARE_H
