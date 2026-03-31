#include<stdio.h>
int main()
{
int a[6][6];
int m,n,i,j;
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
printf("The matrix  is\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++){
	printf("%4d",a[i][j]);
	}
	printf("\n");
}

printf("The matrix Swapped for rows and columns are \n");
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++){
	printf("%4d",a[j][i]);
	}
	printf("\n");
}

printf("End");
return 0;
}
