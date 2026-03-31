#include<stdio.h>
int main ()
{
	int a[10];
	int i,n;
	int min;
	printf("Enter the size of arrays (max 10):");
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
	min=a[0];
	for(i=0;i<n;i++)
	{	
	if (a[i]<min)
		min=a[i];
	}
	printf("The SMALLEST number of the elements is %d",min);
	return 0;
}
