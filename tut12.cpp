#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b=&a;
    //&a address operator
    cout<<"address of a is\t"<<b<<endl;
    cout<<"address of a is\t"<<&a<<endl;

    
    
    //* dereferencing operator
     cout<<"value at address b is\t"<<*b<<endl;

     //pointer to pointer 
     int** c=&b;
     cout<<"adress of b is "<<c<<endl;
     cout<<"adress of b is "<<&b<<endl;
     cout<<"value at address c is "<<*c<<endl;
     cout<<"value at address value_at(value_at(c)c is "<<**c<<endl;
     
     return 0;
} 