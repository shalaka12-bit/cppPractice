#include<iostream>
using namespace std;
int main(){
    cout<<"arithmetic operators"<<endl;
    int a = 4,b=6;
    cout<<"a+b:"<<a+b<<endl;
    cout<<"a-b:"<<a-b<<endl;
    cout<<"a*b:"<<a*b<<endl;
    cout<<"a/b:"<<a/b<<endl;
    cout<<"a%b:"<<a%b<<endl;
    cout<<"a++:"<<a++<<endl;
    cout<<"a--:"<<a--<<endl;
    cout<<"++a:"<<++a<<endl;
    cout<<"--a:"<<--a<<endl;

    cout<<"assignment operators"<<endl;
    //int a=45,b=6;// '=' is assignment operator ,assigns the value

    cout<<"comparison operators"<<endl;
    cout<<"a==b is:"<<(a==b)<<endl;    
    cout<<"a!=b is:"<<(a!=b)<<endl;    
    cout<<"a>=b is:"<<(a>=b)<<endl;    
    cout<<"a<=b is:"<<(a<=b)<<endl;    
    cout<<"a<b is:"<<(a<b)<<endl;    
    cout<<"a>b is:"<<(a>b)<<endl;    

    cout<<"logical operators"<<endl;
    cout<<"value of a==b and a<=b is:"<<((a==b) && (a<=b))<<endl;    
    cout<<"value of a==b or a<=b is:"<<((a==b) || (a<=b))<<endl;    
    cout<<"value of logical not a==b :"<<(!(a==b))<<endl;    
   
     

    return 0;

}