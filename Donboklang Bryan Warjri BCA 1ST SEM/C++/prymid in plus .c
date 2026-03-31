#include <stdio.h>
void rows(int x);
int main()
{
int row;
printf("Enter the number of rows :");
scanf("%d",&row);
rows(row);
return 0;
}
void rows (int x)
{
int i,j,spc,k,n=1;
spc=x+4-1;
for(i=1;j<=x;i++)
{
	for(k=spc;k>=1;k--)
	{
		printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		printf("%d ",n++);
		}
	printf("\n");
	spc--;
	}
printf("END");
}
