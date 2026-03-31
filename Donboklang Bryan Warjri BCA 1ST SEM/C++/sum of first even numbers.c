#include <stdio.h>

int main()
{
 int a,i;
 printf("\nEnter your number to add to even numbers: ");
 scanf("%d",&a);
 printf("\nThe number entered is = %d",a);
for (i=2; i<=a; i=i+2)
printf("\n%d",i);
return 0;
}
