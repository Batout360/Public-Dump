#include <stdio.h>

int main()
{
int a;
printf("\nEnter the year to know if it is a leap year or not");
printf("\nEnter the year you want to check :");
scanf("%d",&a);
{
if (a%4==0)
printf("The year %d is a leap year",a);
else
printf("The year %d is not a leap year",a);
}
return 0;
}
