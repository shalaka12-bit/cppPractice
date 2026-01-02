// #include<iostream>
// using namespace std;

// //Function prototype
// //type function name (arguemnts);
// //int sum(int a,int b); ----->acceptable
// //int sum(int a,b) ----->not accpet
// //int sum(int,int); --->accpet

// int sum(int a,int b){
//     // a and b are the formal parameters which will take value from actual parameterss
//     int c= a+b;
//     return c;
// }

// int main(){
//     int num1,num2;
//     cout<<"enter num1: "<<endl;
//     cin>>num1;
//     cout<<"enter num2: "<<endl;
//     cin>>num2;
//     //num1 and num2 are actual pparameters
//     cout<<"Sum is: "<<sum(num1,num2)<<endl;
    
//     return 0;
// }


#include<iostream>
using namespace std;

//Function prototype
//type function name (arguemnts);
//int sum(int a,int b); ----->acceptable
//int sum(int a,b) ----->not accpet
//int sum(int,int); --->accpet

int sum(int a,int b);
void g();

int main(){
    int num1,num2;
    cout<<"enter num1: "<<endl;
    cin>>num1;
    cout<<"enter num2: "<<endl;
    cin>>num2;
    //num1 and num2 are actual pparameters
    cout<<"Sum is: "<<sum(num1,num2)<<endl;
    g();
    
    return 0;
}
int sum(int a,int b){
    // a and b are the formal parameters which will take value from actual parameterss
    int c= a+b;
    return c;
}

void g(){
    cout<<"good morning";

}