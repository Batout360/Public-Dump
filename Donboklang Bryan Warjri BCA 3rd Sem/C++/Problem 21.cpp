#include<iostream>
using namespace std;
class distance1{
    int dis;
    public:
    distance1(){
        dis=0;
    }
    distance1(int x){
        dis=x; 
    }
    void disp(){
        cout<<"\ndistance is="<<dis<<endl;

    }
    distance1 operator + (distance1);
};
distance1 distance1 :: operator +(distance1 d){
    distance1 tmp;
    tmp.dis= dis+d.dis;
    return tmp;
}

int main(){
    int a,b;
    cout<<"Enter the 1st distance ";
    cin>>a;
    cout<<"\nEnter the 2nd distance:";
    cin>>b;
    distance1 d1(a),d2(b);
    distance1 d3;
    d3=d1+d2;
    d3.disp();
    return 0;
}
