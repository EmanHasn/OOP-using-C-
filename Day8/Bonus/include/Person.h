#ifndef PERSON_H
#define PERSON_H


class Person
{
    private:
        Shape** pShapes;
        int ShSize;
    public:
        Picture()
        {
            pShapes = NULL;
            ShSize =0;
        }
        Picture(int _shSize, Shape** _pShapes)
        {
            pShapes = _pShapes;
            ShSize = _shSize;
        }
        void setShapes(int _shSize, Shape** _pShapes )
        {
            pShapes = _pShapes;
            ShSize = _shSize;
        }
        void paint()
        {
            for(int i=0; i<ShSize; i++)
            {
                pShapes[i]->Draw();
            }
        }
         ~Person();
};

#endif // PERSON_H
