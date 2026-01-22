//array of objects
#include<iostream>
using namespace std;

class shop{
    int id,price;
    public:
    void setdata(int a,int b){
        id=a;
        price=b;
    }
    void getdata(){
        cout<<"Id is : "<<id<<endl;
        cout<<"price is : "<<price<<endl;
    }
};
int main(){
    shop *ptr=new shop[3];
    shop *ptr1=ptr; //Create another pointer (ptr1) that points to the SAME place as ptr
    int p,q;
    for(int i=0;i<3;i++){
        cout<<"enter id of item "<<i+1<<endl;
        cin>>p;
        cout<<"enter price of item "<<i+1<<endl;
        cin>>q;
        ptr->setdata(p,q);
        ptr++;
    }  
    for(int i=0;i<3;i++){
        cout<<"id and price of item "<<i+1<<":"<<endl;
        ptr1->getdata();
        ptr1++;

    }
    return 0;
}