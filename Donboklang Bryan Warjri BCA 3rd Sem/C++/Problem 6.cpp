//Right angle Triangle with stars

#include <iostream>

using namespace std ;
void angle(int n)
{
	int i,j;
	for(i=1;j<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		printf("\n");
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


