#include<iostream>
using namespace std;

class baseclass{
    public:
    int var_base;
    void display(){
        cout<<"variable of baseclass "<<var_base<<endl;
    }
};

class derivedclass:public baseclass{
    public:
    int var_der;
    void display(){
        cout<<"variable of baseclass "<<var_base<<endl;
        cout<<"variable of dervied class "<<var_der<<endl;

    }
};

int main(){
    baseclass *basee;
    baseclass obj1;
    derivedclass obj;
    basee=&obj;//pointing base class pointer to derived class
     basee->var_base=2;
    // basee->var_der=5; it will show error 
    //because pointer base class ka hai ,it cant control dervides ka kuch
    basee->display();
    //(base ka pointer sirf base ko acces kr pa rha hai)

    derivedclass *derr;
    
    derr=&obj;
    //this is not polumor boz pointer and obj of sametype(this is normal case)
    //derr= &obj1;  -->not allowed ..read niche ka
    derr->var_base=54;
    derr->var_der=53;
    derr->display();
    return 0;
}

/*Every derived object contains a base part
Hence, a base pointer can safely point to a derived object
basee=&obj

But this is ❌ NOT allowed:
derr= &obj1;
Because base is not a derived object.


We do basee = &obj; so that a base class pointer points to a derived class object, which allows polymorphism.
This line is the heart of runtime polymorphism
Polymorphism = same function call, different behavior
in the above program poly nhi ho rha...that is just the setup
*/