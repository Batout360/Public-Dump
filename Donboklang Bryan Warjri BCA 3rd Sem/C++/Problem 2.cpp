// Problem 2
// Check wheiter the number is an armstrong number
#include <iostream>
using namespace std ;
int main ()
{
    int n,r,s;
    cout<<"Enter your number";
    cin>>n;
    s=n;
    while(n!=0)
    {
    r=n%10;
    r=r*r*r;
    n=n/10;
    }
    
    if (s==n){
    cout<<"\n It is a armstrong ";}
    else{
    cout<<"\n it is not an armstong number";
    }
    return 0;
}
