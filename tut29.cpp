#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    /*
    1.contructor is special member function with same name as of the class
    2.it is used to initialize the objects of its class
    (explaination of 2nd point is given in next file[tut29b])
    
    */
    complex(void);//constructor declaration
    
       void print(){
        cout<<"complex number is "<<a<<" + "<<b<<"i"<<endl;

    } 
};
complex:: complex(void)//defualt constructor (accepts no parameters)
{
    /*int a = 2; and int b = 4;
 these are local variables, NOT class members
 class members a and b remain uninitialized
 (int ention mt kro)*/
    //int a=2;
    //int b=4;

    a=4;
    b=5;
    cout<<"hello"<<endl;
}

int main(){
    complex c1,c2,c3;
    c1.print();
    c2.print();
    c3.print();
    return 0;
}
/*
1.Private = hidden from outside the class)not form itself
2.constructor can access private members because it is a member function of the same class.
3.it should be declared in the public section of the class
4.it can have default arguments
5.they are automatically invoked whenever object is created
6.they cannot return values and they dont have data types

*/