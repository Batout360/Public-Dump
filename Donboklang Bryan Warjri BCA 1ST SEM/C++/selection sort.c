#include <stdio.h>

int main ()
{
	int a[10],i,j,n,temp;
	printf("Enter the size of the array");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter the value for a{%d}:",i);
		scanf("%d",&a[i]);
		}
	printf("\nThe unsorted arrays are");	
	for(i=0;i<n;i++){
		printf("%4d\t",a[i]);
		}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
		if (a[i]>a[j]){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;}
		}
	}
	printf("\n The sorted array is \n");
	for(i=0;i<n;i++){
		printf("%4d\t",a[i]);
		}
	return 0;
}

