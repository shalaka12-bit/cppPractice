/*A destructor is a special member function that is called automatically when an object is destroyed.
Its main job is to free resources (memory, files, connections, etc.) that the object was using.*/
//destructor never takes an argument nor does it return any value

#include<iostream>
using namespace std;
int count = 0;
class num{
    public:
    num(){
    count++;
    cout<<"this is time when constructor is called for object number"<<count<<endl;
    }
    
    ~num(){
        cout<<"this is the time when destructor is called for obj number"<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"we are inside main function"<<endl;
    cout<<"creating 1st object n1"<<endl;
    num n1;
    //this is just a block jo start hoga and end hone ke baad destruct
    //{}ye jb khatam hoga to destroy ho jayega 
    {
       cout<<"entering this block"<<endl;
       cout<<"creatinf 2 objs"<<endl;
       num n2,n3;
       cout<<"exiting this block"<<endl; 
    }
    cout<<"back to main"<<endl;
    //back to main ke baad n1 wala destroy hoga coz n1 ka bracket to niche khatam hota hai 
    return 0;
}
