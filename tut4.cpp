#include<iostream>
using namespace std;
int glo=5;
void sum(){
    int a=456;
    cout<<glo<<"\n";
}
int main(){
  int a=3,b=45;
  char s='d';
//   cout<<"this is tut 4 of globat local varubale.\nValue of b is:"<<b<<".\nValue of a is:"<<a;
//   cout<<".\nchar value is:"<<s<<".";
   int glo=56;
   glo=89;
   bool is_true=true;
   sum(); 
   cout<<glo<<"\n"<<is_true;
  
  return 0;

}