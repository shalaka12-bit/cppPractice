#include<iostream>
using namespace std;
//ambiguity resolution
class base1{
    public:
    void greet(){
        cout<<"hoe r u?"<<endl;
    }
};

class base2{
    public:
    void greet(){
        cout<<"who u r?"<<endl;
    }
};
class derived:public base1,public base2{
    public:
    void greet(){
        base2::greet();
    }
};


int main(){
    derived d;
    d.greet();
    /*two greet functions are there ,one in base1 and other in base2
    toh greet ko call kiya toh it will give error as there are two so which to call,thats why in derived class greet is defined and told which to call*/
    return 0;
}

/*ambiguity 2:
supppose if 1 class mein fucntion banaya and then dusri class banayi and inherit kiya and same name ka function banaya.
After that main function mein call kiya toh error nhi ayega ..dusri class mein jo fucntion hai wo run hoga becoz usne overwrite kr diya upper wame fucntion ko
*/