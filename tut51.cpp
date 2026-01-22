#include<iostream>
using namespace std;

class complex{
    int real,imaginary;
    public:
    void setdata(int a,int b){
        real=a;
        imaginary=b;
}
    void getdata(){
        cout<<"real number is: "<<real<<endl;
        cout<<"imaginary number is: "<<imaginary<<endl;
    }
};
int main(){
   // complex c1;
   //complex *ptr = &c1;
   complex *ptr=new complex; //-->It creates the object in memory and returns its address.
   //(*ptr).setdata(2,4);  
   ptr->setdata(1,5);

   //(*ptr).getdata();
   ptr->getdata(); //-->ptr jo object ko point krta hai uska data
    
   //array of objects
   complex *ptr1=new complex[3];//-->3 obj of complec class
   ptr1->setdata(1,9); //-->obj at [[0]]
   ptr1->getdata();

    (ptr1+1)->setdata(1,3);//-->obj at[1]
   (ptr1+1)->getdata();


    return 0;
}