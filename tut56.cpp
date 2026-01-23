#include<iostream>
using namespace std;

class baseclass{
    public:
    int var_base=2;
    virtual void display(){ //virtual so that derived ka display run ho

/*baseclass says if mere type ka pointer,derives class ke obj ko point kare to uska ki display run karao*/
        cout<<"variable of baseclass "<<var_base<<endl;
    }
};

class derivedclass:public baseclass{
    public:
    int var_der=4;
    void display(){
        cout<<"variable of baseclass "<<var_base<<endl;
        cout<<"variable of dervied class "<<var_der<<endl;

    }
};

int main(){
    baseclass *basee;
    baseclass obj1;
    derivedclass obj2;
    basee=&obj2;
   // basee->display();
    /*upper wale humesha baseclass ka hi display run hoga as explained in last tutorial*/

    //but if we want to display of derved ..then we use virtual to the baseclass display
    //run time polymorphism
    basee->display();

    
    return 0;
}
//objects jo different differnet classes ko belong kr rhe hai wo 1 tarah ke msg ko respond krte hai 