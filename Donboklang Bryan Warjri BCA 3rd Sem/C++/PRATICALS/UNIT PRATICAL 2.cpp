// Find the GDC
 
#include <iostream>
using namespace std ;
void chk(int a,int b)
{
	int i; int gcd ;
	for(i=1;i<=a && i<=b;i++){
	if(a%i==0 && b%i==0){
	gcd=i;
		}
}
	cout<<"\nThe GDC is:";
	cout<<gcd;
}


int main ()
{
	int a,b;
	cout<<"\nEnter your First Number :";
	cin>>a;
	cout<<"\nEnter your Second Number :";
	cin>>b;
	chk(a,b);
	return 0;
}

