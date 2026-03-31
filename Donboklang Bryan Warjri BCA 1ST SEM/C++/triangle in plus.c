#include <stdio.h>
void triangle(int n);
int main()
{
int n;
printf("Enter the number of rows :");
scanf("%d",&n);
triangle(n);
return 0;
}
void triangle(int n)
{
int i,j,h=0;
for(i=1;j<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("%d ",h++);
		}
	printf("\n");
	}
printf("END");

}
