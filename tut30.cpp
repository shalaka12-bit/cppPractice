#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); // constructor declaration

    void print()
    {
        cout << "complex number is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x, int y) // parameterized constructor (takes 2 parameters)
{

    a = x;
    b = y;
    // cout<<"hello"<<endl;
}

int main()
{
    complex a(4, 5);
    a.print();
    // Object name a and class member a are different because their scopes are different.

    complex b = complex(3, 8);
    b.print();
    return 0;
}