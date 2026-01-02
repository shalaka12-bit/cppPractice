#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}
 //this will not swap a and b 
 void swap(int a,int b ){
    int temp = a;
    a=b;
    b=temp;
 }

 // call by using pointers reference
 //this will swap values
 void swappointers(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
 }

 //this will swap by using referece varibale which we learnt in tut7

 void swapreference(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
 }
 

int main(){
    int x=4;
    int y=6;
    swap(x,y);
    cout<<"value of x is "<<x<<" and value of y is "<<y<<endl;

    // swappointers(&x,&y);
    // cout<<"value of x is "<<x<<" and value of y is "<<y<<endl;
    

    swapreference(x,y);
    cout<<"value of x is "<<x<<" and value of y is "<<y<<endl;
    
    return 0;
}   