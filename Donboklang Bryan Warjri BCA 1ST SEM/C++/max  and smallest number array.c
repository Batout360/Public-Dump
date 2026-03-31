#include<stdio.h>
int main ()
{
	int a[10];
	int i,n;
	int min;
	int max;
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
	max=a[0];
	for(i=0;i<n;i++)
	{	
	if (a[i]>max)
		max=a[i];
	}
	printf("\nThe SMALLEST number of the elements is %d\n",min);
	printf("\nThe Largest number of the elements is %d\n",max);
	return 0;
}
