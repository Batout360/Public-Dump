//time using + operator
#include<iostream>
using namespace std;
class time1{
    int hour,minute,second;
    public:
    time1(){
        hour=0,minute=0,second=0;
    }
    time1(int x,int y,int z){
        second=x;
        minute=y;
        hour=z; 
    }
    void disp(){
        
        cout<<"\ntotal time for seconds is:"<<second<<endl;
        cout<<"\ntotal time for minutes is:"<<minute<<endl;
        cout<<"\ntotal time for hours is:"<<hour<<endl;
        
        

    }
    time1 operator + (time1);
};
time1 time1 :: operator +(time1 t){
    time1 tmp;
    
    tmp.second = second + t.second;
    tmp.minute = minute + t.minute + (tmp.second / 60);
    tmp.second = tmp.second % 60;
    tmp.hour = hour + t.hour + (tmp.minute / 60);
    tmp.minute = tmp.minute % 60;
    return tmp;
}

int main(){
    int a,b,c;
    cout<<"Enter the seconds: ";
    cin>>a;
    cout<<"\nEnter the minutes:";
    cin>>b;
    cout<<"\nEnter your hours:";
    cin>>c;
    time1 t1(a,b,c);

    cout<<"\n\nEnter the seconds: ";
    cin>>a;
    cout<<"\nEnter the minutes:";
    cin>>b;
    cout<<"\nEnter your hours:";
    cin>>c;
    time1 t2(a,b,c);
    time1 t3;
    t3=t1+t2;
    t3.disp();
    return 0;
}
