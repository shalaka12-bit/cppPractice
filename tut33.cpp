/*Dynamic initialization of an object means:

The object is initialized using values that are decided at runtime (while the program is running), not fixed values written directly in the code.*/
#include<iostream>
using namespace std;

class Bankdeposit{
       int principle;
       int years;
       float rate;
       float returnvlaue;

       public:
       /*Agar class me koi bhi parameterized constructor hai
aur default constructor nahi hai,
toh C++ khud se default constructor nahi banata.*/
    Bankdeposit(){}
       Bankdeposit(int p,int y,float r);
       Bankdeposit(int p,int y,int r);
       void show();
};
Bankdeposit::Bankdeposit(int p,int y,float r){
    principle=p;
    years=y;
    rate=r;
    returnvlaue=principle;
    for(int i=0;i<y;i++){
        returnvlaue=returnvlaue*(1+rate);
    }
}
Bankdeposit::Bankdeposit(int p,int y,int r){
    principle=p;
    years=y;
    rate=float(r)/100;
    returnvlaue=principle;
    for(int i=0;i<y;i++){
        returnvlaue=returnvlaue*(1+rate);
    }
}
void Bankdeposit::show(){
    cout<<returnvlaue;

}

int main(){
    
    int p,y;
    float r;
    int R;
    //“Default constructor chahiye(a1 ,a2) object bnte hi direct call hoga contructor
    //Bankdeposit(){} thats why we need this statement
   
    Bankdeposit a1,a2;
    cin>>p>>y>>r;
     /*Constructor sirf object banate waqt call hota hai,  
assignment (`=`) ke waqt nahi.*/
    a1=Bankdeposit(p,y,r);
    a1.show();

    cin>>p>>y>>R;
    a2=Bankdeposit(p,y,R);
    a2.show();
   


    

    
    return 0;
}    