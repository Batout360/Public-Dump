#include<stdio.h>
int main ()
{
	int a[5];
	int i,sum=0;
	for(i=0;i<5;i++){
	printf("Enter the vale of a[%d]",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
	sum=sum+a[i];
	}
	for(i=0;i<5;i++){
	printf("%4d\t",a[i]);
	printf("The array is\n");
	}
	printf("The sum of the elements is %d",sum);
	return 0;
}
