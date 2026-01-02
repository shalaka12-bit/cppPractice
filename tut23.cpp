//using arrays in classes
#include<iostream>
using namespace std;
 class shop{
    int itemId[100];
    int itemPrice[100];
    int counter; /*this is showing index of array
    means 0 pe 1 iemid and itemprice store hoga
    then 1 pe 2nd item price and id stroe hoga*/
    public:
    void initCounter(void){counter=0;}
    void setPrice(void);
    void displayPrice(void);
 };
 void shop::setPrice(void){
    cout<<"Enter id of item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"enter price "<<endl;
    cin>>itemPrice[counter];
    counter++;// counter increments as new object gets create
 }
 void shop::displayPrice(void){
    for (int i=0;i<counter;i++){
       cout<<"price of item with id "<<itemId[i] <<"is "<<itemPrice[i]<<endl;
    }

 }

int main(){
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    
    return 0;
}