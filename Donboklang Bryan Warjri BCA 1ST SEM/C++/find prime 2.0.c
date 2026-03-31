#include<stdio.h>
int main()
{
int n,i,count=0;
printf("Enter your number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
printf("\n %d is a Prime number",n);
else
printf("\n %d is not a prime number",n);
printf("\n Count:%d",count);
return 0;
}
