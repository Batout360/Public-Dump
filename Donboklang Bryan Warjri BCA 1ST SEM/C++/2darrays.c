#include<stdio.h>
int main()
{
int a[6][6];
int m,n,i,j;
int sum=0;
do
{
	printf("how many rows (max 5)?:\n");
	scanf("%d",&m);
	printf("how many columns (max 5)?:\n");
	scanf("%d",&n);
	}
while ((m>5)||(n>5));
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
	printf("Enter the vale for a[%d][%d]:\n",i,j);
	scanf("%d",&a[i][j]);
		}
printf("The matrix is\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++){
	printf("%4d",a[i][j]);
	}
	printf("\n");
}
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++){
	sum=sum+a[i][j];
	}
}
printf("The sum of all elements are %d",sum);
return 0;
}
