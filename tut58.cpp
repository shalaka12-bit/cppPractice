/*abstract base class:
1 esi class jisme minimum 1 pure virtual function hota hai 
this is the class
Abstract class provides structure, not objects
basically ye class sirf inherit krne keliye bananyi jati hai so that wo aage jake inherit ho 


pure virtual fucntion:
this are defined in abstract base class only
Pure virtual function forces implementation
if cwhtxt mein display function nhi hota toh automatically base class ka display run ho jata
but pure means that return nothing.
hume pata hona chahiye ki usse overwrite krna hi padega
*/
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
    virtual void display()=0;  //pure virtual class
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
    // cout<<"vdo title is : "<<title<<endl;
    // cout<<"vdo rating is : "<<rating<<endl;
    // cout<<"vdo words is : "<<words<<endl;
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
    pointer[1]->display();  //this wont run base class ka display coz that is pure virtual...it will give error
    return 0;
}