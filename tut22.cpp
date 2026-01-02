#include<iostream>
#include<string>
using namespace std;

//Nesting of member functions

class binary{
   string s;

   public:
   void read(void);
   void check_bin(void);
   void onesreplace(void);
   void display(void);
};

void binary::onesreplace(){
    check_bin(); //nesting (if we dont have to show that this function is used then use that fucntion kisike to bhi andar)
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
        
    }
}

void binary :: read(void){
  cout<<"enter binary number"<<endl;
  cin>>s;
}


void binary::check_bin(void){

    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"not binary"<<endl;
            return ;
        }
    }
}
 void binary::display(){
    cout<<"after complimenting"<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);}
    
 }
int main(){
    binary b;
    b.read();
   // b.check_bin();
    b.onesreplace();
    b.display();
    return 0;
}