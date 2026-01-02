// #include<iostream>
// using namespace std;
// //******Factorial Number*******/
// int factorial(int n){
//     if(n==(0 || 1))// base condition mandatory
//     {
//         return 1;
//     }
//     return n* factorial(n-1);
// }

// int main(){
//     int n;
//     cout<<"enter any no: "<<endl;
//     cin>>n;
//     cout<<"factorial is: "<<factorial( n)<<endl;
  
    
//     return 0;
// } 

// fibonacci seq //
//1,1,2,3,5,8,13..........(1+1=2,1+2=3,..)
#include<iostream>
using namespace std;
//nth term of the series
int fibonacci(int n){
    if (n<2){
        return 1;
    }
    return fibonacci(n-2)+fibonacci(n-1);


        
    }
    

int main(int n){
    cout<<"enter no "<<endl;
    cin>>n;

    cout<<"term at position "<<n<<"is "<<fibonacci(n)<<endl;
    return 0;
}
