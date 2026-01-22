#include<iostream>
using namespace std;

int main(){
    int a=4;
    int* ptr=&a;
    *ptr=34;
    cout<<"the vaue of a is: "<<*(ptr)<<endl;

    //new operator
    //New dynamic memory alottation
    float *p=new float(43.2);
    delete p;
    cout<<"float value is: "<<*(p)<<endl;

    int *arr= new int[3];
    arr[0]=45;
    arr[1]=7;
    arr[2]=5;
    //delete keyword
    //to free up space of dynamic memory allocation
    delete[] arr;
    //niche ke prints mein garbage store hoga
    cout<<*arr;
    cout<<"value at arr[0] is "<<arr[0]<<endl;
    cout<<"value at arr[1] is "<<arr[1]<<endl;
    cout<<"value at arr[1] is "<<*(arr+1)<<endl;
    return 0;
}