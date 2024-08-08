#include <iostream>

using namespace std;
void collection (int num1 = 1, int num2 = 2 , int num3 = 3)
{
    cout << "first number: " << num1 <<endl << "second number: " << num2 << endl << "third number: "<<num3;
}

int main()
{
    /*3 - Make a function with default argument values and use it:
        function take 3 arguments "two of them have default values"
        try to call the function with 1 parameter/ 2 parameters/ 3 prameters*/
        collection();
        cout << endl << "\n one param" <<endl;
        collection(5);
        cout << endl << "\n two param" << endl;
        collection(5,6);
        cout << endl << "\n three param" << endl;
        collection(5,6,7);
        cout << endl << endl;



    return 0;
}
