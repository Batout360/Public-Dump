//class type conversion for time from hours to minutes using type conversion
#include<iostream>
using namespace std;
class time1{
    int hrs,minutes;
    public:
    //constructor
    time1(int a,int b)
    {
        hrs=a;
        minutes=b;
    }

    //type conversion operator
    operator int(){
        int vol;
        vol=(hrs*60)+minutes;
        return vol;
    }
};
int main(){
    int a,b;
    cout<<"\nEnter the hours:";
    cin>>a;
    cout<<"\nEnter your minutes";
    cin>>b;
    
    time1 t(a,b);
    int total=t;
    cout<<"\nTotal minutes ="<<total;


}
