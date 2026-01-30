#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    //function objects(functor):function wrapped in a class so that it available like an object
    //function ko class ke andar as a object call krna 
    //sort(address of first element, address of last element);
    int arr[] = {1, 73, 4, 2, 54, 7};
    sort( arr, arr+6, greater< int >( ));//function object--> descending order ke liye

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}