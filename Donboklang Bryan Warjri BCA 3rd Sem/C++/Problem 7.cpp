//To calculate the Roots of Equadrictated equation

#include <iostream>
#include <math.h>
using namespace std;
int main (){
    float a,b,c,x,y;
    cout << "\nEnter the variable number for a: \n";
    cin>>a;
    cout<<"\nEnter the variable number for b: \n";
    cin>>b;
    cout<<"\nEnter the variable number for c: \n";
    cin>>c;

    x=(b+(sqrt(((b*b)+(4*a*c)))))/(2*a);
    y=(b+(sqrt(((b*b)-(4*a*c)))))/(2*a);


    cout << x<< endl;

    cout<< y<< endl;
 return 0;   
}
