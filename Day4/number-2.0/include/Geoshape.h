#ifndef GEOSHAPE_H
#define GEOSHAPE_H
/*
- private members dim1, dim2
	- constrcutors & destructor
	- setters & getters
	- function CalcArea(return 0)

*/

class Geoshape
{
    protected:
        int dim1;
        int dim2;
    public:
        Geoshape();
        Geoshape(int);
        Geoshape(int,int);
        //getter&setter
        void setDim1(int);
        int getDim1();
        void setDim2(int);
        int getDim2();
        //CalcArea
        float CalcArea();
        ~Geoshape();

};

#endif // GEOSHAPE_H
