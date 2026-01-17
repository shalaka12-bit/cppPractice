#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    private:
    int b;
};
class derived: protected base{

};

/*protected is like private, but visible to child classes.(derived)

Outside code cannot access protected members.
base classs	           |     Public Derivation      	Private Derivation    	Protected Derivation
-----------------------|-----------------------------------------------------------------------------
Private members        |  	Not Inherited              	Not Inherited              	Not Inherited              
Protected members      |    	Protected                Private                     Protected                    
Public members         | 	     Public	                 Private                     Protected  

Accessiblity
                           outside class               inside derived class       same class
----------------------------------------------------------------------------------------------------                           
Private members              no                           no                        yes
Protected members            no                           yes                      yes
Public members               yes                           yes                      yes
*/
int main(){
    base b;
    derived d;
    //cout<<b.a; //protected hai to print nhi ho skta direct only inherit ho skta hai 
    
    return 0;
}