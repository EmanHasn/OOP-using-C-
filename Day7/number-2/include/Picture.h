
class Picture
{
    private:
        // Association pointer
        Circle* cirPtr;
        Rect* RecPtr;
        Line* LinePtr;
        int CirNum;
        int RectNum;
        int LineNum;
    public:
        Picture();
        Picture(int, int, int, Circle*, Rect* , Line*);
        void setCicles(int, Circle* );
        void setRectangles(int, Rect* );
        void setLines(int, Line*);
        void paint();

};
