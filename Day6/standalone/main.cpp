#include <iostream>
#include "GeoShape.h"

using namespace std;
class Rectangle : public Geoshape
{
        public:
        Rectangle(int _dim1 , int _dim2) : Geoshape(_dim1, _dim2){};

        float CalcArea(){
             return dim1 * dim2;
        };
};

class Square : protected Geoshape
{
        public:
        Square(float side) : Geoshape(side){};
            float CalcArea(){
             return dim1 * dim2;
        };
};


class Circle : protected Geoshape
{
        public:
        Circle(float radius) : Geoshape(radius){};
            float CalcArea(){
            return 3.14159 * dim1 * dim2;
        };
};


float sumOfAllShapesArea(float x , float y , float z ){
   return  x + y + z ;
}

int main()
{


      Square s(4);
      cout << "\t ====== area of square: " <<endl;
    cout << "\t  Square: " << s.CalcArea() << endl;

    Circle c(3);
    cout << "\t ====== area of Circle: " <<endl;
    cout << "\t Circle: " << c.CalcArea() << endl ;

    Rectangle r(2, 4);
     cout << "\t ====== area of Rectangle: " <<endl;
     cout << "\t Rectangle: " << r.CalcArea() << endl;


   int allArea = sumOfAllShapesArea(r.CalcArea() , s.CalcArea() , c.CalcArea());
   cout << "\t ====== All area: " <<endl;
  cout << " \t Sum :" << allArea <<endl;
    return 0;
};


