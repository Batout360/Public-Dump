// Problem 1
//The first n numbers divisable by 2
#include <iostream>
using namespace std ;
int main ()
{
int a,i;
cout<<"Enter your number";
cin>>a;
cout<<"The Numbers divisable by 2 are";
cout<<"\n";
for(i=1;i<=a;i++)
{
 if(i%2==0){
    cout<<i;
    cout<<"\n";
 }
 else{
    continue;
 }

}

return 0;
}
