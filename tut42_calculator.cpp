//calculator
#include<iostream>
#include<cmath>
using namespace std;

class simplecal{
    
    int a ,b;
    public:
    void setnos(){
        
        cout<<"enter 1st no. "<<endl;
        cin>>a;
        cout<<"enter 2st no. "<<endl;
        cin>>b;
    }

    void cal(){
        cout<<"a+b = "<<a+b<<endl;
        cout<<"a-b = "<<a-b<<endl;
        cout<<"a*b = "<<a*b<<endl;
        cout<<"a/b = "<<a/b<<endl;
    }
    };
class scical{
     int a ,b;
    public:
    void setnos2(){
        
        cout<<"enter 1st no. "<<endl;
        cin>>a;
        cout<<"enter 2st no. "<<endl;
        cin>>b;
    }
    
    void scicalcu(){
         cout<<"value of sin(a) is "<<sin(a)<<endl;
         cout<<"value of cos(a) is "<<cos(b)<<endl;
    }
    };

class fullcalc:public simplecal,public scical{

};

int main(){
    fullcalc obj;
    obj.setnos();
    obj.cal();
    obj.setnos2();
    obj.scicalcu();
    return 0;
}   