//Function overloading
//multiple function with same name
#include<iostream>
using namespace std;
float volume(int r,int h){
    return (3.14*r*r*h);
}

int volume(int a){
    return(a*a*a);
}

int main(){
    cout<<"volume of cube with side 4 is "<<volume(4)<<endl;
    cout<<"volume of cylinder with radius 4 and height 3 is "<<volume(4,3)<<endl;
    
    return 0;
}