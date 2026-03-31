#include<stdio.h>
int main()
{
int a[10];//,b[10];
int  n,i,t=0,j;
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
	printf("\n\nUnique numbers are\n\n");
	for(i=0;i<n;i++)
	{
	int count=1;
		for(j=0;j<n;j++)
		{
		if(i!=j && a[i]==a[j]){
			count=0;
			break;
		}
		}
	if(count>0)
	{printf("\t\t%d",a[i]);
	t=1;}
	}
if(t<1){
printf("\nNo unique elements are found");}
}
printf("\nEnd\n");
return 0;
}
