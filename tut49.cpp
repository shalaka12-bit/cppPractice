//jo chiz pehele initialize hoti hai wo pehele declre hoti hai 
//initialization in constructors
#include<iostream>
using namespace std;
/*syntax
contructors(arguemnt list):initialization section
{
other code,assignment
}*/

class test{
    public:
    int a;
    int b;
     /*this is done when constructor bosy is to complicated
        (a will get i ki value and b will get  ki)*/
  //  test(int i ,int j):a(i),b(j)
 // test(int i ,int j):a(i),b(j+i)
  //test(int i ,int j):a(i),b(2*i)
  //test(int i ,int j):a(i),b(a+j)
  test(int i ,int j):b(j),a(i+b) //-->jo chiz pehele initialize hoti hai wo pehele declre hoti hai ,hence here a is called first, hence this will give garbage value
  
   

    {  cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }
};

int main(){
    test v(2,4);
    
    return 0;
}