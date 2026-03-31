#include<stdio.h>
int main()
{
int a[6][6];
int m,n,i,j,t;

do
{
	printf("Enter the value of matrix 1\n");
	printf("how many rows (max 5)?:\n");
	scanf("%d",&m);
	printf("how many columns (max 5)?:\n");
	scanf("%d",&n);
	}
while ((m>5)||(n>5));
for(i=0;i<m;i++){
	for(j=0;j<n;j++)
	{
	printf("Enter the vale for a[%d][%d]:\n",i,j);
	scanf("%d",&a[i][j]);
	}
	}
printf("The matrix 1 is\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++){
	printf("%4d",a[i][j]);
	}
	printf("\n");
}
printf("Matrix 3 The addition of matrix 1 and matrix 2\n");
for(i=0;i<=0;i++)
{
for(j=n;j<0;j--){
printf("%4d",a[i][j]);
t+=a[i][j];
printf("End%d",t);
}
}

printf("End %d",t);
return 0;
}
