#include<iostream>
#include<iomanip>
using namespace std;
int main(){
 //   int s;
    // const int s=45;
    // //s=5; will give error
    // cout<<s;
    // return 0;   

    //****manipulators**** */
    // int a =5,b=66,c=689;
    // cout<<"value of a without setw: "<<a<<endl;
    // cout<<"value of b without setw: "<<b<<endl;
    // cout<<"value of c without setw: "<<c<<endl;

    // cout<<"value of a with setw : "<<setw(4)<<a<<endl;
    // cout<<"value of b with setw : "<<setw(4)<<b<<endl;
    // cout<<"value of c with setw : "<<setw(4)<<c<<endl;

    //*****operator precendence****** */
    int a=4,b=23;
    int c=((((a*b)/b)+46)-1);
    cout<<c;
    return 0;





}