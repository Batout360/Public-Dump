#include <stdio.h>
void swap (int a,int b);
int main()
{
	int a,b;
	printf("\nEnter the first swapable number :");
	scanf("%d",&a);
	printf("\nEnter the second swapable number :");
	scanf("%d",&b);
	swap(a,b);
	return 0;
}
	void swap (int a,int b)
	{
	printf("\nThe order of the numbers are %d",a);
	printf(" and %d",b);
	printf("\nThe order of the after the numbers are swaped are %d",b);
	printf(" and %d",a);
}

