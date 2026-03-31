#include <stdio.h>

int main()
{
 int a,i;
 printf("\nEnter your number to generate even numbers: ");
 scanf("%d",&a);
 printf("\nThe number entered is = %d",a);
for (i=2; i<=a; i++){
if (i%i==0 && i%2!=0)
printf("\n%d",i);
else
break; 
}
printf("\nEnd"); 
return 0;
}
