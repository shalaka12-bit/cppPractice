//fucntions using templates
#include<iostream>
using namespace std;

template<class t1,class t2>
float avgf(t1 a, t2 b){
    float avg=(a+b)/2;
    return avg;
}

template< class T>
void swapp(T &a,T &b){
    T temp = a;
    a=b;
    b=temp;
}
int main(){
    float a;
    a = avgf(3.4,7);
    cout<<a<<endl;

    int x=45, y=5;
    swapp(x,y);
    cout<<x<<endl<<y;


    
    return 0;
}