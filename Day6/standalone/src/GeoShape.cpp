#include "Geoshape.h"

 Geoshape::Geoshape(){
        dim1 = 0 ;
        dim2 = 0 ;
    };
     Geoshape::Geoshape(int a){
        dim1 = dim2 = a ;
    };
 Geoshape::Geoshape(int _dim1, int _dim2){
        dim1 = _dim1;
        dim2 = _dim2 ;
    };
void Geoshape::setDim1(int _dim1){
      dim1 = _dim1;
    };
void Geoshape::setDim2(int _dim2){
    dim2 = _dim2;
};
Geoshape::~Geoshape()
{
    //dtor
}
