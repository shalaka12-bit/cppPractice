/*multiple inheritance syntax
class derived:visibitly_mode base1.visibiltiy_mode base2{
        derives class content
 }*/
#include<iostream>
using namespace std;

class base1{
   protected :
   int base1num;
   public:
   void set_no(int a){
    base1num=a;
   }
};

class base2{
   protected :
   int base2num;
   public:
   void set_no2(int a){
    base2num=a;
   }
};

class derived:public base1,public base2{
      public:
      void sum(){
      cout<<"num1 is "<<base1num<<endl;
      cout<<"num2 is "<<base2num<<endl;
      cout<<"sum is "<<base1num+base2num<<endl;
    }
      
};
int main(){
    derived obj;
    obj.set_no(23);
    obj.set_no2(13);
    obj.sum();
    return 0;
}