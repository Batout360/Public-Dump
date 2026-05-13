//Swap values of a pair of integers using Refrence

#include <iostream>
using namespace std;


int main(){
    int a,b;
    cout<<"Enter your 1st number:";
    cin>>a;
    cout<<"Enter your 2st number:";
    cin>>b;
    int &c=a;
    int &d=b;
    cout<<"The order of your numbers are :"<<endl<<a<<endl<<b<<endl;
    cout<<"The order of the numbers after swaped:"<<endl<<d<<endl<<c<<endl;

    return 0;
}
