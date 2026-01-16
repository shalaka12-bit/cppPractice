#include<iostream>
using namespace std;

//base class
class employee{
    public:
    int id;
    float salary;
    employee(int inpid){
        id=inpid;
        salary=34.2;
    }
    employee(){}
};
//derved class syntax
/*
class {{derived class name}}:{{visibitly mode}} {{base class name}}
{
  class member/methods
} 
note:
1. default visibilty mode is private
2.public visibilty mode: public members of base class becomes public members of derived class
2.private visibilty mode: public members of base class becomes private members of derived class
4.private members of base class are never inherited
*/

class programmer: public employee
{
    public:
    int langcode;
    programmer(int inpid){ /*jab skill(10) call hoga tb ye inpid mein ayega and employee se inherit kiya hai isliye emplyee ka 1 defalut constructor hona chahiye
        hence wo contructro banaya*/
        id=inpid;
        langcode=5;
}
   
   void getdata(){
    cout<<id<<endl;
   }
};
 int main(){
    employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skill(10);  
    cout<<skill.langcode<<endl;
    cout<<skill.id<<endl;
    skill.getdata();

    return 0;
}