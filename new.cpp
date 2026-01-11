// // #include <cmath>
// // #include <cstdio>
// // #include <vector>
// // #include <iostream>
// // #include <algorithm>
// // using namespace std;


// // int main() {
// //     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for (int i=0;i<n;i++){
// //         cin>>arr[i] ;
// //     }
    
// //     for (int i=(n-1);i>=0;i--){
// //         cout<<arr[i]<<" ";
// //     }
// //     return 0;
// // }

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <cassert>
// using namespace std;
// #include<iostream>
// using namespace std;
// // Write your Student class here
// class Student{
// public:
// void input();

// };
// void Student::input(){
//     int score[5];
//     for(int i=0;i<5;i++){
//         cin>>score[i];
//     }

    
// };


// int main() {
//     int n; // number of students
//     cin >> n;
//     Student *s = new Student[n]; // an array of n students
    
//     for(int i = 0; i < n; i++){
//         s[i].input();
//     }

//     // calculate kristen's score
//     // int kristen_score = s[0].calculateTotalScore();

//     // // determine how many students scored higher than kristen
//     // int count = 0; 
//     // for(int i = 1; i < n; i++){
//     //     int total = s[i].calculateTotalScore();
//     //     if(total > kristen_score){
//     //         count++;
//     //     }
//     // }

//     // // print result
//     // cout << count;
    
//     return 0;
// }
 //create a function which takes two point objects and computes the distance between those two points
//Hint :make it a friend function
#include<iostream>
#include<cmath>
using namespace std;
class point{
    int x ,y ;
    friend void distance(point o1 ,point o2 );
    public:
    point (int a ,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
void distance(point o1 ,point o2){
    float dist;
dist=sqrt(pow(o2.x-o1.x ,2)+pow(o2.y-o1.y ,2));
cout<<dist<<endl;
}
int main()
{
   point p(1,1);
   p.display();
   point q(2,2);
   q.display(); 
   distance(p,q);

    return 0;
}