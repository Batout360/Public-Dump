#include <stdio.h>
void swap(int a,int b);
int main()
{
	int a,b;
	printf("\nEnter the first swapable number :");
	scanf("%d",&a);
	printf("\nEnter the second swapable number :");
	scanf("%d",&b);
	 swap(a,b);
	printf("\nThe order of the numbers are %d",a);
	printf(" and %d",b);
	return 0;
	}
	void swap(int a,int b)
	{
	int c;
	c=a;
	a=b;
	printf("\nThe order of the after the numbers are swaped are");
	printf(" %d",b);
	printf(" and %d",c);
}
