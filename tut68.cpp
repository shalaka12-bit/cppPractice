//member function templates and overloading
#include<iostream>
using namespace std;

template<class T>
class neuw{
    public:
    T data;
    neuw(T a){
        data=a;
    }
    void display();
};
template <class T>
void neuw<T>::display(){
    cout<<data;
}

void func(int a){
    cout<<"i m first "<<a<<endl;
}
template<class T>
void func(T a){
    cout<<"i m secst "<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<"i m seDDcst "<<a<<endl;
}


int main(){

    // neuw<char> obj('r');
    // obj.display();
    func(4);// exact match takes the 1st prorirty
    /*template means ki wo type ka class wo bana dega and the
    run krega but already int type present tha to exact match mil gaya isliye template wala run nhi kiya*/

return 0;
}