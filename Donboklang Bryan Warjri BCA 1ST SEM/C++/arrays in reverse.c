#include<stdio.h>
int main ()
{
	int a[1000];
	int i,n;
	printf("Enter the size of arrays :");
	scanf("%d",&n);
   for(i=0;i<n;i++)
	{
	printf("Enter the vale of a[%d]=",i);
	scanf("%d",&a[i]);
	}
	printf("the array is :\n");
	for(i=0;i<n;i++)
	{
	printf("%4d\t",a[i]);
	}
	printf("\nNow in reverse\n");
	n=n-1;
	for(i=n;i>-1;i--)
	{
	printf("%4d\t",a[i]);
	}
	return 0;
}
