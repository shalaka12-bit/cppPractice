#include<iostream>
using namespace std;

typedef struct employee
//by using typedef ..we are referring struct employee as ep(just shortcut)
{
    int ID;
    char favchar;
    float salary;
} ep;

union money 
{
    int rice;
    char car;
    float pounds;
};

int main(){
    enum meal{breakfast,lunch,dinner};
    meal M1=breakfast; //meal 1 datatype ban gaya hai ab
    meal M2=lunch;
    cout<<(M1==0)<<endl;//this is true 
    // cout<<breakfast<<endl;//gives 0(index)
    // cout<<lunch<<endl;//gives 1
    // cout<<dinner<<endl;
    ep harry;
    union money m1;
    m1.rice=40;
    m1.car='e';
    cout<<m1.rice<<endl; //this wil give some garbage vaalue as we are using car currently
                         //only one can be used at a time
                         //memory management
    harry.ID=1;
    harry.favchar='f';
    harry.salary=12000;
    cout<<"the value is "<<harry.ID<<endl;
    cout<<"the value is "<<harry.favchar<<endl;
    cout<<"the value is "<<harry.salary<<endl;

    
    return 0;
}