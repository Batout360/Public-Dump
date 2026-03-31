#include <stdio.h>
void angle(int n);
int main()
{
int n;
printf("\nEnter the number of rows");
scanf("%d",&n);
angle(n);
return 0;
}
void angle(int n)
{
int j,i;
for(i=1;j<=n;i++)
{
	for(j=1;j<=i;j++)
	{
	printf("*");
	}
	printf("\n");
	}
	printf("end");
}

