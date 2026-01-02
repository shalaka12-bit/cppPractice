#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;

    public:
    void setid(void){
        salary=12;
        cout<<"enter id of employee "<<endl;
        cin>>id;
    }

    void getid(void){
    cout<<" the id of this employee is "<<id<<endl;
    }
};
int main(){

    employee fb[4]; // 4 shows the employees(rohan,harry,etc)
    for(int i=0;i<4;i++){
        fb[i].setid();
        fb[i].getid();
    }
    
    return 0;
}