#ifndef SUM_H
#define SUM_H


class Sum
{
    private:
        int num1;
        int num2;
        float Fnum1;
        float Fnum2;
        double Dnum1;
    public:
        Sum();
        int SumInt (int , int);
        float SumFloat (float, float);
        double SumIFB (int , float, double);

        ~Sum();

};

#endif // SUM_H
