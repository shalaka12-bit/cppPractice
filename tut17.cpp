// #include<iostream>
// using namespace std;

// inline int product(int a,int b){
//     // static int c=0; //executes only once
//     // c=c+1; 
//     //   return a*b+c;

//     return a*b;
// }

// int main(){
//     // int a,b;
//     // cout<<"a na db value "<<endl;
//     // cin>>a>>b;
//     // cout<<"product is "<<product(a,b)<<endl;
//     // cout<<"product is "<<product(a,b)<<endl;
//     // cout<<"product is "<<product(a,b)<<endl;
//     // cout<<"product is "<<product(a,b)<<endl;
//     // cout<<"product is "<<product(a,b)<<endl;
//     // cout<<"product is "<<product(a,b)<<endl;
//     // cout<<"product is "<<product(a,b)<<endl;
//     // cout<<"product is "<<product(a,b)<<endl;

    
//     return 0;
// }


//************default arguments*************/
#include<iostream>
using namespace std;

int moneyRec(int currentMoney,float factor=1.04){
    //factors default argument
    return currentMoney*factor;
}

int main(){
    int money=10000;
    cout<<"if u have "<<money<<" rs then money received will be "<<moneyRec(money)<<endl;
    //here only 1 argument is give so 2nd will be taken by default which is already mentioned

    cout<<"if u r vip and u have "<<money<<" rs then money received will be "<<moneyRec(money,1.1)<<endl;
    //here both arguments are given so default value will be ignored
    return 0;
}

//***********constant argument**** */
//int strlen(const char *p){
//      
//         }
//we just want strlength to make sure that no one chnages the actual string const is used
