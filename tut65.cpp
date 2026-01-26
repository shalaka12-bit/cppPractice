//inside a class function, this is ALWAYS a pointer — even if you didn’t write any pointer
/*class template with multiple parameters
template <class T1, class T2>
class name{
     body
     }
*/

#include<iostream>
using namespace std;
 template <class t1,class t2>
 class mynewclass{
    public:
    t1 data1;
    t2 data2;
    mynewclass(t1 a,t2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2;
        }
 };
 int main(){
    mynewclass<int,char> obj(4,'e');
    obj.display();
    
    return 0;
}