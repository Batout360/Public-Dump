//Right angle Triangle
#include <iostream>

using namespace std ;
void angle(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
cout<<"END";

}

int main()
{
	int n;
	cout<<"Enter the number of rows :";
	cin>>n;
	angle(n);
	return 0;
}




