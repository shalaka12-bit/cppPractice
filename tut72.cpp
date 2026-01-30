#include<iostream>
#include<list>
//if insertaion deletion fast chahiye to use list and if access fast chahiye to use array 
using namespace std;
void display(list<int> &lst){
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++){//.end() points one position after the last element
        cout<<*it<<" ";
    }
    cout<<endl;
}



int main(){
    // list<int> list1;
    // list1.push_back(2);
    // list1.push_back(53);
    // list1.push_back(7);
    // list1.push_back(90);
    // list1.push_back(45);
    // //display(list1);
    // //list1.pop_back();
    // //list1.pop_front();

    // //list1.sort();
    //  display(list1);

    //  list<int> list2(3);
    //  list<int>:: iterator itt;
    //  itt= list2.begin();
    //  *itt=2;
    //  itt++;
    //  *itt=45;
    //  itt++;
    //  *itt=3;
    // //  list2.sort();
    //  display(list2);
    // //  list1.merge(list2);
    // //  display(list1);
    // //  list1.reverse();
    // //  display(list1);
    
    //inserting and removing elemnts from middle
    list<int> l = {10, 20, 30, 40,67,4};

    auto it = l.begin(); // points to 1
    advance(it, 4);    //  moves iterator to 67 position(can use i++ istead of advance)
    l.insert(it,3);
    display(l);
    l.erase(it);//it is still pointing to 67, because:

//insert() does NOT invalidate list iterators

//So erase(it) removes 67
    display(l);

     
    
    return 0;
}