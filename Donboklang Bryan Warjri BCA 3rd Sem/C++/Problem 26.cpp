//class type conversion for 3 data set
#include<iostream>
using namespace std;
class box1{
    float width,height,length;
    public:
    //constructor
    box1(int a,int b,int c)
    {
        width=a;
        height=b;
        length=c;
    }
    //type conversion operator
    operator int(){
        //volume calculation
        int vol=width*height*length;
        return vol;
    }
};
int main(){
    float a,b,c;
    cout<<"Enter the width:";
    cin>>a;
    cout<<"\nEnter the height:";
    cin>>b;
    cout<<"\nEnter the lenght:";
    cin>>c;
    cout<<endl;


    box1 v(a,b,c);
    int vol=v;
    cout<<"volume="<<vol;


}
