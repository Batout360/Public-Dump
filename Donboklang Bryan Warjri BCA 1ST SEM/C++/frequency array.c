#include<stdio.h>
int main()
{
int a[10];//,b[10];
int  n,i,j,count=0;
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
	printf("%4d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{
	count=0;
	for(j=0;j<n;j++)
	{
	if(a[i]==a[j]){
	count++;
	}
	}
	printf("\nThe frequency of %d is = %d ",a[i],count);
	}
printf("\nEnd\n");
return 0;
}
}


