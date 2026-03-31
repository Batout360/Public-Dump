
#include <stdio.h>
int sw(int);
int main()
{
int a;
printf("Enter the number from 1-7 :");
scanf("%d",&a);
sw(a);
return 0;
}
int sw(int x)
{
switch(x)
{
case 1:
printf("Monday");
break;
case 2:
printf("Tuseday");
break;
case 3:
printf("Wednesday");
break;
case 4:
printf("Thursday");
break;
case 5:
printf("Friday");
break;
case 6:
printf("Saturday");
break;
case 7:
printf("Sunday");
break;
default:
printf("Out of range");
}
return 0;
}

