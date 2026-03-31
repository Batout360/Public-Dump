#include<stdio.h>
void chk(int);
int main()
{
int n;
printf("\nEnter the number you want to enter:");
scanf("%d",&n);
chk(n);
return 0;
}
void chk(int n)
{
int j=1,t=1;
{
if (n<0)
printf("Error");
else
while(j<=n)
{
	t=t*j;
	j++;
	}
	printf("\nThe fatoral of %d is %d",n,t);
}
}



