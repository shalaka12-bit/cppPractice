#include<iostream>
using namespace std;

class employee{
    int id;
    static int count; //employees(object) count krega
    /*This only declares the static variable.
      It tells the compiler:
    “There will be ONE count shared by all objects.”
     But no memory is created yet.*/
    public:
    void setdata(void){
        cout<<"enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"the id of this employee is "<<id<<" and this is employee number "<<count<<endl;

    }
    static void getcount(void){ //only accesses static  variables
        cout<<" the value of count is "<<count<<endl;


    }

};

int employee::count; /* outside class
 This defines + allocates memory for that static variable.
 defualt value 0*/

int main(){
    employee harry,rohan,lovish;
    //harry.id=1;  //give error as id is private
    harry.setdata();
    harry.getdata();
  employee::getcount();

    
    rohan.setdata();
    rohan.getdata();
     employee::getcount();

    lovish.setdata();
    lovish.getdata();
     employee::getcount();
    return 0;
}