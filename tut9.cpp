#include<iostream>
using namespace std;
int main(){
    // cout<<"if else statements(selection control)"<<endl;
     unsigned int age;
    // cout<<"age check,enter age:"<<endl;
    // cin>>age;
    // if (age<18){
    //     cout<<"cannot come to party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"children pass"<<endl;
    // }
    // else{
    //     cout<<"allowed to party"<<endl; 
    // }


    cout<<"switch case(selection control)"<<endl;
    cout<<"enter age:"<<endl;
    cin>>age;
    switch(age)
    {
        case 18:
        cout<<"age is 18"<<endl;
        break; //if we didnt use break then current and further all cout will be printed
        case 3:
        cout<<"age is 3"<<endl;
        break;
        case 33:
        cout<<"age is 33"<<endl;
        break;
        default:
        cout<<"invlaid"<<endl;
        break;

    }
      return 0;

}


    
  

