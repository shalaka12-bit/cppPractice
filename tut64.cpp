#include<iostream>
using namespace std;
template <class T>
/*Main abhi nahi jaanta data type kya hoga,
baad me user batayega.”*/
class vector{
    public:
    T * arr;
    int size;
    vector(int m){
    size=m;
    arr = new T[size];
    
    }
    T dotproduct(vector &v){
        T d=0;
        for (int i=0;i<size;i++){
            d +=this-> arr[i]*v.arr[i];
        }
return d;
   }
};

int main(){
    //vector <int>v1(3); //idhar float krna pdega..see niche ka explaination
     vector <float>v1(3) ;
     
    v1.arr[0]=5;
    v1.arr[1]=2;
    v1.arr[2]=4;
    vector <float>v2(3);
    v2.arr[0]=5.6;
    v2.arr[1]=2.3;
    v2.arr[2]=4.7;
    auto a= v1.dotproduct(v2);  
    /*error :
    A template instantiated with one type cannot accept an object instantiated with another type.

So:

vector<int> can work only with vector<int>

vector<float> can work only with vector<float>*/
    cout<<a<<endl;
    return 0 ;

   
}