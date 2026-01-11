/*friends function
1.*/
#include<iostream>
using namespace std;
class complex{
    int a, b ;
    //allowed to do anything with private members
    friend complex sumofc(complex o1,complex o2);
    public:
    void setnumber(int n1,int n2){
        a=n1;
        b=n2;
};
    void print_number(){
        cout<<a<<"+"<<b<<"i"<<endl;
    };
    };

complex sumofc(complex o1,complex o2){
    complex o3;
    //object_name.membername
    o3.setnumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}

int main(){
    complex c1,c2,sum;
     c1.setnumber(2,4);
     c1.print_number();

     c2.setnumber(1,5);
     c2.print_number();

     sum=sumofc(c1,c2);
     sum.print_number();


    
    return 0;
}

/*friend functions are used to access private memebers
1.not in the scope of class
(mtlb wo kuch class ka hissa nhi hai,its say give access)
2.since it is not in the scope of class ,it cant be called from the object of that class
c1.sumofc()==invalid
3.can be invoked without help of any object
4.usually contains objects as arguments
5.can be declared inside private or public any part
6.it cannot access members directky by their names and need 
object_name.membername to access any member
*/