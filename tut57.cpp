#include<iostream>
#include<cstring>
using namespace std;

class cwh{
    protected:
    string title;
    float rating;
    public:
   
    cwh(string s,float r){
        title=s;
        rating=r;
    }
    virtual void display(){

    }
};
class cwhvdo:public cwh{
float videolength;
public:
cwhvdo(string s,float r,int vlen):cwh(s,r){
    videolength=vlen;
}
void display(){
    cout<<"vdo title is : "<<title<<endl;
    cout<<"vdo rating is : "<<rating<<endl;
    cout<<"vdo lemgth is : "<<videolength<<endl;
}
};
class cwhtxt:public cwh{
int words;
public:

cwhtxt(string s,float r,int w):cwh(s,r){
    words=w;
}
void display(){
    cout<<"vdo title is : "<<title<<endl;
    cout<<"vdo rating is : "<<rating<<endl;
    cout<<"vdo words is : "<<words<<endl;
}
};

int main(){
    
    string s;
    float r;
    int w,l;

    //for cwh vdo
    s="c++ tutorial";
    r=4.5;
    l=24;
     cwhvdo obj1(s,r,l);
    // obj1.display();
    
     //for cwhtxt
      s="c++ tutorial";
    r=4.2;
    w=564;
     cwhtxt obj(s,r,w);
    // obj.display();


    //using pointer
    cwh *pointer[2];
    pointer[0]=&obj1;
    pointer[1]=&obj;
    pointer[0]->display();
    pointer[1]->display();
    return 0;
}
/*Rules for virtual functions
1.They cannot be static
2.They are accessed by object pointers
3.Virtual functions can be a friend of another class
4.A virtual function in the base class might not be used.
5.If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
    -->if cwhtxt mein display function nhi hota toh automatically base class ka display run ho jata
*/