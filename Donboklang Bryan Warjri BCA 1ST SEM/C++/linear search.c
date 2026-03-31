#include<stdio.h>
int main()
{
int a[10],flag=0;
int  n,n1,i;
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
	printf("\nEnter the number you want ot find :");
	scanf("%d",&n1);
	for(i=0;i<n;i++)
	{
	 if(n1==a[i]){
		flag=1;
		break;
	}
	 else
	 {
		flag=flag+i;
		continue;
		}
	}
if (flag==1){
printf("The poision of the number %d is a[%d] ",n1,i);
	}
else {
printf("\nThe number does not exist in this array please try again\n\n");
main();
}
return 0;
}
