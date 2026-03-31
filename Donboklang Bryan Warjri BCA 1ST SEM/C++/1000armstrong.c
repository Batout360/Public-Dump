#include <stdio.h>
int main()
{
int n,t,d,s;
for(n=1;n<=1000;n++)
{
t=n;
s=0;
while(t!=0)
{
d=t%10;
s=s+d*d*d;
t=t/10;
}
if(s==n)
printf("\n%d",n);
}
return 0;
}

