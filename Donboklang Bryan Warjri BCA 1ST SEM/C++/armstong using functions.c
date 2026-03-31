#include <stdio.h>
void amrstrong(int);
int main()
{
 int a;
 printf("\nEnter your number: ");
 scanf("%d",&a);
 printf("\nThe number entered is = %d",a);
 amrstrong(a);
 return 0;
}
void amrstrong(int x) 
{
{
int s=0,d,t;
t=x;
while(t!=0)
{
d=t%10;
s=s+d*d*d;
t=t/10;
}
if(s==x)
printf("\nThe mumber %d is an armstrong number",x);
else
printf("\nThe mumber %d is not an armstrong number",x);
}
printf("\nEnd"); 
} 

