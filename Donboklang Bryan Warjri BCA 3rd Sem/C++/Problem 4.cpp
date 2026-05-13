// Problem 4
//Reverse the Digits
#include <iostream>
using namespace std ;
int main ()
{
    int x,r,rev;
    cout<<"Enter the number :";
    cin>>x;
    cout<<"\nThe number you have Entered is:"<<x;
    while(x!=0)
    {
    r=x%10;
    rev=rev*10+r;
    x=x/10;
    }
    cout<<"\n The Reversed number is";
    cout<<rev;

return 0;
}
