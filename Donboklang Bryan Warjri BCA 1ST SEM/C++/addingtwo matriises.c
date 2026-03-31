#include<stdio.h>
int main()
{
int a[6][6],b[6][6], c[6][6];
int m,n,i,j;
int m2,n2;
do
{
	printf("Enter the value of matrix 1\n");
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
do
{
	printf("Enter the value of matrix 2\n");
	printf("how many rows (max 5)?:\n");
	scanf("%d",&m2);
	printf("how many columns (max 5)?:\n");
	scanf("%d",&n2);
	}
while ((m2>5)||(n2>5));
for(i=0;i<m2;i++)
	for(j=0;j<n2;j++)
	{
	printf("Enter the vale for a[%d][%d]:\n",i,j);
	scanf("%d",&a[i][j]);
		}
printf("The matrix 1 is\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++){
	printf("%4d",a[i][j]);
	}
	printf("\n");
}

printf("The matrix 2 is\n");
for(i=0;i<m2;i++)
{
	for(j=0;j<n2;j++){
	printf("%4d",a[i][j]);
	}
	printf("\n");
}
printf("Matrix 3 The addition of matrix 1 and matrix 2\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++){
	c[i][j]=a[i][j]+b[i][j];
	printf("%4d",c[i][j]);
	}
	printf("\n");
}

printf("End");
return 0;
}
