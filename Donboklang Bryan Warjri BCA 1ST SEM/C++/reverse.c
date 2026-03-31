#include <stdio.h>
void cal(int x);
int main()
{
int n;
printf("Enetr your number");
scanf("%d",&n);
cal(n);
return 0;
}
void cal(int x)
{
int r,rev;
while(x!=0)
{
r=x%10;
rev=rev*10+r;
x=x/10;
}
printf("%d",rev);
}
