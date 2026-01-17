#include<iostream>
using namespace std;

class student{
    protected:
    int rollNumber;
    public:
    void set_roll_number(int a){
        rollNumber=a;
    }
    int getRoll();
};
int student::getRoll(){
    cout<<"roll no. is " <<rollNumber<<endl;
}

class exam:public student{
    protected:
    float maths;
    float physics;
    public:
    void setMarks(float m,float p){
        maths=m;
        physics=p;
    }
    void getmarks(){
        cout<<"maths marks are "<<maths<<endl;
        cout<<"physics marks are "<<physics<<endl;
    }
};

class result:public exam{
    public:
    void display_results(){
        cout<<"your percentage is "<<(maths+physics)/2<<endl;
    }
};
int main(){
    result res;
    res.set_roll_number(54);
    res.getRoll();
    res.setMarks(98.2,98.0);
    res.getmarks();
    res.display_results();
    
    return 0;
}

/*student-->exma-->result
this is called as inheritance path  */