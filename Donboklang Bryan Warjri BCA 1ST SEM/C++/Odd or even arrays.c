#include<stdio.h>
int main()
{
int a[10];//,b[10];
int  n,i;
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
	printf("\nThe  for  even numbers are array is :\n");
	for(i=0;i<n;i++)
	{
	if (a[i]%2==0)
	printf("\nThe Postion of a[%d] is : %d\n",i,a[i]);
	}
	printf("\nThe arrays for odd numbers are \n");
	for (i=0;i<n;i++)
	{
	if (a[i]%2==!0)
	printf("\nThe Postion of a[%d] is : %d\n",i,a[i]);
	}
}
return 0;
}
