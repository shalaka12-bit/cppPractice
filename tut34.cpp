#include<iostream>
using namespace std;

class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;
        
    }
//when no copy contructor is found,complier supplies its own copy constructor
//A copy constructor is a special constructor that is called when a new object is created using an existing object.
number(number &obj){
        cout<<"copy constructor called!"<<endl;
        a=obj.a;
    }
 void display(){
       cout<<"object od this class is "<<a<<endl;
 }
};

int main(){
    number x,y(6),z,z2;
    x.display();
    y.display();
    number z1(z);//copy constrcutor called
    z1.display();

    z2=z;//assignment operator se copy contructor call nhi hoga
    
    number z3=y;//copy constrcutor called
    z3.display();
    
    return 0;
}

/*COPY CONSTRUCTOR
Called during object creation

Not during assignment

Uses reference*/