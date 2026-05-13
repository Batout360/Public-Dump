//to ilustrate the default arguments
#include <iostream>
using namespace std;

void areat(int a=0,int b=0){
    float areat= 1/2*a+b;
    cout<<"The area of a triangle is:"<<areat<<endl;
}

void areac(int a=0){
    float areac = 3.14*a*a;
    cout<<"The are of a circle is:"<<areac<<endl;
}
void aresq(int a=0){
    float aresq=a*a*a*a;
    cout<<"The area of a square is:"<<aresq<<endl;
}


int main() {
    int a,b;
    cout<<"Enter The First Number ";
    cin>>a;
    cout<<"Enter The Second number: ";
    cin>>b;
    areat(a,b);
    areac(a);
    aresq(a);
    return 0;
}
