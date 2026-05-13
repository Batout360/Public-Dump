//Overloading of varables
#include <iostream>
using namespace std;

void result(int a,int b){
    float areat=a+b;
    cout<<"The area of a triangle is:"<<areat<<endl;
}

void result(int a){
    float areac = 3.14*a*a;
    cout<<"The are of a circle is:"<<areac<<endl;
}
int main() {
    int a,b;
    cout<<"Enter The First Number ";
    cin>>a;
    cout<<"Enter The Second number: ";
    cin>>b;
    result(a,b);
    result(a);
    return 0;
}
