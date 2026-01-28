#include<iostream>
#include<vector>
using namespace std;
template< class T>
void display(vector<T> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    //ways to create vector
    vector<int> vec1;//zero length integer vector
    int element,size;
    // cout<<"enter the aize of vector : "<<endl;
    // cin>>size;
    // for(int i =0; i<size;i++){
    //     cout<<"enter an element to add "<<endl;
    //     cin>>element;
    //     vec1.push_back(element); //push_back vector ke END me ek naya element add karta hai
        
    // }
    // //vec1.pop_back();
    // display(vec1);
    // vector<int>::iterator iter=vec1.begin();
    // vec1.insert(iter+1,21,34);
    // display(vec1);

    vector<char> vec2(4); //4 element char vector
    vec2.push_back('e');
    display(vec2);
    vector<char> vec3(vec2);// 4 element char vec from vec2..vec3 ko vec2 ka exact copy bana do
    display (vec3);
    vector<int> vec4(6,4);// 6 elements vector of 4s
    display(vec4);
    return 0;
}