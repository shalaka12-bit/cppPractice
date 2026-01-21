#include<iostream>
using namespace std;
//constructors in classes
class base1{
    int data1;
    public:
    base1(int a){
        data1=a;
        cout<<"base1 constructor is called"<<endl;
    }
    void printdata1(){
        cout<<"value of data1 is : "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(int b){
        data2=b;
        cout<<"base2 constructor is called"<<endl;
    }
    void printdata2(){
        cout<<"value of data2 is : "<<data2<<endl;
    }
};
class derived:public base2,public base1{
    int derived1;
    public:
    derived(int x,int y,int z):base1(x),base2(y){
        derived1=z;
        cout<<"derived is called"<<endl;
    }
    void printderived(){
        cout<<"derived value is "<<derived1<<endl;
    }
};
int main(){
    derived obj(1,3,4);
    obj.printdata1();
    obj.printderived();
    
    return 0;
}