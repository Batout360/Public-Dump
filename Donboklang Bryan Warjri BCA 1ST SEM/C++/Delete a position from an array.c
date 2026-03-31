#include<stdio.h>
int main()
{
int a[10];//,b[10];
int  n,n1,i;
printf("Enter the size of arrays (max 10):");
	scanf("%d",&n);
if (n >10){
printf("\nERROR EXCEEDED AMOUNT OF ARRAYS ENTERED\n\nINVALID INPUT\n\nRESTARTING PROGRAM \n\n");
main();
}
else{
    for(i=0;i<n;i++)
	{
	printf("Enter the vale of a[%d]=",i);
	scanf("%d",&a[i]);
	//b[i]=a[i];
	}
	printf("the array is :\n");
	for(i=0;i<n;i++)
	{
	printf("\nThe array of a[%d] is = %d ",i,a[i]);
	}
	printf("\nEnter the array positon to alter\n");
	scanf("%d",&n1);
	if(n1>n)
	{
	printf("\nError INVALID INPUT RESTARTING PROGRAM\n\n");
	main();
	}
	else{
	for(i=n1;i<n;i++)
	{
	a[i-1]=a[i];
	}
	printf("\nThe Altered arrays are\n");
	for(i=0;i<n-1;i++)
	{
	printf("\nThe array of a[%d] is = %d ",i,a[i]);
	}
	}
printf("\nEnd\n");
return 0;
}
}


