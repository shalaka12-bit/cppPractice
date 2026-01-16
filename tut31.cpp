/*constructor overloading
same name ka contructor banaya multiple times
  */
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    { // defalut constructor
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    { // parameterized
        a = x;
        b = y;
    }
    complex(int x)
    { // parameterized
        a = x;
        b = 0;
    }

    void print()
    {
        cout << "complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{

    complex c1(3, 5);
    c1.print();

    complex c2;
    // complex c2(); ----------> this is function delcaration and not object creation heance will give error
    c2.print();

    complex c3(5);
    c3.print();

    return 0;
}