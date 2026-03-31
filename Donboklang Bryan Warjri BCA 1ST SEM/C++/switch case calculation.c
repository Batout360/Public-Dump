
#include <stdio.h>
int swap(int x) ;
int main()
{
int a;

printf("\nEnter the number from 1-4 :");
printf("\nEnter 1 for addition:\nEnter 2 for subtraction\nEnter 3 for division\nEnter 4 for multiplication \nEnter your number:");
scanf("%d",&a);
swap(a);
return 0;
}
int swap(int x) 
{
int  b,c,d,e;
switch(x)
{
case 1:
printf("\nEnter the first number for addition: ");
scanf("%d",&b);
printf("\nEnter the second number for addition: ");
scanf("%d",&c);
d=b+c;
printf("\nThe addtion of %d and %d =%d ",b,c,d);
break;
case 2:
printf("\nEnter the first number for subtraction: ");
scanf("%d",&b);
printf("\nEnter the second number for subtraction: ");
scanf("%d",&c);
d=b-c;
printf("\nThe subtraction of %d from %d =%d ",b,c,d);
break;
case 3:
printf("\nEnter the first number for the numerial: ");
scanf("%d",&b);
printf("\nEnter the second number for quation: ");
scanf("%d",&c);
d=b/c;
e=b%c;
printf("\nThe qution of %d from %d =%d ",b,c,d);
printf("\nThe remander of %d from %d =%d ",b,c,e);
break;
case 4:
printf("\nEnter the first number for the multiplicaton: ");
scanf("%d",&b);
printf("\nEnter the second number for  multiplication: ");
scanf("%d",&c);
d=b*c;
printf("\nThe multiple of %d and %d = %d ",b,c,d);
break;
default:
printf("\nOut of range");
}
printf("\nEnd");
return 0;
}

