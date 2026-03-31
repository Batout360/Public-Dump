#include <stdio.h>

int main()
{
 int a,i,s=0;
 printf("\nEnter your number: ");
 scanf("%d",&a);
 printf("\nThe number entered is = %d",a);
{
for (i=1; i<=a; i++)
printf("\n%d",i);
s=s+1;
}
printf(" The sum of natural numbers is %d",s);
return 0;
}
