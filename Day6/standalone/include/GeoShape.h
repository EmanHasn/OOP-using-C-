#ifndef GEOSHAPE_H
#define GEOSHAPE_H

class Geoshape
{
     protected:
        int dim1 ;
        int dim2 ;
    public:
        Geoshape();
        Geoshape(int);
        Geoshape(int,int);
          // setter & getter
     void setDim1(int);
      void setDim2(int);

   virtual float CalcArea() = 0;
        ~Geoshape();

};
#endif // GEOSHAPE_H
