#include<iostream>
#include<cmath>
using namespace std;


class Distance;
class point{
    int a,b;
    public:
    friend class Distance;
    point(int x,int y){
        a=x;
        b=y;
    }
    void pointis(){
        cout<<"point is ("<<a<<","<<b<<")"<<endl;
    }

};

class Distance{
    
    public:
    void caldis(point o1,point o2){ 

        float y=sqrt((o1.a - o2.a)*(o1.a - o2.a)+(o1.b - o2.b)*(o1.b - o2.b) );
        cout<<y<<endl;
    }
};
//calcualting distance between two points
int main(){
    point a(1,1);
    a.pointis(); 

    point b(1,1);
    b.pointis();

    Distance ne;
    ne.caldis(a,b);  

    
    return 0;
}

