#include<stdio.h>
int main ()
{
int a[5];
int i,sum=0;
for (i=0;i<5;i++)
{
	printf("Enter the value of a[%d]",i);
	scanf("%d",&a[i]);
	}
for(i=0;i<5;i++)
{
 sum=sum+a[i];
 printf("The array is\n");
for(i=0;i<5;i++){
printf(" %4d \t",a[i]);
}
}
printf("\nThe sum if the elements is %d",sum);
return 0;
}
