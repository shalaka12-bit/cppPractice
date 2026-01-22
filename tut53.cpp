#include<iostream>
using namespace std;
class Test {
    int x;

public:
    void set(int x) {
        this->x = x;   // left = data member, right = parameter
        //this->x   ==   t.x(t object ka x variable)
    }

    void show() {
        cout << x << endl;
    }
};

int main() {
    Test t;
    t.set(10);
    /*so basically internally 
     set(&t,10)*/
    t.show();   // prints 10
}
//"this "stores the address of the object that called the function(here this stores addresss of object t)