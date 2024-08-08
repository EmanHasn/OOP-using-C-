#include "Picture.h"

Picture::Picture()
{
    pShapes = NULL;
    ShSize =0;
}
Picture::Picture(int _shSize, Shape** _pShapes)
{
    pShapes = _pShapes;
    ShSize = _shSize;
}
void Picture::setShapes(int _shSize, Shape** _pShapes )
{
    pShapes = _pShapes;
    ShSize = _shSize;
}
void Picture::paint()
{
    for(int i=0; i<ShSize; i++)
    {
        pShapes[i]->Draw();
    }
}
