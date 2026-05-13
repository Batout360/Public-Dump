// Problem 3
//CHECK IF ITS A PANANDROME 
#include <iostream>
using namespace std ;
int main ()
{
    int x,r,rev,temp;
    cout<<"Enter the number :";
    cin>>x;
    cout<<"\nThe number you have Entered is:"<<x;
    temp=x;
    while(x!=0)
    {
    r=x%10; 
    rev=rev*10+r;
    x=x/10;
    }
    if(rev==temp){
        cout<<"\n it is a Palndrome";
    }
    else{
        cout<<"\n It is not a Palndrome";
    }

return 0;
}
