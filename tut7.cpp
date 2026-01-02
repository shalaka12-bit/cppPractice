#include<iostream>
using namespace std;
int c=56;
int main(){
    // int a,b,c;
    // cout<<"vaule of a is:"<<endl;
    // cin>>a;
    // cout<<"vaule of b is:"<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"sum is:"<<c;
    // cout<<"global c is:"<<::c;

    // float d=54.2f;
    // long double e=753.21l;
    // cout<<"size of 54.2 is:"<<sizeof(54.2)<<endl;
    // cout<<"size of 54.2f is:"<<sizeof(54.2f)<<endl;
    // cout<<"size of 54.2F is:"<<sizeof(54.2F)<<endl;
    // cout<<"size of 54.2l is:"<<sizeof(54.2l)<<endl;
    // cout<<"size of 54.2L is:"<<sizeof(54.2L)<<endl;

    // *******************Reference variable**********
    // float a=54.2;
    // float & b = a;
    // cout<<a<<endl;
    // cout<<b<<endl;

    //****type casting **********/
    int a=45;
    float b=45.7;
    cout<<"value of a is:"<<float(a)<<endl;
    cout<<"value of a is:"<<(float)a<<endl;
    cout<<"value of b is:"<<int(b)<<endl;
    cout<<"value of a is:"<<(int)b<<endl;
    int c = int(b);
    cout<<c;

    return 0;
    
}