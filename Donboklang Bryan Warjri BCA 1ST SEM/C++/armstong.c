#include <stdio.h>
int main()
{
int n,r,s;
printf("Enetr your number");
scanf("%d",&n);
s=n;
while(n!=0)
{
r=n%10;
r=r*r*r;
n=n/10;
}
{
if (s==n)
printf("It is a armstrong ");
else
printf("it is not an armstong number");
}
return 0;
}

