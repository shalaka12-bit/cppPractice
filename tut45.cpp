#include<iostream>
using namespace std;
/* student ---> test
   student ---> sports
   test --->results
   sports --->results*/

class student{
    protected :
    int roll_no;
    public:
    void set_no(int a){
        roll_no=a;
    }
    void print_no(){
        cout<<"roll no is : "<<roll_no<<endl;
    }
};
class test:virtual public student{
    protected:
    float m1,m2;
    public:
    void set_marks(float a, float b){
        m1=a;
        m2=b;
    }
    void marks(){
        cout<<"maths marks are : "<<m1<<endl;
        cout  <<"physics marks are : "<<m2<<endl;
    }
};
class sports:virtual public student{
    protected:
       int score;
       public:
       void scoreis(int a){
        score= a;
       }
       void printscore(){
        cout<<"cricket score is : "<<score<<endl;
       }
};
class results:public test,public sports{
     float total;
     public:
     void display(){
        total= score+m1+m2;
        
        print_no();
         marks();
         printscore();
         cout<<"total is : "<<total<<endl;

     } 
};


int main(){
    results r;
    r.set_no(54);
    r.set_marks(98.1,99.0);
    r.scoreis(8);
    r.display();
    
    return 0;
}
/*if virtual nhi karte toh results mein 2 times roll no aajata and then ambiguity create ho jati*/