#include<iostream>
using namespace std;

int main(){
    //array example
    int marks[4]={23,56,89,4};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // int mathmarks[3];
    // mathmarks[0]=34;
    // mathmarks[1]=34;
    // mathmarks[2]=54;

    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[2]<<endl;
    // //change value of array 
    // marks[2]=55;
    // cout<<marks[2]<<endl;

    // for(int i=0;i<4;i++){
    //     cout<<"values of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    // int i=0;
    // while(i<=3){
    //      cout<<"values of marks "<<i<<" is "<<marks[i]<<endl;
    //      i++;

    // }


    // int i=0;
    // do{
    //      cout<<"values of marks "<<i<<" is "<<marks[i]<<endl;
    //      i++;
    // }
    // while(i<4);

    //pointers and arrays
    int* p=marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

    // cout<<"the value of *p is "<<*p<<endl;
    // cout<<"the value of *(p+1) is "<<*(p+1) <<endl;
    // cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"the value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
    
}