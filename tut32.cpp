#include<iostream>
using namespace std;

class easy{
    int data1;
    int data2;

    public:
    easy(int a,int b=4){
        data1=a;
        data2=b;
    }

    void print();
};

void easy:: print(){
    cout<<"value is "<<data1<<"and"<<data2<<endl;
}

int main(){
    easy a1(3);
    a1.print();
    
    return 0;
}