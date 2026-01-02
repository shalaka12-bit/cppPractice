#include<iostream>
using namespace std;

class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1, int c1);//declare
    void getdata(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
        cout<<"value of c is "<<c<<endl;
        cout<<"value of d is "<<d<<endl;
        cout<<"value of e is "<<e<<endl;
    }
};

void employee :: setdata(int a1,int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    employee harry;
    //harry.a=34 ...this will guve error as it is in private
     harry.d=4;
     harry.e=67;
     harry.setdata(1,2,4);
     harry.getdata();
    return 0;
}

//we can declare objects along with the class
/* class employee{
        data
    }harry,rohan;*/