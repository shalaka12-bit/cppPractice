#include<iostream>
using namespace std;
//ek class ke private members dusre class mein use krna 

//forward declaration(just pehele se bata de rhe hai ki aage ye class hai..keep finding)
class complex;

class calculator{
    public:
    int add(int a, int b){
    return(a+b);
}
    int sumofreal(complex,complex);
};



class complex{
    int a, b ;
    //friend int calculator::sumofreal(complex,complex);
    /*if more than 2..3 fuctions hoagye to 1-1 ko
    define krne se accha pure class ko friend bana do*/
    friend class calculator;
    public:
    void setnumber(int n1,int n2){
        a=n1;
        b=n2;
};
    void print_number(){
        cout<<a<<"+"<<b<<"i"<<endl;
    };
    };

    int calculator::sumofreal(complex o1,complex o2){
    cout<<(o1.a+o2.a);
}
int main(){
    complex o1,o2;
    o1.setnumber(2,4);    
    o2.setnumber(4,4);
    calculator calc;
    calc.sumofreal(o1,o2);
     

    return 0;
}